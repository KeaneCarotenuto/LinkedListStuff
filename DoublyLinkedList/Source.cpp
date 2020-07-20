#include <string>
#include <cmath>
#include <iostream>
#include <windows.h>

#include"CNode.h"

#include"SingleLinkedList.h"
#include"DoublyLinkedList.h"
#include"CStack.h"
#include"CQueue.h"
using namespace std;

int main() {
	//DoublyLinkedList doubleList;

	//doubleList.insertAtTheFront(1);
	//doubleList.insertAtTheEnd(2);
	//doubleList.insertAtTheEnd(4);
	//doubleList.InsertBeforePos(3,2);
	//doubleList.display();				// 1,2,3,4

	//doubleList.InsertBeforePos(10, 3);	//1,2,3,10,4
	//doubleList.DeleteAtPos(3);	//1,2,3,4

	//doubleList.deleteFromTheFront();	//2,3,4
	//doubleList.deleteFromTheEnd();		//2,3

	//cout << endl << (doubleList.search(10) ? "found" : "notfound") << endl;	// not found
	//cout << endl << (doubleList.search(3) ? "found" : "notfound") << endl;	// found

	//doubleList.display(); // 2,3

	//doubleList.InsertBeforePos(99, 1);

	//doubleList.display();

	//doubleList.deleteFromTheFront();
	//doubleList.deleteFromTheFront();
	//doubleList.deleteFromTheEnd();
	//doubleList.deleteFromTheFront();

	//doubleList.display();




	//SingleLinkedList singleList;

	//singleList.insertAtTheFront(1);
	//singleList.insertAtTheEnd(2);
	//singleList.insertAtTheEnd(4);
	//singleList.insertInTheMiddle(3, 2);
	//singleList.display();				// 1,2,3,4

	//singleList.insertInTheMiddle(10, 3);	//1,2,3,10,4
	//singleList.deleteFromTheMiddle(3);	//1,2,3,4

	//singleList.deleteFromTheFront();	//2,3,4
	//singleList.deleteFromTheEnd();		//2,3

	//cout << endl << (singleList.search(10) ? "found" : "notfound") << endl;	// not found
	//cout << endl << (singleList.search(3) ? "found" : "notfound") << endl;	// found

	//singleList.display(); // 2,3

	//singleList.insertInTheMiddle(99, 1);

	//singleList.display();

	//singleList.deleteFromTheFront();
	//singleList.deleteFromTheFront();
	//singleList.deleteFromTheEnd();
	//singleList.deleteFromTheFront();

	//singleList.display();

	CQueue myQueue;

	myQueue.Push(10);
	myQueue.Push(12);
	
	int peekData;
	if (myQueue.Peek(peekData)) {
		cout << peekData << endl;
	}
	int popData;
	if (myQueue.Pop(popData)) {
		cout << popData << endl;
	}

	cout << myQueue.IsEmpty() << endl;

	if (myQueue.Peek(peekData)) {
		cout << peekData << endl;
	}
	if (myQueue.Pop(popData)) {
		cout << popData << endl;
	}
	if (myQueue.Pop(popData)) {
		cout << popData << endl;
	}

	cout << myQueue.IsEmpty() << endl;


	return 0;
}