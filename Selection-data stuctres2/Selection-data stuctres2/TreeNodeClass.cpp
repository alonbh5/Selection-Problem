#include "TreeNodeClass.h"

BSTreeNode::BSTreeNode(KeyType key, DataType data, BSTreeNode* left, BSTreeNode* right, BSTreeNode* parent)
{
	this->key = key;
	this->data = data;
	this->right = right;
	this->left = left; 
	this->parent = parent;
}

void BSTreeNode::Inorder()
{
	if (this->left != nullptr)
		this->left->Inorder();
	cout << " " << this->data << " ";
	if (this->right != nullptr)
		this->right->Inorder();

	cout << endl;
}

void BSTreeNode::Preorder()
{
	cout << " " << this->data << " ";
	if (this->left != nullptr)
		this->left->Inorder();	
	if (this->right != nullptr)
		this->right->Inorder();

	cout << endl;
}

void BSTreeNode::Postorder()
{
	
	if (this->left != nullptr)
		this->left->Inorder();
	if (this->right != nullptr)
		this->right->Inorder();
	cout << " " << this->data << " ";

	cout << endl;
}

KeyType BSTreeNode::getkey()
{
	return this->key;
}

DataType BSTreeNode::getdata()
{
	return this->data;
}

BSTreeNode* BSTreeNode::getleft()
{
	return this->left;
}

BSTreeNode* BSTreeNode::getright()
{
	return this->right;
}

BSTreeNode* BSTreeNode::getpartent()
{
	return this->parent;
}

void BSTreeNode::setright(BSTreeNode* right)
{
	this->right = right;
}

void BSTreeNode::setleft(BSTreeNode* left)
{
	this->left = left;
}

void BSTreeNode::setparent(BSTreeNode* parent)
{
	this->parent = parent;
}

void BSTreeNode::setkey(KeyType key)
{
	this->key = key;
}

void BSTreeNode::setdata(DataType data)
{
	this->data = data;
}
