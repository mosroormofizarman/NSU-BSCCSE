#include "bst.h"
# include <iostream>
# include <cstdlib>

using namespace std;


void BST::find(int item, node **par, node **loc)
    {
        node *ptr, *ptrsave;
        if (root == NULL)
        {
            *loc = NULL;
            *par = NULL;
            return;
        }
        if (item == root->info)
        {
            *loc = root;
            *par = NULL;
            return;
        }
        if (item < root->info)
            ptr = root->left;
        else
            ptr = root->right;
        ptrsave = root;
        while (ptr != NULL)
        {
            if (item == ptr->info)
            {
                *loc = ptr;
                *par = ptrsave;
                return;
            }
            ptrsave = ptr;
            if (item < ptr->info)
                ptr = ptr->left;
    	else
    	    ptr = ptr->right;
        }
        *loc = NULL;
        *par = ptrsave;
    }

  void BST::insert(node *tree, int data)
    {
        node *newnode;
        newnode = new node;
        newnode->info=data;

        if (root == NULL)
        {
            root = new node;
            root->info = newnode->info;
            root->left = NULL;
            root->right = NULL;
            cout<<"Root Node is Added"<<endl;
            return;
        }
        if (tree->info == newnode->info)
        {
            cout<<"Element already in the tree"<<endl;
            return;
        }
if (tree->info > newnode->info)
        {
            if (tree->left != NULL)
            {
                insert(tree->left, newnode->info);
    	     }
    	else
    	     {
                tree->left = newnode;
                (tree->left)->left = NULL;
                (tree->left)->right = NULL;
                cout<<"Node Added To Left"<<endl;
                return;
             }
        }
        else
        {
            if (tree->right != NULL)
            {
                insert(tree->right, newnode->info);
            }
            else
            {
                tree->right = newnode;
                (tree->right)->left = NULL;
                (tree->right)->right = NULL;
                cout<<"Node Added To Right"<<endl;
                return;
            }
        }
    }


    void BST::preorder(node *ptr)
    {
        if (root == NULL)
        {
            cout<<"Tree is empty"<<endl;
            return;
        }
        if (ptr != NULL)
        {
            cout<<ptr->info<<"  ";  //1. Process root
            preorder(ptr->left);    // 2. Left node
            preorder(ptr->right);  // 3. Right node
        }
    }

void BST::inorder(node *ptr)
    {
        if (root == NULL)
        {
           cout<<"Tree is empty"<<endl;
            return;
        }
        if (ptr != NULL)
        {
            inorder(ptr->left);
            cout<<ptr->info<<"  ";
            inorder(ptr->right);
        }
    }

void BST::postorder(node *ptr)
    {
        if (root == NULL)
        {
            cout<<"Tree is empty"<<endl;
            return;
        }
        if (ptr != NULL)
        {
            postorder(ptr->left);
            postorder(ptr->right);
            cout<<ptr->info<<"  ";
        }
    }

void BST::display(node *ptr, int level)
    {
        int i;
        if (ptr != NULL)
        {
            display(ptr->right, level+1);
            cout<<endl;
            if (ptr == root)
                cout<<"Root->:  ";
            else
            {
                for (i = 0;i < level;i++)
                    cout<<"       ";
    	}
            cout<<ptr->info;
            display(ptr->left, level+1);
        }
    }

    BST::BST()
    {
        root=NULL;
    }


