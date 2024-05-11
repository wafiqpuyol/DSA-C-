/**
 *
 * Sort 0's at left position and 1's at right position
 *
 * */

#include <iostream>
using namespace std;

int swap(int a, int b, int *arr)
{
    int temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

void func(int *arr, int size)
{
    int s = 0;
    int i = 0;
    int e = size - 1;
    while (s <= e)
    {
        if (arr[i] == 0)
        {
            swap(i, s, arr);
            ++i;
            ++s;
        }
        else
        {
            swap(i, e, arr);
            --e;
        }
    }

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << endl;
    }
}
int main()
{
    int arr[] = {1, 0, 1, 1, 0, 1, 0, 0, 1, 0, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    func(arr, size);
}
