#include "TreeNodeClass.h"

KeyType BSTreeNode::getkey()
{
	return this->key;
}

BSTreeNode* BSTreeNode::getleft()
{
	return this->left;
}

BSTreeNode* BSTreeNode::getright()
{
	return this->right;
}
