#include <iostream>
#include <vector>
using namespace std;
int peakElement(vector<int> arr)
{
    int s = 0;
    int e = arr.size() - 1;
    while (s < e)
    {
        int mid = s + (e - s) / 2;
        // if (arr[mid] < arr[mid + 1])
        // {
        //     s = mid + 1;
        // }
        // else
        // {
        //     e = mid;
        // }
        (arr[mid] < arr[mid + 1]) ? s = mid + 1 : e = mid;
    }
    return s;
}
int main()
{
    vector<int> arr{0, 10, 5, 2};
    cout << peakElement(arr);
    return 0;
}