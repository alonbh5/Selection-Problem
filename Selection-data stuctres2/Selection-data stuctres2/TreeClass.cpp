#include "TreeClass.h"


void BSTree::Delete(int item)
{
    BSTreeNode* v = this->Find(item);
    
    if (v)
    {
        BSTreeNode* father = v->getpartent();//:)

        if (v->getleft() && v->getright())  //case 2 chlid
        {
            BSTree temp(v->getleft());
            BSTreeNode* max_node = temp.Max();

            v->setdata(max_node->getdata());
            v->setkey(max_node->getkey());
            this->Delete(max_node->getkey());

        }
        else //case 1 child or less
        {
            if (v->getright())
            {
                v->getright()->setparent(father);
                if (father->getleft() == v)
                    father->setleft(v->getright());
                else
                    father->setright(v->getright());
            }
            else
                if (v->getleft())
                {
                    v->getleft()->setparent(father);
                    if (father->getleft() == v)
                        father->setleft(v->getleft());
                    else
                        father->setright(v->getleft());
                }
                else //NO CHILD
                    if (father->getleft() == v)
                        father->setleft(nullptr);
                    else
                        father->setright(nullptr);
            delete v;
        }
    }
}

BSTreeNode* BSTree::Min(void)
{
    if (this->root)
    {
        if (this->root->getleft())
        {
            BSTree temp(this->root->getleft());
            return temp.Max();
        }
        return this->root;

    }
    return nullptr;
}

BSTree::BSTree(BSTreeNode* root)
{
    this->root = root;
}

BSTree::~BSTree()
{
    if (root)
    {
        delete this->root->getleft();
        delete this->root->getright();        
    }
    delete this->root;
}

//return ptr to node with max key value . nullptr if tree is empty
BSTreeNode* BSTree::Max(void)
{
    
    if (this->root)
    {
        if (this->root->getright())
        {
            BSTree temp(this->root->getright());
            return temp.Max();
        }
        return this->root;
               
    }
    return nullptr;
    
}

//PrintTree: Print tree in Inorder. Items wil be printes in an increasing order.
void BSTree::PrintTree(void)
{
    if (root != nullptr)
        root->Inorder();
}

//Find: Return pointer to node containing key k. Return NULL if item not in tree.
BSTreeNode* BSTree::Find(int k)
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
    return nullptr;
}

//Insert into Binary Search Tree.
void BSTree::Insert(int k, const char* d)
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
            temp = temp->getleft();
        else
            temp = temp->getright();
    }

    newnode = new BSTreeNode(k, d, nullptr, nullptr,nullptr);    //memory of new node

    if (parent == NULL)
        root = newnode;
    else
    {
        newnode->setparent(parent);
        if (k < parent->getkey())
           parent->setleft(newnode);
        //insert as left child
        else
            parent->setright(newnode);    //insert as right child
    }
}

BSTreeNode* BSTree::getroot()
{
    return this->root;
}



