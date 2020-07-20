#pragma once
#include <cmath>

class CQueueNode
{
private:
	int data;
	CQueueNode* nextNode;

public:
	CQueueNode();
	void setData(int iData);
	int getData() const;
	void setNextNode(CQueueNode* nextNode);
	CQueueNode* getNextNode() const;
};

