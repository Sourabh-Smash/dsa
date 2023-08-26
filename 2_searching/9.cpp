// search element in a nearly sorted array
#include <bits/stdc++.h>
using namespace std;
int nearlySortedArr(vector<int> arr, int elem)
{
    int s = 0;
    int e = arr.size() - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == elem)
        {
            return mid;
        }
        if (mid - 1 >= s && arr[mid - 1] == elem)
        {
            return mid - 1;
        }
        if (mid + 1 <= e && arr[mid + 1] == elem)
        {
            return mid + 1;
        }
        else if (arr[mid] > elem)
        {
            e = mid - 2;
        }
        else
        {
            s = mid + 2;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr{10, 3, 40, 20, 50, 80, 70};
    cout << nearlySortedArr(arr, 70);
    return 0;
}