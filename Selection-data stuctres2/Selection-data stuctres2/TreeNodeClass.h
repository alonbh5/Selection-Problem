#ifndef _TREENODECLASS_H
#define _TREENODECLASS_H
#include <string.h>
#include <iostream>
#include "Person.h"
using namespace std;

#pragma warning (disable:4996)
//Binary Search Tree Node Class page 146



class BSTreeNode
{
private:
    int key;
    char data[MAX_SIZE];
    BSTreeNode* left, * right, * parent;
public:
    //BSTreeNode();   //empty c'tor
    BSTreeNode(int key,const char* data, BSTreeNode* left, BSTreeNode* right, BSTreeNode* parent);    //c'tor
   // ~BSTreeNode();  //d'tor
    void Inorder();     //left, root, right
    void Preorder();    //root, left, right
    void Postorder();   //left, right, root

    int getkey();
    char* getdata();
    BSTreeNode* getleft();
    BSTreeNode* getright();
    BSTreeNode* getpartent();

    void FindkNumber(int& k, int& NumComp, Person& res);
    void setright(BSTreeNode* right);
    void setleft(BSTreeNode* left);
    void setparent(BSTreeNode* parent);
    void setkey(int key);
    void setdata(const char* data);

};

#endif // !_TREENODECLASS_H