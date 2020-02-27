/*
 * stock.cpp
 *
 *  Created on: Dec 6, 2019
 *      Author: Akansha Jajodia
 */


#include <iostream>
#include <string>
#include "stock.h"
using namespace std;

// overloading operator
ostream& operator <<(ostream& os, const stock& stock1){
	os<<stock1.symbol<<"  "<<stock1.price<<"  "<<stock1.shares<<endl;
	return os;
}

// overloading operator
istream& operator >>(istream& is, stock& stock1){
	cout<<"Company Name : ";
	is>>stock1.symbol;
	cout<<"Price of each stock : ";
	is>>stock1.price;
	cout<<"Number of stocks : ";
	is>>stock1.shares;
	return is;
}
// initializing constructor members
stock::stock(string sym,int pr,int sh){
	symbol=sym;
	price=pr;
	shares=sh;
}

// initializing default values
stock::stock(){
	symbol=' ';
	price=0;
	shares=0;
}

// default value of linked list
LinkedList::LinkedList(){
	count=0;
	head = NULL;
	tail = NULL;
}

// adding node to linked list

void LinkedList :: AddNode(const stock& stock1){
	stockNode *NodeToInsert =new stockNode;
	NodeToInsert->s=stock1;
	NodeToInsert->link=NULL;
	if(head==NULL){
		head=NodeToInsert;
		tail=NodeToInsert;
		count++;
	}
	else{
		tail->link=NodeToInsert;
		tail=NodeToInsert;
		count++;
	}
}

// first node
void LinkedList::InsertNode(const stock& stock1, int location){
	if((location>count+1)||(location<1)){
		cout<<"Location out of range"<<endl;
		cout<<endl;
	}
	else{
		if(location==count+1){
			AddNode(stock1);
			cout<<"Stock has been inserted to Linked List"<<endl;
			cout<<endl;
		}
		else{
			if(location==1){
				stockNode *NodeToInsert =new stockNode;
				NodeToInsert->s=stock1;
				NodeToInsert->link=head;
				head=NodeToInsert;
				count++;
				cout<<"Stock has been inserted to Linked List"<<endl;
				cout<<endl;
			}
			else{
				int i=1;
				stockNode *NodeToInsert =new stockNode;
				NodeToInsert->s=stock1;
				stockNode *current;
				current=head;
				while(i<location-1){
					current=current->link;
					i++;
				}
				NodeToInsert->link=current->link;
				current->link=NodeToInsert;
				count++;
				cout<<"Stock has been inserted to Linked List"<<endl;
				cout<<endl;
			}
		}
	}
}
// Remove Node
void LinkedList::RemoveNode(int location){
	if(head==NULL){
		cout<<"Couldn't operate on Empty list"<<endl;
		cout<<endl;
	}
	else{
		if((location>count)||(location<1)){
			cout<<"Location out of range"<<endl;
			cout<<endl;
		}
		else{
			if(location==1){
				stockNode *ToDelete;
				ToDelete = head;
				head=head->link;
				count--;
				delete ToDelete;
				cout<<"Stock Node has been removed from Linked List"<<endl;
				cout<<endl;
			}
			else{
				stockNode *ToDelete;
				int i=1;
				stockNode *current;
				current=head;
				while(i<location-1){
					current=current->link;
					i++;
				}
				ToDelete = current->link;
				current->link=ToDelete->link;
				count--;
				delete ToDelete;
				cout<<"Stock Node has been removed from Linked List"<<endl;
				cout<<endl;
			}
		}
	}
}
//Find Middle
void LinkedList::FindMiddle(){
	if(head==NULL){
		cout<<"Cannot operate on Empty list"<<endl;
		cout<<endl;
	}
	else{
		int i=1;
		stockNode *middle;
		middle=head;
		while(i<(count/2)){
			middle=middle->link;
			i++;
		}
		if((count%2)==1){
			cout<<"Middle Node of list is : "<<middle->link->s<<endl;
		}
		else{
			cout<<"Middle nodes of list are : "<<endl;
			cout<<middle->s;
			cout<<middle->link->s;
		}
	}
}

int LinkedList::getCount(){
	return count;
}

// Display
void LinkedList::Display(){
	if(head==NULL){
		cout<<"Right now list is empty.. please insert some stock"<<endl;
		cout<<endl;
	}
	else if(count ==1){
		stockNode *current;
		current=head;
		cout <<"You have only one stock in the list as of now "<<endl;
		cout<<current->s;
		DisplayForwardR(current->link);
	}
	else{
		stockNode *current;
		current=head;
		cout<< "You have " << count << " stocks in the list as of now"  << endl;
		cout<<"Content of list are as : "<<endl;
		DisplayForwardR(current);

			}
	}

void LinkedList::DisplayForwardR(stockNode* current){
	if(current!=NULL){
		cout<<current->s;
		DisplayForwardR(current->link);
	}
}




