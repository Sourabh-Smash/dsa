#include <bits/stdc++.h>
using namespace std;
int findSqrt(int num)
{
    int s = 1;
    int e = num;
    int val = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (mid * mid <= num)
        {
            val = mid;
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
    }
    return val;
}
int main()
{
    int a = 10;
    // cout << findSqrt(a);
    int ans = findSqrt(a);
    cout << ans << endl;

    double floatVal = ans;
    int count = 2;
    double step = 0.1;
    for (int i = 0; i < count; i++)
    {
        for (double j = floatVal; j * j <= a; j = j + step)
        {
            floatVal = j;
        }
        step = step / 10;
    }
    cout << floatVal << endl;
    return 0;
}