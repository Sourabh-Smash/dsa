#include <bits/stdc++.h>
using namespace std;
void printExtreme(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    while (s <= e)
    {
        if (s == e)
        {
            cout << arr[s] << " ";
        }
        else
        {
            cout << arr[e] << " ";
            cout << arr[s] << " ";
        }
        s++;
        e--;
    }
}

int main()
{

    int arr[9] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int size = 9;
    printExtreme(arr, size);
    return 0;
}