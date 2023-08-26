#include <bits/stdc++.h>
using namespace std;
int maximumNo(int arr[], int size)
{
    int maxNO = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > maxNO)
        {
            maxNO = arr[i];
        }
    }
    return maxNO;
}
int minimumNo(int arr[], int size)
{
    int minNO = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < minNO)
        {
            minNO = arr[i];
        }
    }
    return minNO;
}
int main()
{
    int arr[] = {5, 6, 1, 9, 66, 45, 900};
    int size = 7;
    cout << maximumNo(arr, size);
    cout << minimumNo(arr, size);
    return 0;
}