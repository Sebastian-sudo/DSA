#include <iostream>
#include <cstdlib>
#include <iostream>

struct Node {
	int item;
	struct Node* next;
};

void insertAtBeggining(struct Node** ref, int data) {

}

void insertInside(struct Node* prev, int data) {

}

void insertEnd(struct Node** ref, int data) {
	struct Node* temp = new Node();
	struct Node* last = *ref;

	temp->item = data;
	temp->next = NULL;
}

void delelte(struct Node** ref, int temp) {

}

void print(struct Node* node) {
	while (node != NULL) {
		std::cout << node->item << std::endl;
		node = node->next;
	}
}

class List {

};

int main(int argc, char **argv) {

	return 0;
}