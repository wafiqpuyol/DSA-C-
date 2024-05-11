/**
 * In this approach, vector won't be sorted. But still problem will be solved
 */

#include <iostream>
#include <vector>
#include <unordered_map>
#include <unordered_set>
using namespace std;

int main()
{
    vector<int> arr{10, 1, 3, 4, 3, 5, 6};
    unordered_map<int, int> myHash;

    for (int i = 0; i < arr.size(); i++)
    {
        myHash[arr[i]]++;
    }

    for (int i = 0; i < arr.size(); i++)
    {
        if (myHash[arr[i]] > 1)
        {
            cout << arr[i] << endl;
            return 0;
        }
    }
}