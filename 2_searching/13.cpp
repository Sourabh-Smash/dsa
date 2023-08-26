// find k closest element leetcode 658
#include <bits/stdc++.h>
using namespace std;
vector<int> kClosestElements(vector<int> arr, int k, int x)
{
    int l, h;
    l = 0;
    h = arr.size() - 1;
    while (h - l >= k)
    {
        if (arr[h] - x >= x - arr[l])
        {
            h--;
        }
        else
        {
            l++;
        }
    }
    return vector<int>(arr.begin() + l, arr.begin() + h + 1);
}
int lowerBound(vector<int> arr, int elem)
{
    int l = 0;
    int h = arr.size() - 1;
    int ans = h;
    while (l <= h)
    {
        int mid = h + (l - h) / 2;
        if (arr[mid] <= elem)
        {
            if (arr[mid] == elem)
            {
                return mid;
            }
            ans = mid;
            l = mid + 1;
        }
        else if (arr[mid] > elem)
        {
            h = mid - 1;
        }
    }
    return ans;
}
void kClosestElementsBS(vector<int> arr, int k, int x)
{
    int h = lowerBound(arr, x);
    int l = h - 1;
    while (k--)
    {
        if (l < 0)
        {
            h++;
        }
        else if (h > arr.size())
        {
            l--;
        }
        else if (arr[h] - x < x - arr[l])
        {
            h++;
        }
        else
        {
            l--;
        }
    }
    cout << "hello" << endl;
    for (int i = l + 1; i < h; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9};
    // vector<int> ans = kClosestElements(arr, 5, 3);
    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << " ";
    // }
    kClosestElementsBS(arr, 5, 3);
    return 0;
}