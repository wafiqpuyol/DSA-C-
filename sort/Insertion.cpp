#include <iostream>
#include <vector>
using namespace std;

void insertion(vector<int> &arr)
{
    for (int i = 1; i < arr.size(); i++)
    {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ,";
    }
}
int main()
{
    vector<int> arr{9, 5, 1, 4, 3};
    insertion(arr);
    return 0;
}