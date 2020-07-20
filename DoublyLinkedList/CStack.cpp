#include "CStack.h"

CStack::CStack() :
	firstNode(nullptr)
{
}

void CStack::Push(int _data)
{
	CStackNode* newNode = new CStackNode;
	newNode->setData(_data);

	newNode->setNextNode(firstNode);
	firstNode = newNode;
}

bool CStack::Pop(int & data)
{
	if (IsEmpty()) {
		cout << endl << "Stack is Empty" << endl;
		data = 0;
		return false;
	}

	data = firstNode->getData();

	CStackNode* tempNode = firstNode;
	firstNode = firstNode->getNextNode();
	delete tempNode;

	return true;;
}

int CStack::Peek(int & data)
{
	if (IsEmpty()) {
		cout << "Stack is Empty" << endl;
		data = 0;
		return false;
	}

	data = firstNode->getData();;
	return true;
}

bool CStack::IsEmpty()
{
	return (firstNode == nullptr);
}
