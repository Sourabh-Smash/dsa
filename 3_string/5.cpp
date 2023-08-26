// leetcode 1910 remove all occurance of substring
#include <iostream>
#include <string.h>
using namespace std;
int findf(string &s, string str)
{
    for (int i = 0; i < s.length(); i++)
    {
        int j = 0;
        if (s[i] == str[j])
        {
            int temp = i;
            bool val = false;
            while (j < str.length())
            {
                val = false;
                if (s[temp] == str[j])
                {
                    val = true;
                    temp++, j++;
                }
                else
                    break;
            }
            if (val == true)
            {
                return i;
            }
        }
    }
    return -1;
}
void deleteS(string &s, string str)
{
    int sIdx = findf(s, str);
    int str_len = str.length();
    for (int i = sIdx; i < s.length(); i++)
    {
        s[i] = s[str_len + i];
    }
    // return s;
}
string removeOccurance(string &s, string str)
{
    int idx = findf(s, str);
    // cout << idx << endl;
    while (idx != -1)
    {
        // cout << idx << endl;
        deleteS(s, str);
        idx = findf(s, str);
    }
    return s;
    // cout << s << endl;
}
string removeOccuranceStl(string s, string str)
{
    int idx = s.find(str);
    while (idx != string::npos)
    {
        s.erase(idx, str.length());
        idx = s.find(str);
    }
    return s;
}
int main()
{
    string s = "soawarabhManawat";
    string str = "awa";
    // cout << findf(s, str);
    // cout << deleteS(s, str);
    // cout << removeOccurance(s, str);
    // removeOccurance(s, str);
    cout << removeOccuranceStl(s, str);

    return 0;
}