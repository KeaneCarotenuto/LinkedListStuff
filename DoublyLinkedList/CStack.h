#pragma once
#include <iostream>
#include "CStackNode.h"

using namespace std;

class CStack
{
private:
	CStackNode* firstNode;

public:
	CStack();

	void Push(int _data);
	bool Pop(int & data);
	int Peek(int & data);
	bool IsEmpty();
};