#include<bits/stdc++.h>
using namespace std;
int factorial(int no){
    if(no<=1){
        return 1;
    }
    return factorial(no-1)*no;
}
int nCrIterative(int n,int r){
    int nval=factorial(n);
    int rval=factorial(r);
    int nrval=factorial(n-r);   
    return nval/(rval*nrval);
}

int nCrRecursive(int n,int r){
    if(n==r||r==0){
        return 1;
    }
    return nCrRecursive(n-1,r-1)+nCrRecursive(n-1,r);
}
int main()
{
    int no=10,no2=5;
    // cout<<factorial(no);
    // cout<<nCrIterative(no,no2);
    cout<<nCrRecursive(no,no2);
    return 0;
}