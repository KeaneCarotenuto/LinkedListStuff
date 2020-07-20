#include <iostream>

#include "SingleLinkedList.h"
using namespace std;

SingleLinkedList::SingleLinkedList():
	firstNode(nullptr)
{
}

SingleLinkedList::~SingleLinkedList()
{
}

void SingleLinkedList::insertAtTheFront(int data)
{
	CNode* newNode = new CNode;
	newNode->setData(data);
	
	if (firstNode == nullptr) {
		firstNode = newNode;
	}
	else {
		newNode->setNextNode(firstNode);
		firstNode = newNode;
	}
}

void SingleLinkedList::insertInTheMiddle(int data, int position)
{
	CNode* newNode = new CNode;
	newNode->setData(data);

	CNode* tempNode = firstNode;

	if (position <= 0) {
		insertAtTheFront(data);
		return;
	}
	
	for (int i = 0; i < position-1; i++)
	{

		if (tempNode->getNextNode() == nullptr) {
			cout << endl << "Could Insert at Position, inserted at end." << endl;
			break;
		}
		else {
			tempNode = tempNode->getNextNode();
		}
	}
	newNode->setNextNode(tempNode->getNextNode());
	tempNode->setNextNode(newNode);
}

void SingleLinkedList::insertAtTheEnd(int data)
{
	CNode* newNode = new CNode;
	newNode->setData(data);

	CNode* tempNode = firstNode;

	while (tempNode->getNextNode() != nullptr)
	{
		tempNode = tempNode->getNextNode();
	}
	tempNode->setNextNode(newNode);
}

void SingleLinkedList::deleteFromTheFront()
{
	if (firstNode != nullptr) {
		CNode* tempNode = firstNode;

		firstNode = firstNode->getNextNode();

		delete tempNode;
	}
}

void SingleLinkedList::deleteFromTheMiddle(int position)
{
	bool fail = false;

	CNode* tempNode = firstNode;

	if (position == 0) {
		deleteFromTheFront();
		return;
	}
	else if (position < 0) {
		fail = true;
	}

	for (int i = 0; i < position-1; i++)
	{

		if (tempNode->getNextNode()->getNextNode() == nullptr) {
			fail = true;
			break;
		}
		else {
			tempNode = tempNode->getNextNode();
		}
	}
	if (!fail) {
		CNode* toDelete = tempNode->getNextNode();
		tempNode->setNextNode(tempNode->getNextNode()->getNextNode());
		delete toDelete;
	}
	else {
		cout << endl << "Could Delete Reach Position, did not do anything." << endl;
	}
	
}

void SingleLinkedList::deleteFromTheEnd()
{
	CNode* tempNode = firstNode;
	if (tempNode->getNextNode() == nullptr) {
		tempNode = nullptr;
	}

	while (tempNode->getNextNode()->getNextNode() != nullptr) {
		tempNode = tempNode->getNextNode();
	}
	delete tempNode->getNextNode();
	tempNode->setNextNode(nullptr);
}

bool SingleLinkedList::search(int data)
{
	bool isThere = false;
	CNode* tempNode = firstNode;

	while (tempNode != nullptr) {
		if (tempNode->getData() == data) {
			isThere = true;
			break;
		}
		tempNode = tempNode->getNextNode();
	}


	return isThere;
}

void SingleLinkedList::display()
{
	CNode* tempNode = firstNode;

	cout << endl;

	while (tempNode != nullptr) {
		cout << tempNode->getData() << ", ";
		tempNode = tempNode->getNextNode();
	}
	cout << " -END" << endl;
}
