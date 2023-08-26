#include <bits/stdc++.h>
using namespace std;
int x = 0;
int fun(int no)
{
    if (no > 0)
    {
        x++;
        return fun(no - 1) + x;
    }
    return 0;
}
int main()
{
    int no;
    cin >> no;
    cout << fun(no);
    // cout << fun(no);
    return 0;
}