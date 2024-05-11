#include <iostream>
#include <vector>
using namespace std;

// void nonOptimal(vector<int> arr, int duplicate, int duplicateCount)
// {
//     for (int i = 0; i < arr.size(); i++)
//     {
//         for (int j = 0; j < arr.size(); j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 duplicateCount += 1;
//                 if (duplicateCount == 2)
//                 {
//                     duplicate = arr[i];
//                     break;
//                 }
//             }
//         }
//         if (duplicate != 0)
//         {
//             cout << "Duplicate is " << arr[i] << endl;
//             break;
//         }
//         duplicateCount = 0; // re-initialising with 0
//     }
// }

void negativeIndexing(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        int index = abs(arr[i]);

        // already visited
        if (arr[index] < 0)
        {
            cout << "Duplicate is index is: " << i << " & number is: " << abs(arr[i]);
            return;
        }

        // marking as visited
        arr[index] = -arr[index];
    }
}

int main()
{
    vector<int> arr{3, 1, 3, 4, 2};
    int duplicate = 0;
    int duplicateCount = 0;
    negativeIndexing(arr);
}