/*
 * clock.h
 *
 *  Created on: Oct 21, 2019
 *      Author: root
 */

#ifndef CLOCK_H_
#define CLOCK_H_
#include <iostream>
#include <ostream>

// creating a class called clockTye
class clockType
{
friend std::ostream& operator<<(std::ostream& os, const clockType& out);
// friend function prototype
friend clockType operator+(const clockType& one, const clockType& two);
public:
    clockType();
    clockType(int hours, int minutes, int seconds);
    clockType(int hours, int minutes);
    void setTime(int hours, int minutes, int seconds);

private:
    int hrs;
    int mins;
    int secs;
};

#endif


