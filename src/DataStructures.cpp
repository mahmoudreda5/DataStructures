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

int main() {
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!
	LinkedList list;
	cout << list.size() << endl;

	list.append(10);
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	list.append(10);
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	list.append(10);
	cout << "!!!Hello World!!!" << endl; // prints !!!Hello World!!!

	cout << list.size() << endl;
	list.insert(7, 2);
	cout << list.size() << endl;
	list.insert(7, 2);
	cout << list.size() << endl;

	return 0;
}
