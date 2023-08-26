// 	Find common elements in 3 sorted array
#include <bits/stdc++.h>
using namespace std;
void commonElems(vector<int> arr, vector<int> arr2, vector<int> arr3)
{
    int i, j, k;
    i = j = k = 0;
    while (i < arr.size() && j < arr2.size() && k < arr3.size())
    {
        if (arr[i] == arr2[j] && arr2[j] == arr3[k])
        {
            cout << arr[i] << " ";
            i++, k++, j++;
        }
        else if (arr[i] < arr2[j])
        {
            i++;
        }
        else if (arr2[j] < arr3[k])
        {
            j++;
        }
        else
        {
            k++;
        }
    }
}
int main()
{
    vector<int> arr{1, 5, 10, 20, 40, 80};
    vector<int> arr2{6, 7, 20, 80, 100};
    vector<int> arr3{3, 4, 15, 20, 30, 70, 80, 120};

    commonElems(arr, arr2, arr3);
    return 0;
}