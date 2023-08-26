#include <bits/stdc++.h>
using namespace std;
void transpose(vector<vector<int>> arr)
{
    vector<vector<int>> arr2(3, vector<int>(3));
    // int arr2[3][3];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            // swap(arr[i][j], arr[j][i]);
            arr2[j][i] = arr[i][j];
        }
    }

    for (int i = 0; i < arr2.size(); i++)
    {
        for (int j = 0; j < arr2[i].size(); j++)
        {
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    vector<vector<int>> arr2{{1, 2, 3},
                             {4, 5, 6},
                             {7, 8, 9}};
    // transpose(arr);
    vector<vector<int>> arr(5, vector<int>(5, -8));

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}