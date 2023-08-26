#include <bits/stdc++.h>
using namespace std;
void fubunachiSeriesIterative(int no)
{
    int a = 0, b = 1, c = 0;
    for (int i = 2; i <= no; i++)
    {
        c = a + b;
        cout << c << " ";
        a = b;
        b = c;
    }
}
int fubunachiSeriesRecursive(int no){
    if(no<=1){
        return no;
    }
    return fubunachiSeriesRecursive(no-2)+fubunachiSeriesRecursive(no-1);
}
int fubunachiSeriesMemorization(int no){
    static int A[10]={-1,-1,-1,-1,-1,-1,-1,-1,-1,-1};
    // static vector<int>arr=[-1];
    if(no<=1){
        A[no]=no;
        return no;
    }
    if(A[no-2]==-1){
        A[no-2]=fubunachiSeriesMemorization(no-2);
    }
    if(A[no-1]==-1){
        A[no-1]=fubunachiSeriesMemorization(no-1);
    }
    return A[no-2]+A[no-1];
}
int main()
{
    int a=10;
    // fubunachiSeriesIterative(a);
    // cout<<fubunachiSeriesRecursive(10);
    cout<<fubunachiSeriesMemorization(5);


    return 0;
}