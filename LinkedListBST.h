
#define LinkedListBST_H
#include "AbstractBST.h"

class Node
{
public:
    Node *leftChild;
    Node *rightChild;
    int data;
    Node() : leftChild(nullptr), rightChild(nullptr) {}
    Node(int data) : data(data), leftChild(nullptr), rightChild(nullptr) {}
    Node(int data, Node *leftChild, Node *rightChild) : data(data), leftChild(leftChild), rightChild(rightChild) {}
};

class LinkedList : public AbstractBST
{
public:
    Node *root;
    // hwegdhwdwgdwd
};
