#include "LinkedListBST.h"

using namespace std;

int main()
{
    LinkedBST tree;
    tree.addBST(5);
    // tree.addBST(3);
    // tree.addBST(7);
    // tree.addBST(2);
    // tree.addBST(4);
    // tree.addBST(6);
    // tree.addBST(8);

    cout << "Inorder Traversal:" << endl;
    tree.inorder();

    int value;
    cout << "Enter a value to search: ";
    cin >> value;
    if (tree.searchBST(value))
    {
        cout << "Value found!" << endl;
    }
    else
    {
        cout << "Value not found!" << endl;
    }

    int minValue, maxValue;
    tree.min(minValue);
    tree.max(maxValue);
    // cout << "Minimum value: " << minValue << endl;
    // cout << "Maximum value: " << maxValue << endl;

    int removeValue;
    cout << "Enter a value to remove: ";
    cin >> removeValue;
    tree.removeBST(removeValue);
    cout << "Inorder Traversal after removal:" << endl;
    tree.inorder();

    // delete tree;
    return 0;
}