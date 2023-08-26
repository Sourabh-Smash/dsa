// find the dublicate number(single dublicate number)
#include <bits/stdc++.h>
using namespace std;
int dublicateNumber(vector<int> arr) // negative marking method
{
    // int ans = -1;
    for (int i = 0; i < arr.size(); i++)
    {
        int idx = abs(arr[i]);

        if (arr[idx] < 0)
        {
            return idx;
        }
        arr[idx] *= -1;
    }
    return -1;
}

int swapElemByIdx(vector<int> arr) // positioning method
{
    int i = 0;
    while (true)
    {
        int idx = arr[i];
        if (idx == arr[idx])
        {
            return idx;
        }
        swap(arr[i], arr[idx]);
    }
    return -1;
}
int main()
{
    vector<int> arr{1, 3, 4, 2, 2};
    // cout << dublicateNumber(arr);
    cout << swapElemByIdx(arr);

    return 0;
}