#include "TreeNodeClass.h"

BSTreeNode::BSTreeNode(int key,const char* data, BSTreeNode* left, BSTreeNode* right, BSTreeNode* parent)
{
	this->setkey(key);
	this->setdata(data);
	this->right = right;
	this->left = left; 
	this->parent = parent;
}

void BSTreeNode::Inorder()
{
	if (this->left != nullptr)
		this->left->Inorder();
	cout << " " << this->key << " ";
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

int BSTreeNode::getkey()
{
	return this->key;
}

char* BSTreeNode::getdata() 
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

void BSTreeNode::setkey(int key)
{
	this->key = key;
}

void BSTreeNode::setdata(const char* data)
{
	strcpy(this->data, data);
}

void BSTreeNode::FindkNumber(int& k, int& NumComp, Person &res)
{
	if (k <= -1)
		return;
	

	if (this->left != nullptr)
		this->left->FindkNumber(k, NumComp,res);
	k--; 
	NumComp++;
	if (k == 0)
	{
		res.setId(this->getkey());
		res.setName(this->getdata());
		k = -1;
	}
	if (this->right != nullptr)
		this->right->FindkNumber(k, NumComp,res);
	

	
}
