// aggressive cows
#include <bits/stdc++.h>
using namespace std;
bool possible(vector<int> arr, int cow, int mid)
{
    int count = 1;
    int pos = arr[0];
    for (int i = 1; i < arr.size(); i++)
    {
        if (arr[i] - pos >= mid)
        {
            count++;
            pos = arr[i];
        }
        if (count == cow)
            return true;
    }
    return false;
}
int aggressiveCows(vector<int> arr, int cow)
{
    int ans = -1;
    int s = 0;
    int e = arr[arr.size() - 1] - arr[0];
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (possible(arr, cow, mid))
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
    vector<int> arr{1, 2, 4, 8, 9};
    cout << aggressiveCows(arr, 3);

    return 0;
}