#include <iostream>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <vector>
using namespace std;

class hashing
{
private:
    /* data */
public:
    void findNumber();
    void findChar();
    void freqOfNumb();
    void freq();
    void highestandLowestFreq(int arr[], int n);
};

void hashing::findNumber()
{
    int n = 5;
    int arr[5] = {1, 2, 3, 4, 6};

    int hash[13] = {0};
    for (int i = 0; i < n; i++)
    {
        hash[arr[i]] += 1;
    }

    int q;
    cout << "Ener Number of Iterator : ";
    cin >> q;
    while (q--)
    {
        int number;
        cout << "Enter a number to Search : ";
        cin >> number;
        // fetching
        cout << "Output : ";
        cout << hash[number] << endl;
    }
}
void hashing::findChar()
{
    string s;
    cout << " Enter a string : ";
    cin >> s;

    // Precompute
    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a']++;
    }

    int q;
    cout << "Enter number of Iterations : ";
    cin >> q;
    while (q--)
    {
        char term;
        cout << "Enter char to search : ";
        cin >> term;
        cout << hash[term - 'a'] << endl;
    }
}
void hashing::freqOfNumb()
{
    int n = 5;
    int arr[5] = {1, 3, 5, 7, 3};

    map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    int q;
    cout << "Enter Number of Iterations : ";
    cin >> q;
    while (q--)
    {
        int sQ;
        cout << "Enter Number to search : ";
        cin >> sQ;
        cout << mp[sQ] << endl;
    }
}
void hashing::freq()
{
    // Find the freq of given element
    int n = 6;
    int arr[n] = {10, 5, 10, 15, 10, 5};
    unordered_map<int, int> mpp;
    for (int i = 0; i < n; i++)
    {
        mpp[arr[i] - 'a']++;
    }

    int q;
    cout << "Enter number of Iterations : ";
    cin >> q;
    while (q--)
    {
        int term;
        cout << "Enter number to Search : ";
        cin >> term;
        cout << term << " --> " << mpp[term - 'a'] << endl;
    }
}
void hashing::highestandLowestFreq(int arr[], int n)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        mp[arr[i]]++;
    }

    int maxFreq = 0;
    int minFreq = n;
    int maxElm = 0;
    int minElm = 0;

    for (auto it : mp)
    {
        int elm = it.first;
        int count = it.second;

        if (count > maxFreq)
        {
            maxFreq = count;
            maxElm = elm;
        }

        if (count < minFreq)
        {
            minFreq = count;
            minElm = elm;
        }
    }

    cout << "highest : " << maxElm << endl;
    cout << "Lowest : " << minElm << endl;
}

int main()
{
    int arr[] = {10, 15, 10, 15, 10, 5, 15, 3, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    hashing obj;
    obj.highestandLowestFreq(arr, n);
}