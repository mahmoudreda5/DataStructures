#include <bits/stdc++.h>

using namespace std;

// Node class /////////////////////
class Node {
public:
	int number;
	Node *next;

	Node(int);
};

// Node class /////////////////////

// LinkedList class ///////////////
class LinkedList {
public:
	int length;
	Node *head, *tail;

	LinkedList();
	~LinkedList();
	int size();
	int append(int);
	int insert(int, int);
	int getAt(int);
	int search(int);
	int deleteAT(int);
	void clear();
	void print();
};

// LinkedList class ///////////////
