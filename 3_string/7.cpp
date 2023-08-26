// 	minimun time difference lc 539
#include <bits/stdc++.h>
#include <vector>
#include <string.h>
using namespace std;
int minDifference(vector<string> s)
{
    vector<int> ans;
    for (int i = 0; i < s.size(); i++)
    {
        string curr = s[i];
        int hours = stoi(curr.substr(0, 2));
        int minutes = stoi(curr.substr(3, 2));
        int totalM = hours * 60 + minutes;
        ans.push_back(totalM);
    }
    sort(ans.begin(), ans.end());
    int maxVal = INT_MAX;

    // for (int i = 0; i < ans.size(); i++)
    // {
    //     cout << ans[i] << " ";
    // }
    cout << endl;
    for (int i = 0; i < ans.size() - 1; i++)
    {
        int diff = ans[i + 1] - ans[i];
        maxVal = min(maxVal, diff);
        // cout << maxVal << " ";
    }

    int lastDiff = ans[0] + 1440 - ans[ans.size() - 1];
    maxVal = min(maxVal, lastDiff);
    return maxVal;
}
int main()
{
    vector<string> s = {"12:20", "14:50", "00:00", "11:21", "23:59"};
    // vector<string> s = {"00:00", "23:59"};
    cout << minDifference(s);
    return 0;
}