#include <bits/stdc++.h>
using namespace std;

typedef struct node
{
    int data;
    struct node *left;
    struct node *right;
} Node;

typedef struct listNode
{
    int data;
    struct listNode *next;
} ListNode;

Node *createNode(int data)
{
    Node *newNode = new Node;
    newNode->data = data;
    newNode->left = NULL;
    newNode->right = NULL;

    return newNode;
}

Node *insertNode(Node *root, int data, ListNode **duplicates)
{
    if (root == NULL)
    {
        return createNode(data);
    }

    if (data == root->data)
    {
        ListNode *temp = *duplicates;

        while (temp)
        {
            if (temp->data == data)
            {
                return root;
            }
            temp = temp->next;
        }

        ListNode *newListNode = new ListNode;
        newListNode->data = data;
        newListNode->next = *duplicates;

        *duplicates = newListNode;
    }
    else if (data < root->data)
    {
        root->left = insertNode(root->left, data, duplicates);
    }
    else
    {
        root->right = insertNode(root->right, data, duplicates);
    }

    return root;
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

// free duplicates
void freeList(ListNode *node)
{

    while (node)
    {
        ListNode *temp = node;
        node = node->next;
        delete temp;
    }
}

// print duplicates
void printDuplicates(ListNode *head)
{
    cout << "printing duplicates : \n";
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    int Numbers[] = {1, 3, 2, 4, 7, 6, 45, 12, 31, 16, 12, 10, 3, 1, 1, 5, 3, 4, 11, 12, 34, 33, 10};
    Node *root = NULL;
    ListNode *duplicates = NULL;
    bool duplicate;

    for (int i = 0; i < sizeof(Numbers) / sizeof(Numbers[0]); i++)
    {
        root = insertNode(root, Numbers[i], &duplicates);
    }

    printDuplicates(duplicates);
    // free the tree
    freeTree(root);
    freeList(duplicates);
    return 0;
}