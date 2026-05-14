#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

// int a = 10;
//  int *ptr = &a;
//  int **parPtr = &ptr;
//  cout << ptr << endl;
//  cout << &a << endl;
//  cout << *parPtr << endl;
void changeA(int a) // pass by value.
{
    a = 10;
    cout << a << endl;
}

// void changeVal(int *nums) //pass by pointers
// {
//     cout << *nums << endl;
// }
void changeVal(int &nums) // pass by refrence
{
    nums = 10;
    cout << nums << endl;
}
int main()
{
    int a = 20;
    // changeA(a); // value will be 10
    changeVal(a);

    return 0;
}