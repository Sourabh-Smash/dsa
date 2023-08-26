#include <iostream>
#include <vector>
using namespace std;
int lastOccurance(vector<int> arr, int elem)
{
    int s = 0;
    int e = arr.size() - 1;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == elem)
        {
            ans = mid;
            s = mid + 1;
        }
        else if (arr[mid] > elem)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}

int firstOccurance(vector<int> arr, int elem)
{
    int s = 0;
    int e = arr.size() - 1;
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == elem)
        {
            ans = mid;
            e = mid - 1;
        }
        else if (arr[mid] > elem)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return ans;
}

int totalOccurance(vector<int> arr, int elem)
{
    int firstOcccur = firstOccurance(arr, elem);
    int lastOcccur = lastOccurance(arr, elem);

    return (lastOcccur-firstOcccur)+1;
}
int main()
{
    vector<int> arr{1, 2, 3, 4, 4, 4, 4, 4, 4, 4, 4, 5, 6};
    cout << totalOccurance(arr, 10);
    return 0;
}