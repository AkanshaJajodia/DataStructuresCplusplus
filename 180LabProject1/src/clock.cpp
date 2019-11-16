/*
 * clock.cpp
 *
 *  Created on: Oct 21, 2019
 *      Author: root
 */


#include "clock.h"
#include <iostream>
#include <iostream>
using namespace std;

clockType::clockType()
{
    hrs = 0;
    mins = 0;
    secs = 0;
}

clockType::clockType(int hours, int minutes, int seconds)
{
    setTime(hours, minutes, seconds);
}

clockType::clockType(int hours, int minutes)
{
    hrs = hours;
    mins = minutes;
    secs = 0;
}


void clockType::setTime(int hours, int minutes, int seconds)
{
    if (0 <= hours && hours < 24)
        hrs = hours;
    else
        hrs = 0;
    if (0 <= minutes && minutes < 60)
        mins = minutes;
    else
        mins = 0;
    if(0 <= seconds && seconds < 60)
        secs = seconds;
    else
        secs = 0;
}
// defining friend function
ostream& operator<<(ostream& os, const clockType& out)

{

	os << out.hrs << " hours " << out.mins << " minutes " << out.secs << " Seconds";
	return os;
}

clockType operator+(const clockType& one, const clockType& two)
{
    clockType three;
    three.hrs = one.hrs + two.hrs;
    three.mins = one.mins + two.mins;
    three.secs = one.secs + two.secs;
    return three;
}
