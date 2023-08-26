#include <bits/stdc++.h>
using namespace std;
void count0s1s(int arr[], int size)
{
    int zeros = 0;
    int ones = 0;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == 0)
        {
            zeros++;
        }
        else
        {
            ones++;
        }
    }
    cout<<"1s : "<<ones<<" 0s : "<<zeros<<endl;
}
int main()
{
    int arr[] = {1, 1, 1, 0, 0, 1, 0, 1, 0, 1, 1, 0, 0};
    int size = sizeof(arr) / sizeof(int);

    count0s1s(arr, size);
    return 0;
}