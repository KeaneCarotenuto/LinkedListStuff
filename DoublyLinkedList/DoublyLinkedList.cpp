#include "DoublyLinkedList.h"
#include <iostream>
using namespace std;

DoublyLinkedList::DoublyLinkedList() :
	firstNode(nullptr)
{
}

DoublyLinkedList::~DoublyLinkedList()
{
}

void DoublyLinkedList::insertAtTheFront(int data)
{
	CDoubleNode* newNode = new CDoubleNode;
	newNode->setData(data);

	if (firstNode == nullptr) {
		firstNode = newNode;
	}
	else {
		newNode->setNextNode(firstNode);
		firstNode->setPrevNode(newNode);
		firstNode = newNode;
	}
}

void DoublyLinkedList::InsertBeforePos(int data, int position)
{
	CDoubleNode* newNode = new CDoubleNode;
	newNode->setData(data);

	CDoubleNode* tempNode = firstNode;

	if (position <= 0) {
		cout << endl << "Could Insert at Position, inserted at front." << endl;
		insertAtTheFront(data);
		return;
	}

	for (int i = 1; i < position; i++)
	{

		if (tempNode->getNextNode() == nullptr) {
			cout << endl << "Could Insert at Position, inserted at end." << endl;
			insertAtTheEnd(data);
			return;
		}
		else {
			tempNode = tempNode->getNextNode();
		}
	}
	newNode->setNextNode(tempNode->getNextNode());
	tempNode->getNextNode()->setPrevNode(newNode);
	tempNode->setNextNode(newNode);
	newNode->setPrevNode(tempNode);
	
}

void DoublyLinkedList::insertAtTheEnd(int data)
{
	CDoubleNode* newNode = new CDoubleNode;
	newNode->setData(data);

	CDoubleNode* tempNode = firstNode;

	while (tempNode->getNextNode() != nullptr)
	{
		tempNode = tempNode->getNextNode();
	}
	newNode->setPrevNode(tempNode);
	tempNode->setNextNode(newNode);
}

void DoublyLinkedList::deleteFromTheFront()
{
	if (firstNode != nullptr) {
		CDoubleNode* tempNode = firstNode;

		firstNode = firstNode->getNextNode();
		if (firstNode != nullptr) firstNode->setPrevNode(nullptr);

		delete tempNode;
	}
}

void DoublyLinkedList::DeleteAtPos(int position)
{
	bool fail = false;

	CDoubleNode* tempNode = firstNode;

	if (position == 0) {
		deleteFromTheFront();
		return;
	}
	else if (position < 0) {
		fail = true;
	}

	for (int i = 0; i < position; i++)
	{
		
		if (tempNode == nullptr) {
			fail = true;
			break;
		}
		else {
			tempNode = tempNode->getNextNode();
		}
	}

	if (fail) {
		cout << endl << "Could Delete Reach Position, did not do anything." << endl;
		return;
	}
	else {
		if (tempNode->getNextNode() == nullptr) deleteFromTheEnd();
		else {
			tempNode->getPrevNode()->setNextNode(tempNode->getNextNode());
			tempNode->getNextNode()->setPrevNode(tempNode->getPrevNode());
		}
		delete tempNode;
	}
}

void DoublyLinkedList::deleteFromTheEnd()
{
	CDoubleNode* tempNode = firstNode;
	if (tempNode == nullptr) {
		return;
	}

	while (tempNode->getNextNode() != nullptr) {
		tempNode = tempNode->getNextNode();
	}
	if (tempNode->getPrevNode() == nullptr) {
		cout << endl << "Only one element, deleted from front" << endl;
		deleteFromTheFront();
		return;
	}

	tempNode->getPrevNode()->setNextNode(nullptr);
	delete tempNode;
	
}

bool DoublyLinkedList::search(int data)
{
	bool isThere = false;
	CDoubleNode* tempNode = firstNode;

	while (tempNode != nullptr) {
		if (tempNode->getData() == data) {
			isThere = true;
		}
		tempNode = tempNode->getNextNode();
	}


	return isThere;
}

void DoublyLinkedList::display()
{
	CDoubleNode* tempNode = firstNode;

	cout << endl;

	while (tempNode != nullptr) {
		cout << tempNode->getData() << ", ";
		tempNode = tempNode->getNextNode();
	}
	cout << " -END" << endl;
}
