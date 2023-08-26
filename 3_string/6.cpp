
// valid palindrome 11 leetcode 680
#include <bits/stdc++.h>
using namespace std;
bool checkPali(string s, int b, int e)
{
    while (b <= e)
    {
        if (s[b] != s[e])
        {
            return false;
        }
        b++, e--;
    }
    return true;
}
bool palindrome(string &s)
{
    int b = 0;
    int e = s.length() - 1;
    while (b <= e)
    {
        if (s[b] != s[e])
        {
            return checkPali(s, b + 1, e) || checkPali(s, b, e - 1);
        }
        else
        {
            b++, e--;
        }
    }
    return true;
}
int main()
{
    string s = "abc";
    cout << palindrome(s);
    return 0;
}