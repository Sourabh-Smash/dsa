#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "sourabh";
    s[2] = '\0';
    char ch[100] = "sourabhji";
    ch[2] = '\0';

    // getline(cin, s);
    s.pop_back();
    s.push_back('h');
    cout << s.length();
    cout << s.empty() << endl;
    cout << s << endl;
    cout << s.substr(0, 4) << endl;

    string a = "hello";
    string b = "helloe";
    if (a.compare(b) == 0)
    {
        cout << " equal strign" << endl;
    }
    else
    {
        cout << "not equal" << endl;
    }
    // cout << ch;
    return 0;
}