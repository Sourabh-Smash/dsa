#include <bits/stdc++.h>
using namespace std;
void intersection(vector<int> arr, vector<int> arr2)
{
    vector<int> brr;
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr2.size(); j++)
        {
            if (arr[i] == arr2[j])
            {
                arr2[j] = -1;
                brr.push_back(arr[i]);
            }
        }
    }
    for (int i = 0; i < brr.size(); i++)
    {
        cout << brr[i] << " ";
    }
}
int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector<int> arr2{2, 4, 6, 8, 8, 10};
    intersection(arr, arr2);

    return 0;
}