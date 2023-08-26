#include<bits/stdc++.h>
using namespace std;

struct rectangle {
int len;
// int bre;
int a[5];
};

// int area(struct rectangle r1){ // call by value 
//     r1.len=20;
//     return r1.len*r1.bre;
// }

// int area (struct rectangle &r1){  // call by refrence 
//     r1.len=20;
//     return r1.len*r1.bre;
// }

// int chglen(struct rectangle *r1,int n){ // call by address 
//     return r1->len=n;
// }


// void fun(struct rectangle r2){  // call by value on array
//     r2.a[0]=1;
//     r2.a[1]=10;
//     r2.a[2]=100;
//     for (int i = 0; i < 5; i++)
//     {
//         cout<<r2.a[i]<<" ";
//     } 
//     cout<<endl;  
// }

// void fun(struct rectangle &r2){  // call by refrece on array
//     r2.a[0]=1;
//     r2.a[1]=10;
//     r2.a[2]=100;
//     for (int i = 0; i < 5; i++)
//     {
//         cout<<r2.a[i]<<" ";
//     } 
//     cout<<endl;  
// }

// void fun(struct rectangle *r2){  // call by address on array
//     r2->a[0]=1;
//     r2->a[1]=10;
//     r2->a[2]=100;
//     for (int i = 0; i < 5; i++)
//     {
//         cout<<r2->a[i]<<" ";
//     } 
//     cout<<endl;  
// }
int main()
{
    // struct rectangle r1={10,10};
    // r1.len=10;
    // r1.bre=20;
    // cout<<"area is : " <<r1.len*r1.bre<<endl;

    // struct rectangle *p=&r1;
    // (*p).len=10;
    // p->bre=10;
    // cout<<"area is : "<<p->len*p->bre;

    // struct rectangle *r2=(struct rectangle*)malloc(sizeof(struct rectangle));  // c lang 
    // struct rectangle *r2=new struct rectangle; // c++
    // r2->len=10;
    // r2->bre=10;
    // cout<<"area is : "<<r2->len*r2->bre;
 
 //  cout<<area(r1)<<" \n"; // call by value

//   cout<<area(r1)<<" \n"; // call by value
//   cout <<r1.len<<"\n";

//   cout<<chglen(&r1,50)<<" \n"; // call by address 
//   cout <<r1.len<<"\n";



struct rectangle r2={20,{2,4,6,8,10}}; 

// fun(r2); // call by value & refrence 
// for (int i = 0; i < 5; i++)
// {
//     cout<<r2.a[i]<<" ";
// }

// fun(&r2); // call by address
//  for (int i = 0; i < 5; i++)
// {
//     cout<<r2.a[i]<<" ";
// }


    return 0;
}