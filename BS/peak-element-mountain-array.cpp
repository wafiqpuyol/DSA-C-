#include <iostream>
#include <vector>
using namespace std;

int peakEl(vector<int> arr, int s, int e)
{
    while (s <= e)
    {
        int mid = (s + e) / 2;
        if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1])
        {
            return arr[mid];
        }
        else
        {
            
        }
    }
    return -1;
}
int main()
{
    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8, 10};
    int size = arr.size() - 1, s = 0, e = size;
    cout << peakEl(arr, s, e) << endl;
}
