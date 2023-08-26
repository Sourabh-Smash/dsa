#include <bits/stdc++.h>
using namespace std;
void sortColors(vector<int> arr)
{
    int zero = 0;
    int one = 1;
    int two = arr.size() - 1;
    while (one <= two)
    {
        if (arr[zero] == 0 && arr[one] == 1 && arr[two] == 2)
        {
            zero++, one++, two--;
        }
        else if ((arr[zero] == 1 || arr[zero] == 2) && arr[two] == 0)
        {
            swap(arr[zero], arr[two]);
            zero++, one++;
        }
        else if (arr[zero] == 2 && arr[two] < 2)
        {
            swap(arr[zero], arr[two]);
            two--;
        }
        else if (arr[one] == 2 && arr[two] < 2)
        {
            swap(arr[one], arr[two]);
            two--;
        }
        else if (arr[zero] == arr[one] && arr[one] == arr[two])
        {
            one++;
        }
        else if (arr[zero] != 0 && arr[one] == 0)
        {
            swap(arr[zero], arr[one]);
            zero++;
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
void sortColorsBetter(vector<int> arr)
{
    int l, m, h;
    l = m = 0;
    h = arr.size() - 1;
    while (m <= h)
    {
        if (arr[m] == 0)
        {
            swap(arr[l], arr[m]);
            m++, l++;
        }
        else if (arr[m] == 1)
        {
            m++;
        }
        else
        {
            swap(arr[m], arr[h]);
            h--;
        }
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}
int main()
{
    vector<int> arr{1, 1, 2, 0, 2, 1, 0, 0, 2, 1, 1, 0};
    // sortColors(arr);
    sortColorsBetter(arr);

    return 0;
}