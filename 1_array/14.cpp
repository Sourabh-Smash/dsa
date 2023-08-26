#include <bits/stdc++.h>
using namespace std;
void linearSearch(vector<vector<int>> arr, int elem)
{
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            if (elem == arr[i][j])
            {
                cout << arr[i][j] << " ";
                break;
            }
        }
    }
}
int main()
{
    vector<vector<int>> arr{{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    linearSearch(arr, 7);
    return 0;
}