#pragma warning(disable:28182)
#pragma warning(disable:6011)
#pragma once
enum Color { RED, BLACK };

template<typename KEY, typename VALUE> class myMap;

template <typename KEY, typename VALUE>
class Node // Узел дерева
{
private:
	friend class myMap<KEY, VALUE>;

	KEY id; // Ключ
	VALUE object; // Значение
	Color color; // Цвет узла

	Node* parent; // Указатель на родителя
	Node* left; // Указатель на элемента слева
	Node* right; // Указатель на элемента справа

	Node() : id(0), parent(nullptr), left(nullptr), right(nullptr) {}
	Node(KEY id, VALUE object) : id(id), object(object), color(RED), parent(nullptr), left(nullptr), right(nullptr) {}

	Node* uncle() // Указатель на дядю
	{
		if (parent == nullptr || parent->parent == nullptr)
			return nullptr;
		if (parent->isOnLeft())
			return parent->parent->right;
		else
			return parent->parent->left;
	}

	Node* brother() // Указатель на брата
	{
		if (parent == nullptr)
			return nullptr;
		if (isOnLeft())
			return parent->right;
		return parent->left;
	}

	bool isOnLeft() { return this == parent->left; } // Проверка, слева ли элемент
	bool hasRedChild() { return (left != nullptr && left->color == RED) || (right != nullptr && right->color == RED); } // Проверка, есть ли красный ребёнок
};

template<typename KEY, typename VALUE>
class myMap // Ассоциативный контейнер
{
private:
	Node<KEY, VALUE>* root; // Корень дерева

	Node<KEY, VALUE>* minKey(Node<KEY, VALUE>* node) // Получить минимальный ключ
	{
		if (node != nullptr)
			while (node->left)
				node = node->left;
		return node;
	}

	Node<KEY, VALUE>* maxKey(Node<KEY, VALUE>* node) // Получить максимальный ключ
	{
		if (node != nullptr)
			while (node->right)
				node = node->right;
		return node;
	}

	int sizeHelper(Node<KEY, VALUE>* root) // Получить размер дерева
	{
		if (root == nullptr)
			return 0;
		int count = 1;
		if (root->left != nullptr)
			count += sizeHelper(root->left);
		if (root->right != nullptr)
			count += sizeHelper(root->right);
		return count;
	}

	void copyTree(Node<KEY, VALUE>*& copiedTreeRoot, Node<KEY, VALUE>* newParent, Node<KEY, VALUE>* otherTreeRoot) // Скопивать дерево
	{
		if (otherTreeRoot == nullptr)
			copiedTreeRoot = nullptr;
		else {
			copiedTreeRoot = new Node<KEY, VALUE>;
			copiedTreeRoot->id = otherTreeRoot->id;
			copiedTreeRoot->object = otherTreeRoot->object;
			copiedTreeRoot->color = otherTreeRoot->color;
			copiedTreeRoot->parent = newParent;
			copyTree(copiedTreeRoot->left, copiedTreeRoot, otherTreeRoot->left);
			copyTree(copiedTreeRoot->right, copiedTreeRoot, otherTreeRoot->right);
		}
	}

	Node<KEY, VALUE>* insert(Node<KEY, VALUE>* root, Node<KEY, VALUE>* node) // Вставить узел в дерево
	{
		if (root == nullptr)
			return node;
		if (node->id < root->id)
		{
			root->left = insert(root->left, node);
			root->left->parent = root;
		}
		else if (node->id > root->id)
		{
			root->right = insert(root->right, node);
			root->right->parent = root;
		}
		return root;
	}

	void rotateLeft(Node<KEY, VALUE>*& root, Node<KEY, VALUE>*& node) // Поворот влево
	{
		Node<KEY, VALUE>* nodeRight = node->right;
		node->right = nodeRight->left;
		if (node->right != nullptr)
			node->right->parent = node;
		nodeRight->parent = node->parent;
		if (node->parent == nullptr)
			root = nodeRight;
		else if (node == node->parent->left)
			node->parent->left = nodeRight;
		else
			node->parent->right = nodeRight;
		nodeRight->left = node;
		node->parent = nodeRight;
	}

	void rotateRight(Node<KEY, VALUE>*& root, Node<KEY, VALUE>*& node) // Поворот вправо
	{
		Node<KEY, VALUE>* nodeLeft = node->left;
		node->left = nodeLeft->right;
		if (node->left != nullptr)
			node->left->parent = node;
		nodeLeft->parent = node->parent;
		if (node->parent == nullptr)
			root = nodeLeft;
		else if (node == node->parent->left)
			node->parent->left = nodeLeft;
		else
			node->parent->right = nodeLeft;
		nodeLeft->right = node;
		node->parent = nodeLeft;
	}

	void fixViolation(Node<KEY, VALUE>*& root, Node<KEY, VALUE>*& node) // Устранение нарушений
	{
		Node<KEY, VALUE>* nodeParent = nullptr;
		Node<KEY, VALUE>* nodeGrandParent = nullptr;
		while ((node != root) && (node->color != BLACK) && (node->parent->color == RED))
		{
			nodeParent = node->parent;
			nodeGrandParent = node->parent->parent;
			if (nodeParent == nodeGrandParent->left)
			{
				Node<KEY, VALUE>* nodeUncle = nodeGrandParent->right;
				if (nodeUncle != nullptr && nodeUncle->color == RED)
				{
					nodeGrandParent->color = RED;
					nodeParent->color = BLACK;
					nodeUncle->color = BLACK;
					node = nodeGrandParent;
				}
				else {
					if (node == nodeParent->right)
					{
						rotateLeft(root, nodeParent);
						node = nodeParent;
						nodeParent = node->parent;
					}
					rotateRight(root, nodeGrandParent);
					Color color = nodeParent->color;
					nodeParent->color = nodeGrandParent->color;
					nodeGrandParent->color = color;
					node = nodeParent;
				}
			}
			else {
				Node<KEY, VALUE>* nodeUncle = nodeGrandParent->left;
				if ((nodeUncle != nullptr) && (nodeUncle->color == RED))
				{
					nodeGrandParent->color = RED;
					nodeParent->color = BLACK;
					nodeUncle->color = BLACK;
					node = nodeGrandParent;
				}
				else {
					if (node == nodeParent->left)
					{
						rotateRight(root, nodeParent);
						node = nodeParent;
						nodeParent = node->parent;
					}
					rotateLeft(root, nodeGrandParent);
					Color color = nodeParent->color;
					nodeParent->color = nodeGrandParent->color;
					nodeGrandParent->color = color;
					node = nodeParent;
				}
			}
		}
		root->color = BLACK;
	}

	void deleteNode(Node<KEY, VALUE>* node)  // Удаление узла
	{ 
		Node<KEY, VALUE>* otherNode = replace(node);
		bool bothBlack = ((otherNode == nullptr || otherNode->color == BLACK) && (node->color == BLACK));
		Node<KEY, VALUE>* parent = node->parent;
		if (otherNode == nullptr) {
			if (node == root)
				root = nullptr;
			else {
				if (bothBlack)
					fixBlackBlack(node);
				else if (node->brother() != nullptr)
						node->brother()->color = RED;
				if (node->isOnLeft())
					parent->left = nullptr;
				else
					parent->right = nullptr;
			}
			delete node;
			return;
		}
		if (node->left == nullptr || node->right == nullptr) {
			if (node == root) {
				node->id = otherNode->id;
				node->left = node->right = nullptr;
				delete otherNode;
			}
			else {
				if (node->isOnLeft())
					parent->left = otherNode;
				else 
					parent->right = otherNode;
				delete node;
				otherNode->parent = parent;
				if (bothBlack)
					fixBlackBlack(otherNode);
				else
					otherNode->color = BLACK;
			}
			return;
		}
		swapKeys(otherNode, node);
		swapValues(otherNode, node);
		deleteNode(otherNode);
	}

	Node<KEY, VALUE>* replace(Node<KEY, VALUE>* node) // Замена узла
	{
		if (node->left != nullptr && node->right != nullptr)
		{
			Node<KEY, VALUE>* temp = node->right;
			while (temp->left != nullptr)
				temp = temp->left;
			return temp;
		}
		if (node->left == nullptr && node->right == nullptr)
			return nullptr;
		if (node->left != nullptr)
			return node->left;
		else
			return node->right;
	}

	void fixBlackBlack(Node<KEY, VALUE>* node)  // Устранение двух чёрных узлов подряд
	{
		if (node == root)
			return;
		Node<KEY, VALUE>* brother = node->brother();
		Node<KEY, VALUE>* parent = node->parent;
		if (brother == nullptr) {
			fixBlackBlack(parent);
		}
		else {
			if (brother->color == RED) {
				parent->color = RED;
				brother->color = BLACK;
				if (brother->isOnLeft()) {
					rotateRight(root, parent);
				}
				else {
					rotateLeft(root, parent);
				}
				fixBlackBlack(node);
			}
			else {
				if (brother->hasRedChild()) {
					if (brother->left != nullptr && brother->left->color == RED) {
						if (brother->isOnLeft()) {
							brother->left->color = brother->color;
							brother->color = parent->color;
							rotateRight(root, parent);
						}
						else {
							brother->left->color = parent->color;
							rotateRight(root, brother);
							rotateLeft(root, parent);
						}
					}
					else {
						if (brother->isOnLeft()) {
							brother->right->color = parent->color;
							rotateLeft(root, brother);
							rotateRight(root, parent);
						}
						else {
							brother->right->color = brother->color;
							brother->color = parent->color;
							rotateLeft(root, parent);
						}
					}
					parent->color = BLACK;
				}
				else {
					brother->color = RED;
					if (parent->color == BLACK)
						fixBlackBlack(parent);
					else
						parent->color = BLACK;
				}
			}
		}
	}

	void fixRedRed(Node<KEY, VALUE>* node)   // Устранение двух красных узлов подряд
	{
		if (node == root) {
			node->color = BLACK;
			return;
		}
		Node<KEY, VALUE>* parentNode = node->parent;
		Node<KEY, VALUE>* grandParentNode = parentNode->parent;
		Node<KEY, VALUE>* uncleNode = node->uncle();
		if (parentNode->color != BLACK) {
			if (uncleNode != nullptr && uncleNode->color == RED) {
				parentNode->color = BLACK;
				uncleNode->color = BLACK;
				grandParentNode->color = RED;
				fixRedRed(grandParentNode);
			}
			else {
				if (parentNode->isOnLeft()) {
					if (node->isOnLeft()) {
						swapColors(parentNode, grandParentNode);
					}
					else {
						rotateLeft(root, parentNode);
						swapColors(node, grandParentNode);
					}
					rotateRight(root, grandParentNode);
				}
				else {
					if (node->isOnLeft()) {
						rotateRight(root, parentNode);
						swapColors(node, grandParentNode);
					}
					else {
						swapColors(parentNode, grandParentNode);
					}
					rotateLeft(root, grandParentNode);
				}
			}
		}
	}

	void swapColors(Node<KEY, VALUE>* x1, Node<KEY, VALUE>* x2)   // Поменяться цветами
	{ 
		Color temp;
		temp = x1->color;
		x1->color = x2->color;
		x2->color = temp;
	}

	void swapKeys(Node<KEY, VALUE>* x1, Node<KEY, VALUE>* x2)  // Поменяться ключами
	{
		KEY temp;
		temp = x1->id;
		x1->id = x2->id;
		x2->id = temp;
	}

	void swapValues(Node<KEY, VALUE>* x1, Node<KEY, VALUE>* x2)  // Поменяться значениями
	{
		VALUE temp;
		temp = x1->object;
		x1->object = x2->object;
		x2->object = temp;
	}

	void destroy(Node<KEY, VALUE>*& root) // Разрушить дерево
	{
		if (root == nullptr)
			return;
		destroy(root->left);
		destroy(root->right);
		delete root;
	}

public:
	myMap() : root(nullptr) {}
	~myMap() { destroy(root); }

	myMap(const myMap<KEY, VALUE>& other) // Конструктор копирования
	{
		if (other.root == nullptr)
			root = nullptr;
		else
			copyTree(root, nullptr, other.root);
	}

	const myMap<KEY, VALUE>& operator=(const myMap<KEY, VALUE>& other)
	{
		if (this != &other)
		{
			if (root != nullptr)
				destroy(root);
			copyTree(root, nullptr, other.root);
		}
		return *this;
	}

	Node<KEY, VALUE>* emplace(const KEY& id, const VALUE& object)  // Добавление нового элемента
	{
		Node<KEY, VALUE>* node = new Node<KEY, VALUE>(id, object);
		root = insert(root, node);
		fixViolation(root, node);
		return root;
	}

	int size() { return sizeHelper(root); } // Получить размер дерева

	void erase(KEY id)  // Удалить элемент по ключу
	{
		if (root == nullptr)
			return;
		Node<KEY, VALUE>* node = *&root;
		while (node != nullptr && node->id != id)
		{
			if (id < node->id)
				node = node->left;
			else
				node = node->right;
		}
		if (node == nullptr)
			return;
		deleteNode(node);
	}

	class iterator // Итератор по дереву
	{
	private:
		Node<KEY, VALUE>* current; // Указатель на текущий элемент
	public:
		iterator() : current(nullptr) {}
		iterator(Node<KEY, VALUE>* p) : current(p) {}

		bool operator==(const iterator& other) const { return this->current == other.current; }
		bool operator!=(const iterator& other) const { return this->current != other.current; }
		Node<KEY, VALUE>& operator*() { return *current; }
		Node<KEY, VALUE>* operator->() { return current; }
		iterator& operator++() 
		{
			if (current == nullptr) {
				while (current->left != nullptr) {
					current = current->left;
				}
			}
			else if (current->right != nullptr) {
				current = current->right;
				while (current->left != nullptr) {
					current = current->left;
				}
			}
			else {
				Node<KEY, VALUE>* p = current->parent;
				while (p != nullptr && current == p->right) {
					current = p;
					p = p->parent;
				}
				current = p;
			}
			return *this;
		}

		KEY& first() { return current->id; } // Получить ключ
		VALUE& second() { return current->object; } // Указатель значение
	};

	VALUE& at(const KEY& id) // Получить значение по ключу
	{
		iterator it = find(id);
		if (it == end())
			throw std::exception();
		return it->object;
	}

	iterator find(KEY id) // Получить итератор искомый элемент
	{
		Node<KEY, VALUE>* node = root;
		while (node != nullptr && node->id != id)
		{
			if (id < node->id)
				node = node->left;
			else
				node = node->right;
		}
		return iterator(node);
	}

	iterator begin() { return iterator(minKey(root)); } // Получить первый элемент 
	iterator end() { return iterator(nullptr); } // Получить элемент, находящийся за последним
	iterator rbegin() { return iterator(maxKey(root)); } // Получить последний элемент
};