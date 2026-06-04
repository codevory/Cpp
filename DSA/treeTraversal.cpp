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

void preorderTraverse(Node *root)
{
    if (root == NULL)
        return;
    Node *temp = root;

    cout << temp->data << " ";
    preorderTraverse(temp->left);
    preorderTraverse(temp->right);
    delete temp;
}

void freeTree(Node *root)
{
    if (root == NULL)
        return;

    freeTree(root->left);
    freeTree(root->right);
    free(root);
}

int main()
{
    Node *root = createNode(1);
    root->left = createNode(2);
    root->right = createNode(3);
    root->left->left = createNode(4);
    root->left->right = createNode(5);
    root->right->left = createNode(6);
    root->right->right = createNode(7);

    cout << "pr-order traversal of Binary Tree \n";
    preorderTraverse(root);
    freeTree(root);

    return 0;
}