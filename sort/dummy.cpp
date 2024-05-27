#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{55, 44, 38, 22, 9};
    for (int i = 0, j = arr.size() - 1; i < j; i++, j--)
    {
        swap(arr[i], arr[j]);
    }
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}