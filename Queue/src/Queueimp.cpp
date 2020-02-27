//============================================================================
// Name        : Lab10.cpp
// Author      : Akansha Jajodia
// Copyright   : Your copyright notice
// Description : Queue Implementation Using Array and Templates
//============================================================================

#include <iostream>
#include "queue.cpp" // included because we are using templates
//#include<queue>
using namespace std;

int main() {
	Queue<int> q(8);
 for(int i = 1; i <= 12; i++)
	q.push(i*2);
	q.display();
	//cout<<"Popping out:" <<endl;
	//for(int i =1; i<=4;i++)
	for(int i =1; i<=8;i++)
	q.pop();
	q.display();

	return 0;
}
