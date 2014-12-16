//define queue
#include "stdafx.h"
#include <iostream>
#include "Airplane.h"
using namespace std;

#define DEFAULT_SIZE 5

class Queue
{
private:
	Airplane *array;
	int Front, Rear;
	int ArraySize;
	int CurrentSize;

public:
	Queue(int qs = DEFAULT_SIZE);
	~Queue();

	// Add element to the queue
	void Enqueue(Airplane v);

	// Remove element from the queue
	Airplane Dequeue();

	// Clear the queue
	void Clear();

	// Is queue empty?
	short IsEmpty() { return (CurrentSize == 0) ? 1 : 0; }

};