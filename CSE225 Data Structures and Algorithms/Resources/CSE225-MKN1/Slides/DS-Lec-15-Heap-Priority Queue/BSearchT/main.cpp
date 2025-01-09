# include <iostream>
# include <cstdlib>
#include"bst.h"

using namespace std;

int main()
    {

        BST bst;
        bst.insert(bst.root, 100);
        bst.insert(bst.root, 90);
        bst.insert(bst.root, 150);
        bst.insert(bst.root, 50);
        bst.insert(bst.root, 95);
        bst.insert(bst.root, 145);
        bst.insert(bst.root, 175);

        cout<<"Preorder Traversal of BST:"<<endl;
        bst.preorder(bst.root);
        cout<<endl;

        cout<<"Inorder Traversal of BST:"<<endl;
        bst.inorder(bst.root);
        cout<<endl;

        cout<<"postorder Traversal of BST:"<<endl;
        bst.postorder(bst.root);
        cout<<endl;cout<<endl;cout<<endl;
       bst.display(bst.root,1);
       cout<<endl;cout<<endl;cout<<endl;

    }

