// factorial of a large number
#include "bits/stdc++.h"
using namespace std;
void factorial(int a)
{
    vector<int> arr;
    arr.push_back(1);
    int carry = 0;
    int ans = 0;
    for (int i = 2; i <= a; i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            ans = arr[j] * i + carry;
            carry = ans / 10;
            arr[j] = ans % 10;
        }
        while (carry)
        {
            arr.push_back(carry % 10);
            carry /= 10;
        }
    }
    reverse(arr.begin(), arr.end());
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    int a = 1000;
    factorial(a);
    return 0;
}