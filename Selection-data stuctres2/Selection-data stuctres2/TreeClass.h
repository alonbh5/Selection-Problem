#ifndef _TREECLASS_H
#define _HEAPCALSS_H

#include <iostream>
#include "TreeNodeClass.h"

using namespace std;

#pragma warning (disable:4996)


//Binary Search Tree Class page 146

typedef int Type;
class BSTreeNode;

class BSTree
{
private:
    BSTreeNode* root;
public:
    BSTree(BSTreeNode* root=nullptr);   //empty c'tor
    ~BSTree();
    void Delete(int item);
    BSTreeNode* Min(void);
    BSTreeNode* Max(void);
    void PrintTree(void);
    BSTreeNode* Find(int k);
    void Insert(int k, const char* d);
    BSTreeNode* getroot();


    
    

};
#endif // !_TREECLASS_H