#include <bits/stdc++.h>
using namespace std;
void rowWisePrint(vector<vector<int>> arr)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
void columnWisePrint(vector<vector<int>> arr)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }
}
int main()
{
    vector<vector<int>> arr{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};

    // rowWisePrint(arr);
    columnWisePrint(arr);


    return 0;
}