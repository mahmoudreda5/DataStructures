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
	assert(position >= 0 && position < this->length);

	//TODO: handle zero position case
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
	Node *it = this->head;

	int index = 0;
	while(it != NULL) {
		if(it->number == number)
			return index;

		index++;
	}

	return -1;
}

int LinkedList::getAt(int position) {
	assert(position >= 0 && position < this->length);

	Node *it = this->head;
	while(position--)
		it = it->next;

	return it->number;
}



void LinkedList::clear() {
	Node *it = this->head;
	while(it != NULL) {
		this->head = this->head->next;
		delete it;
		it = this->head;
	}

	this->length = 0;
	this->tail = NULL;
}

int LinkedList::deleteAT(int position) {
	assert(position >= 0 && position < this->length);

	//TODO: handle zero position case
	if(this->head == NULL) {  // linked list has one element, we can call clear
		this->clear();
		return this->length;
	}

	Node *it = this->head;
	while(--position)
		it = it->next;

	Node *del = it->next;
	it->next = it->next->next;
	delete del;

	return --this->length;
}

LinkedList::~LinkedList() {
	this->clear();
}

// for testing
void LinkedList::print() {
	Node *it = this->head;

	cout << "--------- output ---------" << endl;
	while(it != NULL) {
		cout << it->number << " ";
		it = it->next;
	}

	cout << endl << "--------------------------" << endl;
}

// linked List ////////////////////////


