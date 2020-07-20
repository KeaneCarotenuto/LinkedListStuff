#pragma once
#include <iostream>
#include"CQueueNode.h"

using namespace std;

class CQueue
{
private:
	CQueueNode* firstNode;
	CQueueNode* LastNode;

public:
	CQueue();

	void Push(int _data);
	bool Pop(int& data);
	int Peek(int& data);
	bool IsEmpty();
};

