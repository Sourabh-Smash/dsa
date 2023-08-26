// print doubles of an array
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int arr[10];
    cout << "enter in array : " << endl;
    for (int i = 0; i < 10; i++)
    {
        cin >> arr[i];
    }

    cout << "array is  : " << endl;
    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\nprint doubles of array" << endl;

    for (int i = 0; i < 10; i++)
    {
        cout << arr[i] * 2 << " ";
    }

    return 0;
}