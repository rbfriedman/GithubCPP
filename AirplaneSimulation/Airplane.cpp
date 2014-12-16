/*Suppose that a certain airport has one runway, that each airplane takes landingTime minutes to land and takeOffTime to take off, and that on the average, takeOffRate planes take off and landingRate planes land each hour. Assume the the planes arrive at random instants of time.  There are two types of queues: a queue of airplanes waiting to land and a queue of airplanes waiting to take off.  Because it is more expensive to keep a plane airborne than to keep one waiting on the ground, we assume that the airplanes in the landing queue have priority over those in the takeoff queue.

Write a program to simulate this airport's operation.  You might assume a simulated clock that advances in one minute intervals. For each minute, generate two random numbers:  If the first is less than landingRate/60, a "landing arrival" has occurred and is added to the landing queue; and if the second is less than takeOffRate/60, a "takeoff arrival" has occurred, and is added to the takeoff queue.  Next, check whether the runway is free.  If it is, first check whether the landing queue is non-empty, and if so, allow the first airplane to land; otherwise consider the takeoff queue.  

Have the program calculate the average queue length and the average time that an airplane spends in a queue.  You should also investigate the effect of varying arrival and departure rates to simulate the prime and slack times of the day, and what happens if the amount of time to land or take off is increased or decreased.

Create your own data structures.*/

#include <iostream>
#include "stdafx.h"
#include "Airplane.h"
using namespace std;

Airplane::Airplane(){
	setValues(6.34, 3.3);
}
Airplane::~Airplane(){
	setValues(0, 0);
}
void Airplane::setValues(double l, double t) {
	landingTime = l;
	takeOffTime = t;
}