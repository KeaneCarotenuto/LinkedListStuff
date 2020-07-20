#pragma once
#include <cmath>

class CDoubleNode {
private:
	int data;
	CDoubleNode* prevNode;
	CDoubleNode* nextNode;
public:
	CDoubleNode();
	void setData(int iData);
	int getData() const;
	void setPrevNode(CDoubleNode* _prevNode);
	CDoubleNode* getPrevNode() const;
	void setNextNode(CDoubleNode* nextNode);
	CDoubleNode* getNextNode() const;
};