#pragma once
#include "CDoubleNode.h"

class DoublyLinkedList
{
private:
	CDoubleNode* firstNode;

public:
	DoublyLinkedList();
	~DoublyLinkedList();

	void insertAtTheFront(int data);

	void InsertBeforePos(int data, int position);

	void insertAtTheEnd(int data);

	void deleteFromTheFront();

	void DeleteAtPos(int position);

	void deleteFromTheEnd();

	bool search(int data);

	void display();
};

