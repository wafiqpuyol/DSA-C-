#include <iostream>
#include <vector>
using namespace std;

int firstOcc(vector<int> arr, int t)
{
    int s = 0, e = arr.size() - 1, ans = -1;

    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == t)
        {
            if (mid < 0 || arr[mid - 1] != t)
            {
                return mid;
            }
            else
            {
                ans = mid;
                e = mid - 1;
            }
        }

        if (arr[mid] > t)
        {
            e = mid - 1;
        }
        if (arr[mid] < t)
        {
            s = mid + 1;
        }
    }
    return ans;
}

int lastOcc(vector<int> arr, int t)
{

    int s = 0, e = arr.size(), ans = -1, size = arr.size() - 1;
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] == t)
        {
            if (mid == size || arr[mid + 1] != t)
            {
                return mid;
            }
            else
            {
                ans = mid;
                s = mid + 1;
            }
        }

        if (arr[mid] < t)
        {
            s = mid + 1;
        }
        if (arr[mid] > t)
        {
            e = mid - 1;
        }
    }
    return ans;
}

int main()
{

    vector<int> arr{1, 2, 3, 3, 3, 4, 6, 6, 8};
    int t = 1;
    int res = (lastOcc(arr, t) - firstOcc(arr, t)) + 1;
    cout << res << endl;
}