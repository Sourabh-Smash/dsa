#include <bits/stdc++.h>
using namespace std;
void fun1(int n)
{
    if (n > 0)
    {
        cout << n << " ";
        fun1(n - 1);
    }
}
void fun2(int n)
{
    if (n > 0)
    {
        fun2(n - 1);
        cout << n << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    fun1(n);
    fun2(n);
    return 0;
}