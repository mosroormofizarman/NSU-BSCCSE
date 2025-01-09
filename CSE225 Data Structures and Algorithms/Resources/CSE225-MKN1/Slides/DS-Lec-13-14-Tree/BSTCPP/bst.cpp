#include<iostream>
#include "bst.h"

using namespace std;
const int gp=5;

// Default Constructor definition.
BST::BST()
{
   data=0;
   left=NULL;
   right=NULL;
}

// Parameterized Constructor definition.
BST ::BST(int value)
{
	data = value;
	left = right = NULL;
}

// Insert function definition.
BST* BST ::Insert(BST* root, int value)
{
	if (!root)
	{
		// Insert the first node, if root is NULL.
		return new BST(value);
	}

	// Insert data.
	if (value > root->data)
	{
		// Insert right node data, if the 'value'
		// to be inserted is greater than 'root' node data.

		// Process right nodes.
		root->right = Insert(root->right, value);
	}
	else
	{
		// Insert left node data, if the 'value'
		// to be inserted is greater than 'root' node data.

		// Process left nodes.
		root->left = Insert(root->left, value);
	}

	// Return 'root' node, after insertion.
	return root;
}

// Inorder traversal function.
// This gives data in sorted order.
void BST ::inorder(BST* root)
{
	if (!root) {
		return;
	}
	inorder(root->left);
	cout << root->data<<" ";
	inorder(root->right);
}

void BST ::preorder(BST* root)
{
	if (!root) {
		return;
	}
	cout << root->data<<" ";
	preorder(root->left);
	preorder(root->right);
}
void BST ::postorder(BST* root)
{
	if (!root) {
		return;
	}

	postorder(root->left);
	postorder(root->right);
	cout << root->data<<" ";
}

void BST::print2D(BST* root,int space)
{
 if(root==NULL)return;
 space=space+gp;
 print2D(root->right,space);
 cout<<endl;
 for(int i=gp;i<=space;i++)
        cout<<" ";
 cout<<root->data;
 cout<<endl;
 print2D(root->left,space);
}

void BST::Search(BST* root, int data) //searching through the BST for specific word
{
    if (root == NULL)
    {
        cout << "Not found\n";
        return;
    }

    else if (root->data == data)
    {
        cout  <<" Found :" <<root->data<<endl;
    }
    else if (data < root->data)
    {
        //cout<< "Going left\n";
        return Search(root->left, data);
    }
    else {
        //cout << "Going right\n";
        return Search(root->right, data);
    }
}

BST* BST::NodeDelete(BST* root, int data) //deleting a node in BST
{
    if (root == NULL)
    {
        return root;
    }
    if (data < root->data)  // Searching in BST for the value
    {
        root->left = NodeDelete(root->left, data);
    }
    else if (data > root->data)
    {
        root->right = NodeDelete(root->right, data);
    }
    else //when the value is found
    {
        if (root->left == NULL && root->right == NULL) //for node with no child
        {
            delete root;
            root = NULL;
        }
        else if (root->left == NULL)//only one child
        {
            BST *temp = root->right;
            delete root;
            return temp;
        }
        else if (root->right == NULL)
        {
            BST *temp = root->left;
            delete root;
            return temp;
        }
        else //for node with two children
        {
            BST* minData = root->right;

            while (minData->left != NULL)
            {
                minData = minData->left;
            }

            BST *temp = minData;
            root->data = temp->data;
            root->right = NodeDelete(root->right, temp->data);

        }
    }
    return root;
}

