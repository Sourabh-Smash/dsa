// spiral print of matrix
#include <bits/stdc++.h>
using namespace std;
void spriralPrint(vector<vector<int>> arr)
{
    vector<int> ans;
    int m = arr.size();    // rows
    int n = arr[0].size(); // cols
    int totalElem = m * n;
    int startRow = 0;
    int endCol = n - 1;
    int endRow = m - 1;
    int startCol = 0;
    int count = 0;

    while (count < totalElem)
    {
        // print first row;
        for (int i = startCol; i <= endCol && count < totalElem; i++)
        {
            ans.push_back(arr[startRow][i]);
            count++;
        }
        startRow++;

        // print last column
        for (int i = startRow; i <= endRow && count < totalElem; i++)
        {
            ans.push_back(arr[i][endCol]);
            count++;
        }
        endCol--;

        // print last row
        for (int i = endCol; i >= startCol && count < totalElem; i--)
        {
            ans.push_back(arr[endRow][i]);
            count++;
        }
        endRow--;

        // print fist column
        for (int i = endRow; i >= startRow && count < totalElem; i--)
        {
            ans.push_back(arr[i][startCol]);
            count++;
        }
        startCol++;
    }
    for (int i = 0; i < ans.size(); i++)
    {
        cout << ans[i] << " ";
    }
}
int main()
{
    vector<vector<int>> arr{{1, 2, 3},
                            {4, 5, 6},
                            {7, 8, 9}};
    // cout << arr[0].size() << endl;

    spriralPrint(arr);

    return 0;
}