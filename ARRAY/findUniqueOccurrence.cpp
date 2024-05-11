#include <iostream>
#include <vector>
using namespace std;

int findUniqueOccurrence(std::vector<int> arr)
{
    // Always initialize a variable with 0 when working with XOR;
    int a = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < arr.size(); i++)
    {
        a = a ^ arr[i];
    }

    return a;
}

int main()
{
    int size;
    cin >> size;
    std::vector<int> arr(size);
    int uniqueOccurrence = findUniqueOccurrence(arr);

    cout << uniqueOccurrence << endl;
}