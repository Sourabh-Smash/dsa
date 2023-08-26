// eco spog
#include <bits/stdc++.h>
using namespace std;
bool isPossible(vector<int> arr, int value, int mid)
{
    int temp = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > mid)
        {
            int val = arr[i] - mid;
            temp += val;
        }
    }
    return temp >= value;
}
int ecoSpog(vector<int> arr, int value)
{
    sort(arr.begin(), arr.end());
    int s = 0;
    int e = *max_element(arr.begin(), arr.end());
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (isPossible(arr, value, mid))
        {
            ans = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return ans;
}
int main()
{
    // vector<int> arr{20, 15, 10, 17};
    // cout << ecoSpog(arr, 7);
    vector<int> arr{4, 42, 48, 26, 46};
    cout << ecoSpog(arr, 28);
    return 0;
}