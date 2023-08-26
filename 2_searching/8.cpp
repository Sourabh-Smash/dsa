#include <bits/stdc++.h>
using namespace std;
int binarySearch2D(vector<vector<int>> arr, int elem)
{
    int s = 0;
    int e = (5 * 4) - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        int rowidx = mid / 5;
        int colidx = mid % 5;
        
        if(arr[rowidx][colidx]==elem){
            return true;
        }
        else if(arr[rowidx][colidx]>elem){
            e=mid-1;
        }
        else {
            s=mid+1;
        }
    }
    return -1;
}
int main()
{
    vector<vector<int>> arr{
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16},
        {17, 18, 19, 20}};

    cout << binarySearch2D(arr, 14);
    return 0;
}