// divide 2 numbers using bianry search
#include <bits/stdc++.h>
using namespace std;
int divideNo(int divisor, int divident)
{
    int s = 0;
    int e = abs(divident);
    int ans = -1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (abs(mid * divisor) <= abs(divident))
        {
            if (abs(mid * divisor) == abs(divident))
            {
                ans = mid;
                // return ans;
                break;
            }
            ans = mid;
            s = mid + 1;
        }
        else if (abs(mid * divisor) > abs(divident))
        {
            e = mid - 1;
        }
    }
    if ((divisor > 0) && (divident > 0) || (divisor < 0) && (divident < 0))
    {
        return ans;
    }
    else
    {
        return -ans;
    }
}
int main()
{
    int divident = 10;
    int divisor = -2;
    // abs(divisor);
    cout << divideNo(divisor, divident);
    return 0;
}