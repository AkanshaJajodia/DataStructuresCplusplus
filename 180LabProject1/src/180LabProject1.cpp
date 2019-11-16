//============================================================================
// Name        : 180LabProject1.cpp
// Author      : Akansha Jajodia
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "clock.h"
#include <iostream>
using namespace std;

int main()
{
    clockType c1(15, 45, 30); // passing three parameters
    	clockType c2(3, 20); // passing two parameters, third is defaulted to zero
    cout << "c1 is " << c1 << endl; // printing c1
    cout << "c2 is " << c2 << endl; // printing c2
    cout << "c1+c2 is " <<  c1+c2 << endl; // sum of c1 and c2
    c2 = c1+c1 ; // sum of c1 and c1
    cout << "c1+c1 is " << c2; // printing sum of c1 and c1
}
