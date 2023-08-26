#include <bits/stdc++.h>
using namespace std;
void intersection(vector<int> arr, vector<int> arr2)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr2.size(); j++)
        {
            if (arr[i] == arr2[j])
            {
                arr2[j] = INT_MIN;
            }
        }
    }
    for (int i = 0; i < arr2.size(); i++)
    {
        cout << arr2[i] << " ";
    }
}
void unionOfArr(vector<int> arr, vector<int> arr2)
{
    intersection(arr, arr2);
    vector<int> brr{};
    int i = 0;

    for (i = 0; i < arr.size(); i++)
    {
        brr.push_back(arr[i]);
    }
    for (i = 0; i < arr2.size(); i++)
    {
        if (arr2[i] != INT_MIN)
            brr.push_back(arr2[i]);
    }
    for (int j = 0; j < brr.size(); j++)
    {
        cout << brr[j] << " ";
    }
}
int main()
{
    vector<int> arr{1, 2, 3, 4, 5};
    vector<int> arr2{4, 5, 6};
    unionOfArr(arr, arr2);
    // intersection(arr, arr2);
    return 0;
}