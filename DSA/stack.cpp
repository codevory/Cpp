#include <bits/stdc++.h>
using namespace std;

#define STACKSIZE 100

struct Stack
{
    int top;
    int items[STACKSIZE];

    Stack()
    {
        top = -1;
    }

    bool isEmpty()
    {
        return top == -1;
    }

    bool isFull()
    {
        return top == STACKSIZE - 1;
    }

    void push(int val)
    {
        if (isFull())
        {
            cout << "Stack is full \n";
            return;
        }

        items[++top] = val;
        cout << val << " pushed to stack \n";
    }

    int pop()
    {
        if (isEmpty())
        {
            cout << "Stack is empty \n";
            return -1;
        }

        return items[top--];
    }

    int peek()
    {
        if (isEmpty())
        {
            cout << "stack is empty \n";
            return -1;
        }

        return items[top];
    }

    void display()
    {
        if (isEmpty())
        {
            cout << "stack is empty \n";
            return;
        }

        for (int i = 0; i <= top; i++)
        {
            cout << items[i] << " ";
        }
        cout << " \n";
    }

    int size()
    {
        return top + 1;
    }
};

int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    s.push(4);
    s.push(7);
    cout << "stack size : " << s.size() << endl;
    cout << "removed from stack : " << s.pop() << endl;
    s.display();
}