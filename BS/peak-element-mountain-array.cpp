#include <iostream>
#include <vector>
using namespace std;

int peakEl(vector<int> arr, int s, int e)
{
    int mid = s + (e - s) / 2;
    while (s <= e)
    {
        if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
        {
            return arr[mid];
        }
        else if (arr[mid] < arr[mid + 1])
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return -1;
}
int main()
{
    vector<int> arr{0, 5, 6, 5, 3, 2};
    int s = 0, e = arr.size() - 1;
    cout << peakEl(arr, s, e) << endl;
}
