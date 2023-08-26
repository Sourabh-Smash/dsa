// parata spog
#include <bits/stdc++.h>
using namespace std;
bool isPossible(vector<int> arr, int p, int mid)
{
    int currP = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        int currentElem = arr[i], j = 1;
        int currTime = 0;
        while (true)
        {
            if (currTime + j * currentElem <= mid)
            {
                currP++;
                currTime += j * currentElem;
                j++;
            }
            else
            {
                break;
            }
        }
        if (currP >= p)
        {
            return true;
        }
    }
    return false;
}
int parata(vector<int> arr, int p)
{
    int s = 0;
    int maxElem = *max_element(arr.begin(), arr.end());
    int e = maxElem * (p * (p + 1) / 2);
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (isPossible(arr, p, mid))
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
    vector<int> arr{1, 2, 3, 4};
    cout << parata(arr, 10);
    return 0;
}