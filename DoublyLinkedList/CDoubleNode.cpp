#include "CDoubleNode.h"

CDoubleNode::CDoubleNode() :
	data(-INFINITY),
	nextNode(nullptr)
{
}

void CDoubleNode::setData(int iData)
{
	data = iData;
}

int CDoubleNode::getData() const
{
	return data;
}

void CDoubleNode::setPrevNode(CDoubleNode* _prevNode)
{
	prevNode = _prevNode;
}

CDoubleNode* CDoubleNode::getPrevNode() const
{
	return prevNode;
}

void CDoubleNode::setNextNode(CDoubleNode* _nextNode)
{
	nextNode = _nextNode;
}

CDoubleNode* CDoubleNode::getNextNode() const
{
	return nextNode;
}
