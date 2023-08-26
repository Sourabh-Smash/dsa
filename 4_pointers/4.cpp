// fast power calculation

#include <bits/stdc++.h>
using namespace std;
int fastPower(int a, int b, int m)
{
    int ans = 1;
    while (b > 0)
    {
        if (b & 1)
            ans = (ans * a) % m;
        a = (a * a) % m;
        b >>= 1;
    }
    return ans % m;
}
int main()
{
    int a = 5;
    int b = 4;
    int m = 2;
    cout << fastPower(a, b, m);
    return 0;
}