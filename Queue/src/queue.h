/*
 * queue.h
 *
 *  Created on: Nov 23, 2019
 *      Author: Akansha Jajodia
 */

#ifndef QUEUE_H_
#define QUEUE_H_

#include <iostream>
//#define SIZE 8   /* Size of Circular Queue */

using namespace std;
template <typename T> // creating template
class Queue{
	public:
	Queue(); // default constructor
	Queue(T);    //constructor
	void push(T); // push data in the array/queue
	int pop(); // pop data from array/queue
	void display(); // to display elements in a queue
	bool isFull(); //  to check if queue is full
	bool isEmpty(); // to check if queue is empty

	private:
    int size;
	int *arr;
	int head, tail;
};

#endif /* QUEUE_H_ */
