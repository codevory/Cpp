#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = NULL;
    }
};

int function(int val)
{
    return val++;
}

Node *reverseList(Node *head)
{
    if (head == NULL || head->next == nullptr)
    {
        return head;
    }

    Node *prev = NULL;
    Node *curr = head;

    while (curr != NULL)
    {
        Node *temp = curr->next;
        curr->next = prev;
        prev = curr;
        curr = temp;
    }
    return prev;
};

int countNodes(Node *head)
{
    if (!head || head == NULL || !head->next)
    {
        cout << "List is empty! ";
        return 0;
    }

    cout << "counting nodes " << endl;
    int length = 0;
    Node *curr = head;
    while (curr != NULL)
    {
        length += 1;
        cout << " node : " << curr->data << endl;
        curr = curr->next;
    }
    delete curr;
    return length;
}
int main()
{
    Node *head = new Node(10);
    Node *first = new Node(20);
    Node *second = new Node(23);
    Node *third = new Node(25);

    // link node together
    head->next = first;
    first->next = second;
    second->next = third;
    third->next = NULL;

    Node *temp = head;
    // Node *reversed = reverseList(temp);
    // while (reversed != NULL)
    // {
    //     cout << reversed->data << " ";
    //     reversed = reversed->next;
    // }

    cout << endl;
    cout << temp->next->data << endl;
    int NumberOfNodes = countNodes(temp);
    cout << "Number of Nodes : " << NumberOfNodes;
}