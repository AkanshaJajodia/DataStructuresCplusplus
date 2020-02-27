/*
 * stock.h
 *
 *  Created on: Dec 6, 2019
 *      Author: Akansha Jajodia
 */

#ifndef STOCK_H_
#define STOCK_H_

#include<iostream>
#include <string>
using namespace std;

class stock{
public:
	stock(); // default constructor
	string symbol;
	int price;
	int shares;
	friend ostream& operator <<(ostream&, const stock&); // for overloading operator
	friend istream& operator >>(istream&, stock&); // for operator overloading
	stock(string,int,int);

};

class stockNode{
public:
	stock s;
	stockNode *link;
};

class LinkedList{
public:
	int count;
	stockNode *head;
	stockNode *tail;
	LinkedList(); // default constructor
	void RemoveNode(int); // to remove given node
	void InsertNode(const stock&, int); // to insert node at a particular position
	void AddNode(const stock&); // to add node
	void Display(); // display linked list to console
	void DisplayForwardR(stockNode*); // display linked list in a fwd manner
	void FindMiddle(); // finding middle node
	int getCount(); // no of nodes in a list


};



#endif /* STOCK_H_ */
