#ifndef DE_QUEUES_H
#define De_QUEUES_H
#include<iostream>
using namespace std;
const int SIZE=10;
class DEqueue
{
private:
	int queue[SIZE];
	int front;
	int rear;
	int count;
public:
	DEqueue();
	void enqueue(int);
	int deQueue();
	void insertFront(int);
	int deleteRear();
	int isEmpty();
	int isFull();
	void display();
};
#endif