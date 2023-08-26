// power of two using recursion
#include <bits/stdc++.h>
using namespace std;
int powerOftwo(int m, int n)
{
    if (n == 0)
        return 1;
    else
        return powerOftwo(m, n - 1) * m;
}
int powerOftwoEfficient(int m, int n)
{
    if (n == 0)
        return 1;
    else if ((n & 1) == 0)
        return powerOftwoEfficient(m * m, n / 2);
    else
        return m * powerOftwoEfficient(m * m, (n - 1) / 2);
}
int main()
{
    int m = 2, n = 5;
    // cout<<powerOftwo(m,n);
    cout<<powerOftwoEfficient(m,n);
    return 0;
}