#include<bits/stdc++.h>
using namespace std;
template <class T>
class arath{
private:
T a,b;
public:
arath(T a,T b);
T add();
T sub();
};

template <class T>
arath<T>::arath(T a,T b){
    this->a=a;
    this->b=b;
}

template <class T>
T arath<T>::add(){
    return a+b;
}

template <class T>
T arath<T>::sub(){
    return a-b;
}

int main()
{
    arath <int> r1(10,10);
    cout<<r1.add()<<"\n";
    cout<<r1.sub()<<"\n";

    arath <float> r2(10.43534,10.121);
    cout<<r2.add()<<"\n";
    cout<<r2.sub()<<"\n";
    return 0;
}

