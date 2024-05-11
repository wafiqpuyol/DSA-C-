/**
 * Row wised input
 */

#include <iostream>
using namespace std;

void f(int *arr)
{
}

int main()
{
    int r = 4;
    int c = 3;
    int arr[4][3];
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cin >> arr[i][j];
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
