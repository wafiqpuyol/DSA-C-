#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<vector<int>> arr(5, vector<int>(3, 69));

    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr[i].size(); j++)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << endl;
    }
    cout << endl;
}
