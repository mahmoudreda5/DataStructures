//============================================================================
// Name        : DataStructures.cpp
// Author      : Mahmoud Reda
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "LinkedList/LinkedList.h"
using namespace std;

void print();

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	LinkedList list;

	list.append(10);
	list.insert(9, 0);
	list.insert(8, 1);

	cout << list.getAt(2) << endl;

	cout << list.deleteAT(1) << endl;
	list.print();

	list.clear();

	return 0;
}
