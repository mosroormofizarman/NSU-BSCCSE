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
        node *newnode=new node();

        newnode->info=data;

        newnode->left=NULL;
        newnode->right=NULL;

        if (root == NULL)
        {
         root=newnode;
           cout<<"Root Node is Added"<<endl;
            return;
        }
if (tree->info == newnode->info)
        {
            cout<<"Element already in the tree"<<endl;
            return;
        }
else if (tree->info > newnode->info)
        {
            if (tree->left != NULL)
            {
                insert(tree->left, newnode->info);
    	     }
    	else
    	     {
                tree->left = newnode;
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
            cout<<ptr->info<<"  ";//Process Root
            preorder(ptr->left);  // Traverse the left subtree in pre-order
            preorder(ptr->right);  // Traverse the right subtree in pre-order
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
            inorder(ptr->left);   // Traverse the left subtree in inorder
            cout<<ptr->info<<"  "; //Process the root
            inorder(ptr->right); // Traverse the right subtree in inorder
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
            postorder(ptr->left); // Traverse the left subtree in post-order
            postorder(ptr->right); // Traverse the right subtree in post-order
            cout<<ptr->info<<"  "; // Process the root
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


