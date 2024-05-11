#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> arr{
        {4, 5, 0, 41, 9},
        {8, 2, 10, 158, 10},
        {14, 56, 96, 81, 1},
    };

    int r = arr.size();
    int c = arr[0].size();
    for (int i = 0; i < c; i++)
    {
        if (i % 2 != 0)
        {
            for (int j = r - 1; j >= 0; j--)
            {
                cout << arr[j][i] << " ";
            }
        }
        else
        {
            for (int j = 0; j < r; j++)
            {
                cout << arr[j][i] << " ";
            }
        }
        cout << "    ";
    }
}