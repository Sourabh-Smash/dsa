// book allocation problem
#include <bits/stdc++.h>
using namespace std;
bool possibel(vector<int> arr, int std, int midVal)
{
    int pageSum = 0;
    int c = 1;
    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] > midVal)
            return false;

        if (pageSum + arr[i] > midVal)
        {
            c++;
            pageSum = arr[i];
            if (c > std)
                return false;
        }
        else
        {
            pageSum += arr[i];
        }
    }
    return true;
}
int MinPages(vector<int> arr, int std)
{
    int s = 0;
    int e = accumulate(arr.begin(), arr.end(), 0);
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (possibel(arr, std, mid))
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
    vector<int> arr{12, 34, 67, 90};
    cout << MinPages(arr, 2);
    return 0;
}