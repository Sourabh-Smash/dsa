// find the first repeating element in an array
#include <bits/stdc++.h>
using namespace std;
int firstRepeatingElem(vector<int> arr) // using hash function stl
{
    unordered_map<int, int> hash;
    for (int i = 0; i < arr.size(); i++)
    {
        hash[arr[i]]++;
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (hash[arr[i]] > 1)
        {
            return i + 1;
        }
    }
    return -1;
}
int firstRepeatingElemOwn(vector<int> arr)
{
    int maxNo = INT_MIN; // find maximum number so that i can make a array till max number in arr arry
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > maxNo)
        {
            maxNo = arr[i];
        }
    }
    int hashF[maxNo] = {0}; // this is hash function
    for (int i = 0; i < arr.size(); i++)
    {
        hashF[arr[i]]++;
        // cout << hashF[arr[i]] << " ";
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (hashF[arr[i]] > 1)
        {
            return i + 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr{1, 5, 3, 4, 5, 3, 6};
    cout << firstRepeatingElemOwn(arr);
    return 0;
}