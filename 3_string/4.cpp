// leetcode question 1047 (delete all adjacent dublicates in string)
#include <bits/stdc++.h>
using namespace std;

string removeDublicate(string &s)
{
    int len = s.length();
    string str = "";
    for (int i = 0; i < len; i++)
    {
        if (str.length() > 0)
        {
            if (s[i] == str[str.length() - 1])
            {
                str.pop_back();
                cout << str << endl;
            }
            else
            {
                str.push_back(s[i]);
                cout << str << endl;
            }
        }
        else
        {
            str.push_back(s[i]);
            cout << str << endl;
        }
    }
    return str;
}
int main()
{
    string s = "abbaca";
    cout << removeDublicate(s);
    return 0;
}