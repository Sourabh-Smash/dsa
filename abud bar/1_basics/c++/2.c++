#include <bits/stdc++.h>
using namespace std;
int main()
{
    int marks;
    cout << "enter marks : " << endl;
    cin >> marks;
    if (marks >= 80)
    {
        cout << "a grade"
             << "\n";
    }
    else if (marks >= 70 && marks < 80)
    {
        cout << "b grade"
             << "\n";
    }
    else if (marks >= 60 && marks < 70)
    {
        cout << "c grade"
             << "\n";
    }
    else if (marks >= 50 && marks < 60)
    {
        cout << "d grade"
             << "\n";
    }
    else if (marks >= 40 && marks < 50)
    {
        cout << "e grade"
             << "\n";
    }
    else
    {
        cout << "f grade"
             << "\n";
    }

    return 0;
}