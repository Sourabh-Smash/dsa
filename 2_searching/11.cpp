// find the odd occuring element 
#include <bits/stdc++.h>
using namespace std;
int oddElem(vector<int> arr)
{
    int s = 0;
    int e = arr.size() - 1;
    if (s == e)
        return s;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (mid % 2 == 0)
        {
            if (arr[mid] == arr[mid + 1])
            {
                s = mid + 2;
            }
            else if (arr[mid] == arr[mid - 1])
            {
                e = mid - 1;
            }
            else
            {
                return mid;
            }
        }
        else
        {
            if (arr[mid] == arr[mid + 1])
            {
                e = mid - 1;
            }
            else if (arr[mid] == arr[mid - 1])
            {
                s = mid + 1;
            }
        }
    }
    return -1;
}
int main()
{
    vector<int> arr{1, 1, 2, 2, 3, 3, 4, 4, 3, 3, 60, 60, 4};
    cout << oddElem(arr);
    return 0;
}