
// factorial till n using recursion
#include<bits/stdc++.h>
using namespace std;
int factorRecursive(int no){
    if(no==0){
        return 1;
    }
    else{
        return factorRecursive(no-1)*no;
    }
}
int main()
{
    int no=5;
    cout<<factorRecursive(no);
    return 0;
}