#include <iostream>
#include <vector>
using namespace std;
int firstOccurance(vector<int> arr, int elem)
{
    int l = 0;
    int h = arr.size() - 1;
    int ans=-1;
    while (l <= h)
    {
        int m = l + (h - l) / 2;
        if (arr[m] == elem)
        {
            ans=m;
            h = m - 1;
        }
        else if (arr[m] > elem)
        {
            h = m - 1;
        }
        else
        {
            l = m + 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr{2, 2, 3, 4, 5, 6, 7, 8};
    cout << firstOccurance(arr, 8);
    return 0;
}