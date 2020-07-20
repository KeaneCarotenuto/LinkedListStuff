#include "CStackNode.h"

CStackNode::CStackNode() :
	data(-INFINITY),
	nextNode(nullptr)
{
}

void CStackNode::setData(int iData)
{
	data = iData;
}

int CStackNode::getData() const
{
	return data;
}

void CStackNode::setNextNode(CStackNode* _nextNode)
{
	nextNode = _nextNode;
}

CStackNode* CStackNode::getNextNode() const
{
	return nextNode;
}
