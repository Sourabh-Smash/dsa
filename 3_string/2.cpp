#include <bits/stdc++.h>
using namespace std;
void Uppercase(char *ch)
{
    for (int i = 0; i < strlen(ch); i++)
    {
        // ch[i] = ch[i] - 'a' + 'A';
        ch[i] = ch[i] - 'A' + 'a';
    }
    cout << ch;
}
int main()
{

    char ch[] = "ABEBE";
    cout << ch << endl;
    Uppercase(ch);
    return 0;
}