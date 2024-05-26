#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#include <set>
using namespace std;

int kDiff(vector<int> &arr, int s, int x)
{

    int e = arr.size(), ans = -1, mid = (s + e) / 2;

    while (s <= e)
    {
        if (arr[mid] == arr[x])
        {
            return mid;
        }

        if (arr[mid] > x)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
        mid = (s + e) / 2;
    }
    return ans;
}

int main()
{
    vector<int> arr{3, 1, 4, 1, 5};
    int k = 2;
    sort(arr.begin(), arr.end());
    set<pair<int, int>> s;
    for (int i = 0; i < arr.size(); i++)
    {
        if (kDiff(arr, i + 1, arr[i] + k) != -1)
        {
            s.insert({arr[i], arr[i] + k});
        }
    }

    // cout << s.size();
    for (auto x : s)
    {
        cout << x.first << " " << x.second << endl;
    }
}