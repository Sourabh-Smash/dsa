#include<bits/stdc++.h>
using namespace std;
double taylorSeries(int x,int y){
    static double p=1,f=1;
    double r=0;
    if(y==0){
        return 1;
    }
    else{
        r=taylorSeries(x,y-1);
        p=p*x;
        f=f*y;
        return r+p/f;
    }
}
double taylorSeriesEfficient(double x,double y){
    static double s=1;
    if(y==0){
        return s;
    }
    else{
        s=1+x/y*s;
        return taylorSeriesEfficient(x,(y-1));
    }
}
double taylorSeriesIterative(double x,double y){
    double s=1;
    for (; y > 0; y--)
    {
        s=1+x/y*s;
        cout<<s<<" ";
    }
    return s;
    
}
int main()
{
//    cout<<taylorSeries(1,10);
// cout<<taylorSeriesEfficient(1,10);
cout<<taylorSeriesIterative(1,10);

    return 0;
}