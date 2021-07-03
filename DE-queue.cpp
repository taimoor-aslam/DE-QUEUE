#include "DE-queue.h"

DEqueue::DEqueue()
{
	count=0;
	front=rear=-1;
}
void DEqueue::enqueue(int val)
{
	if(isFull())
	{
		cout<<"Queue is full."<<endl;
	}
	else
	{
		if(rear==-1)
		{
			front=0;
		}
		rear=(rear+1)%SIZE;
		queue[rear]=val;
	}
	count++;
}
int DEqueue::deQueue()
{
	int val;
	if(isEmpty())
	{
		cout<<"Queue is Empty."<<endl;
	}
	else
	{
		val=queue[front];
		front=(front+1)%SIZE;
		count--;
		if(count==0)
		{
			rear=front=-1;
		}

	}
	return val;
}
void DEqueue::insertFront(int val)
{
	if(isFull())
	{
		cout<<"Queue is full."<<endl;
	}
	else
	{
		if(rear==-1)
		{
			front=0;
		}
		else
		{
			for(int i=rear;i>=front;i--)
			{
				queue[i+1]=queue[i];
			}
		}
				queue[front]=val;
				rear=(rear+1)%SIZE;
	}
		count++;
}
int DEqueue::deleteRear()
{
	int val;
	if(isEmpty())
	{
		cout<<"Queue is Empty."<<endl;
	}
	else
	{
		 val=queue[rear];
		 rear--;
		 count--;
		 if(count==0)
		 {
			 rear=front=-1;
		 }
			 return val;
	}
}
int DEqueue::isEmpty()
{
	return count==0;
}
int DEqueue::isFull()
{
	return count==SIZE;
}
void DEqueue::display()
{
	cout<<"Numbers in Queue are."<<endl;
	for(int i=0;i<count;i++)
	{
		cout<<queue[i]<<" ";
	}
	cout<<endl;
}