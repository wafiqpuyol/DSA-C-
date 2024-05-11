#include <iostream>
using namespace std;

void transpose(int arr[][3], int r, int c, int trans[][3])
{
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            trans[j][i] = arr[i][j];
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            cout << trans[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{

    int arr[][3] = {
        {10, 5, 4},
        {58, 36, 79},
        {8, 101, 69}};
    int r = 3, c = 3;
    int trans[3][3];
    transpose(arr, r, c, trans);
}