#include "stdafx.h"
#include "queue.h"
#include "Airplane.h"
Queue::Queue(int qs)
{
	ArraySize = qs;
	array = ArraySize ? new Airplane[ArraySize] : NULL;
	Clear();
}
Queue::~Queue()
{
	if (array) delete[] array;
}

void Queue::Clear()
{
	CurrentSize = 0;
	Front = 0;
	Rear = ArraySize - 1;
}

// Add element to the list
void Queue::Enqueue(Airplane v)
{
	if (CurrentSize >= ArraySize)
	{
		cout << "Warning: queue overflow" << endl;
		return;
	}
	if (Rear == ArraySize - 1)
		Rear = 0;
	else
		Rear++;
	array[Rear] = v;
	CurrentSize++;
}

// Remove element from the list
Airplane Queue::Dequeue()
{
	Airplane tmp;
	if (IsEmpty())
	{
		cout << "Warning: queue underflow" << endl;
		return tmp;
	}
	tmp = array[Front];
	if (Front == ArraySize - 1)
		Front = 0;
	else
		Front++;
	CurrentSize--;
	return tmp;
}
