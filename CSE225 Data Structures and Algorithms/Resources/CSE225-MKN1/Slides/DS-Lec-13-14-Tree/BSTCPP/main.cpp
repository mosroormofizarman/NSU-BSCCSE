// C++ program to demonstrate insertion recursively.
#include <iostream>
#include "bst.h"

using namespace std;


// Driver code
int main()
{
	BST b, *root = NULL;
	root = b.Insert(root, 50);
	b.Insert(root, 30);
	b.Insert(root, 20);
	b.Insert(root, 40);
	b.Insert(root, 70);
	b.Insert(root, 60);
	b.Insert(root, 80);

	b.print2D(root,0);
	b.Search(root,20);
	//b.Search(root,100);
	root=b.NodeDelete(root,50);
	b.print2D(root,0);
	cout<<endl;
    cout<<"PreOrder Traversing: ";
    b.preorder(root);
    cout<<endl;
    cout<<"InOrder Traversing: ";
	b.inorder(root);
	cout<<endl;
	cout<<"PostOrder Traversing: ";
	b.postorder(root);
	cout<<endl;

	return 0;
}

// This code is contributed by pkthapa
