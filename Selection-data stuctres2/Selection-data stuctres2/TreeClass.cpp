#include "TreeClass.h"


//PrintTree: Print tree in Inorder. Items wil be printes in an increasing order.
void BSTree::PrintTree(void)
{
    if (root != NULL)
        root->Inorder;
}

//Find: Return pointer to node containing key k. Return NULL if item not in tree.
BSTreeNode* BSTree::Find(KeyType k)
{
    BSTreeNode* temp = root;
    while (temp != NULL)
    {
        if (k == temp->key)
            return temp;
        else if (k < temp->getkey())
            temp = temp->left;
        else
            temp = temp->right;
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
        if (k < temp->key)
            temp = root->left;
        else
            temp = root->right;
    }

    newNode = new BSTreeNode(k, d, NULL, NULL);    //memory of new node

    if (parent == NULL)
        root = newnode;
    else if (k < parent->key)
        parent->left = newnode;     //insert as left child
    else
        parent->right = newnode;    //insert as right child
}

