
#define LinkedListBST_H
#include "AbstractBST.h"

class Node
{
public:
    int data;
    Node *left;
    Node *right;
};

class LinkedBST : public AbstractBST
{

private:
    Node *root;
    Node *add(Node *root, int data);
    void inorder(Node *node);
    Node *getNewNode(int data);
    Node *Delete(Node *root, int data);
    bool search(Node *root, int data);

public:
    bool isEmpty();
    void addBST(int);
    void removeBST(int);
    bool searchBST(int);
    void inorder();
    void max(int &);
    void min(int &);
};
