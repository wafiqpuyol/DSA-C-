#include <iostream>
#include <vector>
using namespace std;

int firstOcc(vector<int> arr)
{
    int s = 0, e = arr.size() - 1, t = 3, ans = -1,mid = (s + e) / 2;

    while (s <= e)
    {
        if (arr[mid] == t)
        {
            if (mid-1 > s && arr[mid - 1] == t)
            {
                ans = mid;
                e = mid - 1;
                
            }
            else
            {
                return mid;
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
        mid = (s + e) / 2;
    }
    return ans;
}

int main()
{
    vector<int> arr{1, 3, 4, 4, 5, 6, 8};
    cout << firstOcc(arr);
}