#include <bits/stdc++.h>
using namespace std;
bool palindromeOrNot(char ch[])
{
    int s = 0;
    int e = strlen(ch) - 1;
    while (s <= e)
    {
        if (ch[s] != ch[e])
        {
            return false;
        }
        s++;
        e--;
    }
    return true;
}
int main()
{

    char ch[] = "abebe";
    cout << ch << endl;
    cout << palindromeOrNot(ch);
    return 0;
}