// k diff pair in an array leetcode 532
#include <bits/stdc++.h>
using namespace std;
int kDiffPair(vector<int> arr, int k)
{
    sort(arr.begin(), arr.end());
    int i, j;
    i = 0, j = 1;
    set<pair<int, int>> ans;
    while (j < arr.size())
    {
        int diff = arr[j] - arr[i];
        if (diff == k)
        {
            // cout << arr[i] << " " << arr[j] << endl;
            ans.insert({arr[i], arr[j]});
            j++, i++;
        }
        else if (diff < k)
            j++;

        else
            i++;

        if (i == j)
            j++;
    }
    return ans.size();
}
int bs(vector<int> arr, int start, int elem)
{
    int end = arr.size() - 1;
    while (start <= end)
    {
        int mid = start + (end - start) / 2;
        if (arr[mid] == elem)
        {
            return mid;
        }
        else if (arr[mid] > elem)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
    }
    return -1;
}
int kDiffPairBS(vector<int> arr, int k)
{
    sort(arr.begin(), arr.end());
    set<pair<int, int>> ans;
    for (int i = 0; i < arr.size(); i++)
    {
        if ((bs(arr, i + 1, arr[i] + k)) != -1)
        {
            ans.insert({arr[i], arr[i] + k});
        }
    }
    return ans.size();
}
int main()
{
    // vector<int> arr{1, 1, 3, 4, 5};
    vector<int> arr{3, 1, 4, 1, 5};
    // cout << kDiffPair(arr, 2);
    cout << kDiffPairBS(arr, 2);

    return 0;
}