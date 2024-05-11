#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // int arr[] = {9, 6, 4, 2, 3, 5, 7, 0, 1};
    // int size = sizeof(arr) / sizeof(arr[0]);
    vector<int> arr{-12, 11, -13, -5, 6, -7, 5, -3, -6};
    // int l = 0, m = 0, h = arr.size() - 1;
    int i = 0, e = arr.size() - 1;

    while (i < e)
    {
        if (arr[i] < 0 && arr[e] > 0)
        {
            i++, e--;
        }
        else if (arr[i] < 0 && arr[e] < 0)
        {
            i++;
        }
        else if (arr[i] > 0 && arr[e] > 0)
        {
            e--;
        }
        else if (arr[i] > 0 && arr[e] < 0)
        {
            swap(arr[i], arr[e]);
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }
}