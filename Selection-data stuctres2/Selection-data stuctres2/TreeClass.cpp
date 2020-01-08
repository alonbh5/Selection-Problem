#include "TreeClass.h"


//PrintTree: Print tree in Inorder. Items wil be printes in an increasing order.
void BSTree::PrintTree(void)
{
    if (root != nullptr)
        root->Inorder();
}

//Find: Return pointer to node containing key k. Return NULL if item not in tree.
BSTreeNode* BSTree::Find(KeyType k)
{
    BSTreeNode* temp = root;
    while (temp != NULL)
    {
        if (k == temp->getkey())
            return temp;
        else if (k < temp->getkey())
            temp = temp->getleft();
        else
            temp = temp->getright();
    }
    return NULL;
}

//Insert into Binary Search Tree.
void BSTree::Insert(KeyType k, DataType d)
{
    if (Find(k) != NULL)
    {
        cout << "Error: key aready exists";  //check if key exists
        return;
    }

    BSTreeNode* temp = root;    //Curr node in tree
    BSTreeNode* parent = NULL;  //Parent of temp
    BSTreeNode* newnode;        //New allocated node

    while (temp != NULL)
    {//find parent of new node
        parent = temp;
        if (k < temp->getkey())
            temp = root->getleft();
        else
            temp = root->getright();
    }

    newnode = new BSTreeNode(k, d, NULL, NULL);    //memory of new node

    if (parent == NULL)
        root = newnode;
    else if (k < parent->getkey())
        parent->setleft(newnode);     //insert as left child
    else
        parent->setright(newnode);    //insert as right child
}

