
#ifndef ArrayBinarySearchTree_h
#define ArrayBinarySearchTree_h
#include <iostream>

#define MAX_NUM_NODES 200

#include "AbstractBST.h"

struct ArrayNode
{
    int key;
    int value;

    ArrayNode(int key, int value) : key(key), value(value) {}
};

class ArrayBinarySearchTree : public AbstractBST
{
public:
    ArrayBinarySearchTree();
    ~ArrayBinarySearchTree();

    int size;
    bool isEmpty();
    void addBST(int key, int value);
    void removeBST(int key);
    void searchBST(int targetkey);

    void min(int &output);
    void max(int &output);

    bool exists(int targetkey);
    void inorder();

private:
    ArrayNode *nodes[MAX_NUM_NODES];

    void inorder(int index, char sep = ' ');
};

#endif