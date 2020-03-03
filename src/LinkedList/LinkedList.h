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
	int size();
	int append(int);
	int insert(int, int);
	int search(int);
};

// LinkedList class ///////////////
