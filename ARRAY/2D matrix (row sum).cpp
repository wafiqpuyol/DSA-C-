#include <iostream>
using namespace std;

void rowsum(int arr[][3], int r, int c)
{
    int sum = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            sum += arr[i][j];
        }
        cout << sum << endl;
        sum = 0;
    }
}

void findMax(int arr[][3], int r, int c, int max)
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (max < arr[i][j])
            {
                max = arr[i][j];
            }
        }
    }
    cout << max << endl;
}
int main()
{
    int arr[][3] = {
        {10, 5, 4},
        {58, 36, 79},
        {8, 101, 69}};
    int r = 3, c = 3;
    int max = INT16_MIN;
    rowsum(arr, r, c);
    findMax(arr, r, c, max);
}