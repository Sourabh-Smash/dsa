// move all -ve numbers to left side of an array (numbers order doestn matter)
#include <bits/stdc++.h>
using namespace std;
void sortNeg(vector<int> arr)
{
    int l = 0;
    int h = arr.size() - 1;
    while (l <= h)
    {
        if (arr[l] < 0 && arr[h] >= 0)
        {
            l++;
            h--;
        }
        else if (arr[l] < 0)
        {
            l++;
        }
        else if (arr[h] >= 0)
        {
            h--;
        }
        else
        {
            swap(arr[l], arr[h]);
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    vector<int> arr{-1, 2, -3, 4, -5, -6};
    sortNeg(arr);
    return 0;
}