// sum of first n natural numbers
#include<bits/stdc++.h>
using namespace std;
int sumOfNoRecursive(int no){
    if(no==0){
        return 0;
    }
    else return sumOfNoRecursive(no-1)+no;
}
int sumOfNoIterative(int no){
    int sum=0;
    for (int i = 1; i <= no; i++)
    {
        sum+=i; 
    }
    return sum;  
}
int sumOfNoConstant(int no){
    return (no*(no+1))/2;
}
int main()
{
   int no=5;
//   cout<<sumOfNoRecursive(no);
// cout<<sumOfNoIterative(no);
cout<<sumOfNoConstant(no);
    return 0;
}