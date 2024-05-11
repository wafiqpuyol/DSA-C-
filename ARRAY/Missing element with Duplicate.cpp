/**
 * In this approach, vector won't be sorted. But still problem will be solved
 */

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{4, 3, 6, 2, 1, 1};
    int i = 0;
    while (i < arr.size())
    {
        if (arr[i] != arr[arr[i] - 1])
        {
            swap(arr[i], arr[arr[i] - 1]);
        }
        else
        {
            i++;
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        if (arr[i] != i + 1)
        {
            cout << "Missing " << i + 1 << endl;
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        int c = 0;
        for (int j = 0; j < arr.size(); j++)
        {
            if (arr[i] == arr[j])
            {
                c++;
            }
        }
        if (c == 2)
        {
            cout << "Reaping " << arr[i] << endl;
            return 0;
        }
    }
}