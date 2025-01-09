#ifndef BST_H
#define BST_H

    struct node
    {
        int info;
        struct node *left;
        struct node *right;
    };

    class BST
    {
        public:
            void find(int, node **, node **);
            void insert(node *, int);
            void preorder(node *);
            void inorder(node *);
            void postorder(node *);
            void display(node *, int);
            BST();
            node *root;
    };

#endif // BST_H
