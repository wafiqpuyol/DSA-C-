#include <iostream>
#include <vector>
using namespace std;

int lastOcc(vector<int> arr)
{

    int s = 0, e = arr.size(), ans = -1, t = 3, size = arr.size() - 1;
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
    cout << lastOcc(arr);
}