#ifndef _TREENODECLASS_H
#define _TREENODECLASS_H

#include <iostream>

using namespace std;

#pragma warning (disable:4996)
//Binary Search Tree Node Class page 146

typedef int KeyType;
typedef int DataType;

class BSTreeNode
{
private:
    KeyType key;
    DataType data;
    BSTreeNode* left, * right;
public:
    BSTreeNode();   //empty c'tor
    BSTreeNode(KeyType key, DataType data, BSTreeNode* left, BSTreeNode* right);    //c'tor
    ~BSTreeNode();  //d'tor
    void Inorder();     //left, root, right
    void Preorder();    //root, left, right
    void Postorder();   //left, right, root

    KeyType getkey();
    BSTreeNode* getleft();
    BSTreeNode* getright();

    void setright(BSTreeNode* right);
    void setleft(BSTreeNode* left);

};

#endif // !_TREENODECLASS_H