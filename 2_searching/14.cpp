#include <bits/stdc++.h>
using namespace std;
int binarySearch(vector<int> arr, int low, int high, int elem)
{
    cout << " low :" << low << " high : " << high << endl;
    while (low <= high)
    {
        int mid = low + (high - low) / 2;
        if (arr[mid] == elem)
        {
            return mid;
        }
        else if (arr[mid] > elem)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return -1;
}
int minF(int a, int b)
{
    if (a > b)
    {
        return b;
    }
    return a;
}
int exponentialSearch(vector<int> arr, int elem)
{
    if (arr[0] == elem)
        return 0;

    int i = 1;
    while (i < arr.size() && arr[i] < elem)
    {
        i = i * 2;
        // cout << i << endl;
    }
    if (arr[i] == elem)
        return i;
    else
        return binarySearch(arr, (i / 2) + 1, minF(i, arr.size() - 1), elem);
}
int exponentialSearchInInfiniteArray(vector<int> arr, int elem) // use this when length of array is unknown
{
    if (arr[0] == elem)
        return 0;

    int i = 1;
    while (arr[i] < elem)
    {
        i = i * 2;
    }
    if (arr[i] == elem)
        return i;
    else
        return binarySearch(arr, (i / 2) + 1, i - 1, elem);
}
int main()
{
    vector<int> arr{1, 2, 5, 7, 10, 66, 89, 90, 100, 345, 789, 900, 999, 1000, 1022};
    // cout << exponentialSearch(arr, 10);
    cout << exponentialSearchInInfiniteArray(arr, 66);

    return 0;
}