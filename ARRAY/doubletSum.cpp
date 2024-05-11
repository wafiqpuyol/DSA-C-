/**
 *
 *
 * Find a pair whose sum is equal to the given sum.
 *
 * */

#include <iostream>
#include <vector>
using namespace std;

void doublePairSum(std::vector<int> arr, int sum)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = i + 1; j < arr.size(); j++)
        {
            if ((arr[i] + arr[j]) == sum)
            {
                cout << "(pair: " << arr[i] << ", " << arr[j] << ")" << endl;
            }
        }
    }
}

int main()
{
    vector<int> arr{4, 5, 0, 8, 9};
    int sum = 9;
    doublePairSum(arr, sum);
}