/**
 *
 * Linear Search
 *
 * */

#include <iostream>
#include <limits.h>
#include <vector>
using namespace std;

void optimized()
{
    vector<int> arr{1, 2, 3, 4, 5, 6, 7, 8};
    int s = 0, e = arr.size() - 1;
    while (s < e)
    {
        swap(arr[s], arr[e]);
        s++;
        e--;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        std::cout << arr[i] << endl;
    }
}

void reverseArr(int *arr, int size, int endVal)
{
    for (int i = 0; i < (size / 2); i++)
    {
        if (i == (endVal))
        {
            return;
        }
        int temp = arr[i];
        arr[i] = arr[endVal];
        arr[endVal] = temp;
        endVal--;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(arr[0]);
    int endVal = size - 1;

    reverseArr(arr, size, endVal);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}