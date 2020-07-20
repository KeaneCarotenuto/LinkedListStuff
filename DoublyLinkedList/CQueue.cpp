#include "CQueue.h"

CQueue::CQueue() :
	firstNode(nullptr),
	LastNode(nullptr)
{
}

void CQueue::Push(int _data)
{
	CQueueNode* newNode = new CQueueNode;
	newNode->setData(_data);
	
	if (IsEmpty()) {
		firstNode = newNode;
		LastNode = newNode;
	}
	else {
		LastNode->setNextNode(newNode);
		LastNode = newNode;
	}
}

bool CQueue::Pop(int& data)
{
	if (IsEmpty()) {
		cout << "Stack is Empty" << endl;
		data = 0;
		return false;
	}

	data = firstNode->getData();

	CQueueNode* tempNode = firstNode;
	firstNode = firstNode->getNextNode();
	delete tempNode;

	return true;;
}

int CQueue::Peek(int& data)
{
	if (IsEmpty()) {
		cout << "Stack is Empty" << endl;
		data = 0;
		return false;
	}

	data = firstNode->getData();;
	return true;
}

bool CQueue::IsEmpty()
{
	return (firstNode == nullptr);
}
