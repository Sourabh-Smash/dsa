#include<bits/stdc++.h>
using namespace std;
int *fun(int n){
 int *ptr=(int*)malloc(n*sizeof(int));
 return ptr;
}
int main()
{
    int *p;
    p=fun(5);
    p[0]=1;
    p[1]=100;
    p[2]=100;
    p[9]=43654;
    for (int i = 0; i < 10; i++)
    {
        cout<<p[i]<<" ";
    }
    cout<<endl<<sizeof(p);
    return 0;
}