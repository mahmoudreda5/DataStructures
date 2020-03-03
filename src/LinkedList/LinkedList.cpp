#include "LinkedList.h";

// Node ////////////////////////
Node::Node(int number) {
	this->number = number;
	this->next = NULL;
}

// Node ////////////////////////

// linked List ////////////////////////
LinkedList::LinkedList() {
	this->length = 0;
	this->head = NULL;
	this->tail = NULL;
}

int LinkedList::append(int number) {
	if(!this->length)
		this->head = this->tail = new Node(number);
	else {
		this->tail->next = new Node(number);
		this->tail = this->tail->next;
	}

	return ++this->length;
}

int LinkedList::size() {
	return this->length;
}

int LinkedList::insert(int number, int position) {
	assert(position >= 0 || position < this->length);

	Node *it = this->head;
	while(position--)
		it = it->next;

	Node *temp = new Node(number);
	temp->next = it->next;
	it->next = temp;

	return ++this->length;
}

// return first occurrence | -1
int LinkedList::search(int number) {

}

// linked List ////////////////////////


