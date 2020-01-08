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
    BSTree() { root = NULL; }   //empty c'tor
    ~BSTree();
    void Delete(Type item);
    Type Min(void);
    Type Max(void);
    void PrintTree(void);
    BSTreeNode* Find(KeyType k);
    void Insert(KeyType k, DataType d);
    

};
#endif // !_TREECLASS_H