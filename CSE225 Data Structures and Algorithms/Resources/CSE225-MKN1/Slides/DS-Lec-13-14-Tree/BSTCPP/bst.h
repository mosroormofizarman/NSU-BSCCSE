#ifndef BST_H
#define BST_H


class BST
{
	int data;
	BST *left, *right;
public:
	// Default constructor.
	BST();
	// Parameterized constructor.
	BST(int);
	// Insert function.
	BST* Insert(BST*, int);
	// Inorder traversal.
	void inorder(BST*);
	void preorder(BST*);
	void postorder(BST*);
	void print2D(BST*,int);
	void Search(BST*, int);
	BST* NodeDelete(BST*, int); //deleting a node in BST
};

#endif // BST_H
