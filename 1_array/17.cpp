// addition of 2 arrays
#include <bits/stdc++.h>
using namespace std;
void addition(vector<int> arr, vector<int> arr2)
{
    string s;
    int ans = 0;
    int carry = 0;
    int i = arr.size() - 1;
    int j = arr2.size() - 1;
    while (i >= 0 && j >= 0)
    {
        ans = arr[i] + arr2[j] + carry;
        carry = ans / 10;
        s.push_back((ans % 10) + '0');
        j--, i--;
    }
    while (i >= 0)
    {
        ans = arr[i] + 0 + carry;
        carry = ans / 10;
        s.push_back((ans % 10) + '0');
        i--;
    }
    while (j >= 0)
    {
        ans = 0 + arr2[j] + carry;
        carry = ans / 10;
        s.push_back((ans % 10) + '0');
        j--;
    }
    if (carry)
    {
        s.push_back(carry + '0');
    }
    while (s[s.size() - 1] == '0')
    {
        s.pop_back();
    }
    reverse(s.begin(), s.end());

    for (int i = 0; i < s.size(); i++)
    {
        cout << s[i] << " ";
    }
}

int main()
{
    vector<int> arr{9, 5, 4, 9};
    vector<int> arr2{2, 1, 4};

    addition(arr, arr2);

    return 0;
}