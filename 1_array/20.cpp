#include <bits/stdc++.h>
using namespace std;
void wavePrint(vector<vector<int>> arr)
{
    int m = arr.size();
    int n = arr[0].size();
    for (int startCol = 0; startCol < n; startCol++)
    {
        if ((startCol & 1) == 0)
        {
            for (int i = 0; i < m; i++)
            {
                cout << arr[i][startCol] << " ";
            }
        }
        else
        {
            for (int i = m - 1; i >= 0; i--)
            {
                cout << arr[i][startCol] << " ";
            }
        }
    }
}
int main()
{
    vector<vector<int>> arr{{1, 2, 3},
                            {4, 5, 6},
                            {7, 8, 9}};
    wavePrint(arr);
    return 0;
}