#include <iostream>
#include <vector>
using namespace std;

int missingEl(vector<int> arr, int s, int e)
{
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (mid + 1 != arr[mid] && arr[mid - 1] != arr[mid] - 1)
        {
            return mid + 1;
        }
        if (mid + 1 == arr[mid] && arr[mid + 1] != arr[mid] + 1)
        {
            return arr[mid] + 1;
        }
        if (mid + 1 != arr[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}
int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 10};
    int size = arr.size() - 1, s = 0, e = size;
    cout << missingEl(arr, s, e) << endl;
}
