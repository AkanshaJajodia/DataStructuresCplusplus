/*
 * queue.cpp
 *
 *  Created on: Nov 23, 2019
 *      Author: Akansha Jajodia
 */

#include <iostream>
#include "queue.h"
using namespace std;

template<typename T>
Queue<T>::Queue(){

}

template<typename T>
Queue<T>::Queue(T s){
	head = tail =-1;
size = s;
arr = new int[s];
}
template<typename T>
void Queue<T>:: push(T val){

	if(isFull()){
		cout<<"Cannot enter into full queue" <<endl;
	}
/*
	if ((head == 0 && tail == size-1) ||
	            (tail == (head-1)%(size-1)))
	    {
			cout<<"Cannot push into full queue.. queue is overflowing"<<endl;
	        return;
	    }
*/

	    else if (head == -1) /* Insert First Element */
	    {
	    	head = tail = 0;
	        arr[tail] = val;
	    }

	    else if (tail == size-1 && head != 0)
	    {
	    	tail = 0;
	        arr[tail] = val;
	    }

	    else
	    {
	    	tail++;
	        arr[tail] = val;
	    }
}
template<typename T>
int Queue<T>::pop()
{
	if(isEmpty()){
		cout << "Queue is empty!!" << endl; return(-1);
	}
/*
    if (head == -1)
    {
        cout<<"Cannot pop from empty queue " <<endl;
        return INT_MIN;
    }
*/

    int data = arr[head];
    arr[head] = -1;
    if (head == tail)
    {
        head = -1;
        tail = -1;
    }
    else if (head == size-1)
    	head = 0;
    else
    	head++;

    return data;
}
template<typename T>
void Queue<T>::display()
{
    if (head == -1)
    {
        cout<<"Cannot pop from empty queue!!"<<endl;
        return;
    }
    cout<<"Elements in Circular Queue are:" <<endl;
    if (tail >= head)
    {
        for (int i = head; i <= tail; i++)
           cout<< arr[i]<<endl;

    }
    else
    {
        for (int i = head; i < size; i++)
        	 cout<< arr[i]<<endl;


        for (int i = 0; i <= tail; i++)
        	 cout<< arr[i]<<endl;

    }
}
template<typename T>
bool Queue<T> ::isEmpty(){
	if(head==-1){
		return true;
	}
	else return false;
}
template<typename T>
bool Queue<T>::isFull(){
	if(head == 0 && tail == size - 1){
	return true;
	        }
	else return false;    }

