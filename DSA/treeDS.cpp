#include <bits/stdc++.h>
using namespace std;

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} Node;

Node *createNode(int data)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

bool insertNode(Node *&root, int data)
{
    if (root == NULL)
    {
        root = createNode(data);
        return false; // no duplicate
    }

    if (data == root->data)
    {
        return true; // duplicate
    }
    else if (data < root->data)
    {
        return insertNode(root->left, data);
    }
    else
    {
        return insertNode(root->right, data);
    }
}

// function to free BST
void freeTree(Node *node)
{
    if (node == NULL)
    {
        return;
    }

    freeTree(node->left);
    freeTree(node->right);
    delete node;
}

int main()
{
    int Numbers[] = {1, 3, 2, 4, 7, 6, 45, 12, 31, 16, 12, 10, 3};
    Node *root = NULL;
    bool duplicate;

    for (int i = 0; i < sizeof(Numbers) / sizeof(Numbers[0]); i++)
    {
        cout << Numbers[i] << " ";
        duplicate = insertNode(root, Numbers[i]);
        if (duplicate)
        {
            cout << "duplicate found : " << Numbers[i];
        }
    }

    // free the tree
    freeTree(root);
    return 0;
}