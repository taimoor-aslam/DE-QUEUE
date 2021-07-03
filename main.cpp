#include"DE-queue.h"

int main()
{
	DEqueue q;
	q.insertFront(1);
	q.insertFront(2);
	q.deleteRear();
	q.display();
	system("pause");
	return 0;
}