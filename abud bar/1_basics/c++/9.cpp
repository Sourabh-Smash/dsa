#include <bits/stdc++.h>
using namespace std;
class Rectangle
{
private:
    int len, bre;

public:
    Rectangle(int l, int b);
    int area();
    void changeLen(int a);
};
Rectangle::Rectangle(int l, int b)
{
    len = l;
    bre = b;
}

int Rectangle::area()
{
    return len * bre;
}
void Rectangle::changeLen(int a)
{
    len = a;
}

int main()
{
    Rectangle r1(10, 10);
    r1.area();
    cout << r1.area() << "\n";
    r1.changeLen(20);
    cout << r1.area() << "\n";
    return 0;
}