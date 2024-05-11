#include <iostream>
using namespace std;

void extreme(int *arr, int size)
{
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";

        // for odd length ,otherwise don't need the loop
        if (i != size - 1)
        {
            cout << arr[size - 1] << " ";
        }

        size--;
    }
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // output => {1,9,2,8,3,7,4,6,5}

    int size = 9;

    extreme(arr, size);
}