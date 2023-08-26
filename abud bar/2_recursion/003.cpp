#include <bits/stdc++.h>
using namespace std;
void fun(int no)
{
    if (no > 0)
    {
        cout << no << " ";
        fun(no - 1);
        fun(no - 1);
    }
}
int main()
{
    int no = 3;
    fun(3);
}