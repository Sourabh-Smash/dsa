#include <bits/stdc++.h>
using namespace std;
int findMax(vector<vector<int>> arr)
{
    int maxNo = INT_MIN;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] > maxNo)
                maxNo = arr[i][j];
        }
    }
    return maxNo;
}
int findMin(vector<vector<int>> arr)
{
    int minNo = INT_MAX;
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (arr[i][j] < minNo)
                minNo = arr[i][j];
        }
    }
    return minNo;
}
int main()
{
    vector<vector<int>> arr{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    // cout << findMax(arr);
    cout << findMin(arr);
    return 0;
}