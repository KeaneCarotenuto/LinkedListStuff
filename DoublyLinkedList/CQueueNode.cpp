#include "CQueueNode.h"

CQueueNode::CQueueNode() :
	data(-INFINITY),
	nextNode(nullptr)
{
}

void CQueueNode::setData(int iData)
{
	data = iData;
}

int CQueueNode::getData() const
{
	return data;
}

void CQueueNode::setNextNode(CQueueNode* _nextNode)
{
	nextNode = _nextNode;
}

CQueueNode* CQueueNode::getNextNode() const
{
	return nextNode;
}
