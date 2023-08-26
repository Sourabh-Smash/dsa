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
        int m = s + (e - s) / 2;
        if (arr[m] == elem)
        {
            ans = m;
            s = m + 1;
        }
        else if (arr[m] > elem)
        {
            e = m - 1;
        }
        else
        {
            s = m + 1;
        }
    }
    return ans;
}
int main()
{
    vector<int> arr{1, 2, 3, 4, 4, 4, 4, 4, 5, 6};
    cout << lastOccurance(arr, 5);
    return 0;
}