// odd occuring element 
#include <bits/stdc++.h>
using namespace std;
int uniqueElement(vector<int> arr)
{
    int xorr = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        xorr = arr[i] ^ xorr;
    }
    return xorr;
}
int main()
{
    vector<int> arr{1, 2, 3, 1, 2, 3, 4, 5, 5, 6, 6};
    cout << uniqueElement(arr);
    return 0;
}