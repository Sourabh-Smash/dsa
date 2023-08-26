#include <bits/stdc++.h>
using namespace std;
void sort0s1s(vector<int> arr)
{
    int s = 0;
    int e = arr.size() - 1;
    while (s <= e)
    {
        if (arr[s] == 0 && arr[e] == 1)
        {
            s++;
            e--;
        }
        else if (arr[s] == 1 && arr[e] == 1)
        {
            e--;
        }
        else if (arr[s] == 0 && arr[e] == 0)
        {
            s++;
        }
        else if (arr[s] == 1 && arr[e] == 0)
        {
            swap(arr[s], arr[e]);
            s++;
            e--;
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    vector<int> arr{1, 0, 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 1, 1};
    sort0s1s(arr);
    return 0;
}