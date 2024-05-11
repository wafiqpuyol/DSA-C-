#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int arr[] = {-12, 11, -5, 0, -7, -3, 6, -21, -8};
    int size = (sizeof(arr) / sizeof(arr[0]));
    int l = 0, r = size - 1;
    while (l < r)
    {
        if (arr[l] < 0 && arr[r] < 0)
        {
            l++;
        }
        if (arr[l] >= 0 && arr[r] < 0)
        {
            swap(arr[l], arr[r]);
            l++, r--;
        }
        if (arr[l] < 0 && arr[r] >= 0)
        {
            l++, r--;
        }
        if (arr[l] > 0 && arr[r] >= 0)
        {
            r--;
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}
