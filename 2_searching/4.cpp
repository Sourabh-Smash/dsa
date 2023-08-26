#include<bits/stdc++.h>
using namespace std;
int findMissingElem(vector<int>arr){
    int s=0;
    int e=arr.size()-1;
    while (s<=e)
    {
        int mid=s+(e-s)/2;
        if(arr[mid]-arr[mid-1]!=arr[mid+1]-arr[mid]){
            return mid+1;
        }
        else if(arr[mid]-mid==1){
            s=mid+1;
        }
        else{
            e=mid-1;
        }
    }
    return -1;
    
}
int main()
{
    vector<int>arr{1,2,3,4,6,7,8};
    cout<<findMissingElem(arr);
    return 0;
}