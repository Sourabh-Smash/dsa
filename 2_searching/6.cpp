// find element in rotated sorted array
#include<bits/stdc++.h>
using namespace std;
int findElem(vector<int>arr,int elem){
    int s=0;
    int e=arr.size()-1;
    while (s<=e)
    {
        int mid=s+(e-s)/2;
        if(arr[mid]==elem){
            return mid;
        }  
        else if(arr[mid]>elem&&arr[s]<=elem){
            e=mid-1;
        } 
        else{
            s=mid+1;
        } 
    }
    return -1;
    
}
int main()
{
    vector<int>arr{40,50,60,70,10,20,30};
    cout<<findElem(arr,100);
    return 0;
}