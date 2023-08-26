#include <bits/stdc++.h>
using namespace std;
void pairSum(vector<int> arr, int sum)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            for (int k = j + 1; k < arr.size(); k++)
            {
                if (arr[i] + arr[j] + arr[k] == sum)
                {
                    cout << "{ " << i << " , " << j << " , " << k << " }" << endl;
                    break;
                }
            }
        }
    }
}
int main()
{
    vector<int> arr{1, 3, 5, 7, 2, 4, 6};
    pairSum(arr, 9);

    return 0;
}