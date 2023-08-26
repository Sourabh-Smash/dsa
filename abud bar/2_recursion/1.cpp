#include <bits/stdc++.h>
using namespace std;
void funa(int no);
void funb(int no);
void funa(int no)
{
    if (no > 0)
    {
        cout << no << " ";
        funb(no - 1);
    }
}
void funb(int no)
{
    if (no > 1)
    {
        cout << no << " ";
        funa(no / 2);
    }
}
int nestedRec(int no){
    if(no>100){
        return no-10;
    }
    else
        return nestedRec(nestedRec(no+11));
    
}
int main()
{
    // funa(20);
    int val=nestedRec(95);
    cout<<val<<endl;
    return 0;
}