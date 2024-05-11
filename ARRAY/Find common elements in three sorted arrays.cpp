/**
 *
 * In this prob , u have to return a vector, which will contain the common elements in three sorted arrays
 *
 */

#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

std::vector<int> findDuplicate(vector<int> &arr1, vector<int> &arr2, vector<int> &arr3)
{
    int a = 0, b = 0, c = 0;
    vector<int> result;
    unordered_set<int> mySet;
    while (a < arr1.size() && b < arr2.size() && c < arr3.size())
    {

        if (arr1[a] == arr2[b] && arr2[b] == arr3[c])
        {
            mySet.insert(arr1[a]);
            a++, b++, c++;
        }

        else if (arr1[a] < arr2[b])
        {
            a++;
        }
        else if (arr2[b] < arr3[c])
        {
            b++;
        }
        else
        {
            c++;
        }
    }

    for (int i : mySet)
    {
        result.push_back(i);
    }
    return result;
}
int main()
{
    vector<int> arr1{1, 5, 10, 20, 40, 80};
    vector<int> arr2{6, 7, 20, 80, 100};
    vector<int> arr3{3, 4, 15, 20, 30, 70, 80, 120};
    vector<int> containDuplicateArr = findDuplicate(arr1, arr2, arr3);

    for (int i = 0; i < containDuplicateArr.size(); i++)
    {
        cout << "Found one " << containDuplicateArr[i] << endl;
    }
    return 0;
}