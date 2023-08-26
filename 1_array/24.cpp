// missing element from an array with dublicates
#include <bits/stdc++.h>
using namespace std;
int findDublicate(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        int idx = abs(arr[i]);
        if (arr[idx - 1] > 0)
        {
            arr[idx - 1] *= -1;
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > 0)
        {
            return i + 1;
        }
    }
    return -1;
}
int findDublicateMethod(vector<int> arr)
{
    int i = 0;
    while (i < arr.size())
    {
        int idx = arr[i] - 1;
        if (arr[i] != arr[idx])
        {
            swap(arr[i], arr[idx]);
        }
        else
        {
            i++;
        }
    }
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] == arr[i - 1])
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr{1, 3, 5, 3, 4};
    cout << findDublicateMethod(arr);
    return 0;
}
