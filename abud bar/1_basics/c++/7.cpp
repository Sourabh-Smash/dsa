#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int a=10;
    // int *p; // pointer 
    // int *p=(int*)malloc(5*sizeof(int)); // dma in c lang
    // int *p=new int[5]; // dma in c++ 
    // p=&a;
    // cout<<a<<endl<<&p<<endl;
    // cout <<*p<<endl;// derefrencing 


    // refrencing in c++
    int a=10;
    int &r=a;

    cout<<a<<"\n";
    r++;
    cout<<a<<"\n";
    a++;
    cout<<r<<"\n";

    return 0;
}