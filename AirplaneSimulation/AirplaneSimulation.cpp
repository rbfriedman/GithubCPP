// AirplaneSimulation.cpp : Defines the entry point for the console application.


#include "stdafx.h"
#include <iostream>
#include <new>
#include <sstream>
#include <stdlib.h> 
#include <time.h> 
#include "queue.h"
#include <thread>         // std::this_thread::sleep_for
#include <chrono>         // std::chrono::seconds
#include "Airplane.h"
using namespace std;

#define RAND_MAX 21474


int _tmain(int argc, _TCHAR* argv[])
{
	Airplane averagePlane(6.0, 4.0);
	Queue landingQ(30);
	Queue takeOffQ(30);
	bool runWay = false;
	double lrRand, trRand;
	int i = 0;
	srand(time(NULL));
	Airplane genericAirplane;
	while (i < 500){
		std::this_thread::sleep_for(std::chrono::milliseconds(200));
		lrRand = (double)rand()/RAND_MAX;
		trRand = (double)rand()/RAND_MAX;
		printf("%0.3f \n %0.3f\n", lrRand, trRand);
		if (lrRand < averagePlane.getLandingTime()){
			landingQ.Enqueue(genericAirplane);
		}
		if (trRand < averagePlane.getTakeOffTime()){
			takeOffQ.Enqueue(genericAirplane);
		}
		i++;
	}

	
	int num;
	std::cin >> num;
	int * foo;
	foo = new (nothrow) int[num];
	if (foo == nullptr){
		cout << "Error: memory could not be allocated";
	}
	else{
		cout << "Job done well";
	}
	return 0;
}
/*
int main()
{
	Queue line(3);
	int qv;

	qv = 77;
	cout << "Adding queue value: " << qv << endl;
	line.Enqueue(qv);

	qv = 78;
	cout << "Adding queue value: " << qv << endl;
	line.Enqueue(qv);

	qv = 79;
	cout << "Adding queue value: " << qv << endl;
	line.Enqueue(qv);

	qv = 80;
	cout << "Adding queue value: " << qv << endl;
	line.Enqueue(qv);

	qv = line.Dequeue();
	cout << "Removed " << qv << " from the queue" << endl;


	qv = line.Dequeue();
	cout << "Removed " << qv << " from the queue" << endl;

	qv = line.Dequeue();
	cout << "Removed " << qv << " from the queue" << endl;

	qv = line.Dequeue();
}
*/

