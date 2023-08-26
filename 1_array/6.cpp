#include <bits/stdc++.h>
using namespace std;
void reverseArray(int arr[], int size)
{
    int s = 0;
    int e = size - 1;
    while (s <= e)
    {
        swap(arr[s++], arr[e--]);
    }
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = 10;
    reverseArray(arr, size);
    return 0;
}