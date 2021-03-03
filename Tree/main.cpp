#include <iostream>
#include <string>

struct Node {
	int data;
	struct Node *left, *right;
	Node(int data) {
		this->data = data;
		left = right = NULL;
	}
};

void preorder(struct Node* node) {
	if (node == NULL) {
		return;
	}
	std::cout << node->data << std::endl;
	preorder(node->left);
	preorder(node->right);
}

void postorder(struct Node* node) {

}

void inorder(struct Node* node) {

}

class Tree {
public:
	Tree();
	int run();
};

Tree::Tree() {
	struct Node* root = new Node(1);
	root->left = new Node(3);
	root->left = new Node(90);
	root->left->left = new Node(43);
	root->left->right = new Node(5);

	std::cout << "preorder traversal\n";
	preorder(root);
}

int Tree::run() {
	std::string temp;
	std::cin >> temp;
	if (temp == "q") {
		return 0;
	}
}


int main(int argc, char **argv) {

	Tree *temp = new Tree();

	while (true) {
		if (!(temp->run())) {
			break;
		}
	}

	return 0;
}