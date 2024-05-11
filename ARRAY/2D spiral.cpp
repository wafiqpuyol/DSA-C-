#include <iostream>
#include <vector>
using namespace std;

int main()
{

    vector<vector<int>> arr{
        {10, 5, 4, 5},
        {58, 36, 79, 47},
        {8, 101, 69, 10}};

    int c = arr.size();
    int r = arr[0].size();

    // for (int i = 0; i < r; i++)
    // {
    //     // for (int j = 0; j < c; j++)
    //     // {

    //     cout << arr[i][0] << " ";
    //     // }
    //     cout << endl;
    // }
    cout << r << c << " ";
}