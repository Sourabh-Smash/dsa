// painter partition problem
#include <bits/stdc++.h>
using namespace std;
bool possible(vector<int> arr, int std, int mid)
{
    int count = 1;
    int sumNo = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > mid)
            return false;

        if (arr[i] + sumNo > mid)
        {
            count++;
            sumNo = arr[i];
            if (count > std)
                return false;
        }
        else
            sumNo += arr[i];
    }
    return true;
}
int paintAllocation(vector<int> arr, int std)
{
    int ans = -1;
    int s = 0;
    int e = accumulate(arr.begin(), arr.end(), 0);
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (possible(arr, std, mid))
        {
            ans = mid;
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr{10, 20, 30, 40};
    cout << paintAllocation(arr, 2);
    return 0;
}