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
    BSTreeNode* left, * right, * parent;
public:
    //BSTreeNode();   //empty c'tor
    BSTreeNode(KeyType key, DataType data, BSTreeNode* left, BSTreeNode* right, BSTreeNode* parent);    //c'tor
   // ~BSTreeNode();  //d'tor
    void Inorder();     //left, root, right
    void Preorder();    //root, left, right
    void Postorder();   //left, right, root

    KeyType getkey();
    DataType getdata();
    BSTreeNode* getleft();
    BSTreeNode* getright();
    BSTreeNode* getpartent();


    void setright(BSTreeNode* right);
    void setleft(BSTreeNode* left);
    void setparent(BSTreeNode* parent);
    void setkey(KeyType key);
    void setdata(DataType data);

};

#endif // !_TREENODECLASS_H