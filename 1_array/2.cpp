// linear search
#include <bits/stdc++.h>
using namespace std;
int linearSearch(int arr[], int size, int elem)
{
    for (int i = 0; i < size; i++)
    {
        if(arr[i]==elem){
            return i;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {4, 8, 9, 3, 6, 1};
    int size = sizeof(arr) / sizeof(int);
    int elem = 1;

    cout << linearSearch(arr, size, elem);

    return 0;
}