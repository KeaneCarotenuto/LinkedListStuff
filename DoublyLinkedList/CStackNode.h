#pragma once
#include <cmath>

class CStackNode
{
private:
	int data;
	CStackNode* nextNode;

public:
	CStackNode();
	void setData(int iData);
	int getData() const;
	void setNextNode(CStackNode* nextNode);
	CStackNode* getNextNode() const;
};

