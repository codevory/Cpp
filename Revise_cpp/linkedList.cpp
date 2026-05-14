#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node *next;

    Node(int val)
    {
        data = val;
        next = nullptr;
    }
};

class Linkedlist
{
    Node *head;

public:
    Linkedlist()
    {
        head = nullptr;
    }

    void insertAtHead(int val)
    {
        Node *newNode = new Node(val);
        newNode->next = head;
        head = newNode;
    }

    void display()
    {
        Node *temp = head;
        while (temp != nullptr)
        {
            cout << temp->data << " --> ";
            temp = temp->next;
        }
        cout << "NULL" << endl;
    }
};
int main()
{
    Linkedlist myList;
    myList.insertAtHead(1);
    myList.insertAtHead(3);
    myList.insertAtHead(5);
    myList.display();
    return 0;
}