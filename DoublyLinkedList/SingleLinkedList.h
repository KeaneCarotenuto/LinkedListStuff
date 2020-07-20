#pragma once
#include "CNode.h"

class SingleLinkedList {

private:
	CNode* firstNode;

public:
	SingleLinkedList();
	~SingleLinkedList();

	void insertAtTheFront(int data);

	void insertInTheMiddle(int data, int position);

	void insertAtTheEnd(int data);

	void deleteFromTheFront();

	void deleteFromTheMiddle(int position);

	void deleteFromTheEnd();

	bool search(int data);

	void display();
};