#include <iostream>
#include <vector>
using namespace std;

int almostSorted(vector<int> arr, int t)
{
    int s = 0, e = arr.size() - 1;
    while (s <= e)
    {
        int m = s + (e - s) / 2;
        if (arr[m] == t)
        {
            return m;
        }
        else if (m - 1 >= s && arr[m - 1] == t)
        {
            return m - 1;
        }
        else if (m + 1 <= e && arr[m + 1] == t)
        {
            return m + 1;
        }

        if (arr[m] > t)
        {
            e = m - 2;
        }
        else
        {
            s = m + 2;
        }
    }
}
int main()
{
    vector<int> arr{2, 1, 3, 5, 4, 7, 6, 8, 9};
    int t;
    cin >> t;
    cout << "Found the index :" << almostSorted(arr, t);
    return 0;
}