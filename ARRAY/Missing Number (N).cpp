#include <iostream>
#include <vector>
using namespace std;

void bruteForce(vector<int> arr, int size, int missingNum, int isMissing)

{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < arr.size(); j++)
        {
            if (i == arr[j])
            {
                missingNum = 0;
                isMissing = false;
                break;
            }
            else
            {
                missingNum = i;
                isMissing = true;
            }
        }
        if (isMissing)
        {
            cout << missingNum << endl;
            break;
        }
    }
}
void optimal(vector<int> arr, int size)
{
    int sum = 0, totalSum = 0, n = size;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += i;
    }

    totalSum = (n * (n + 1)) / 2;
    cout << totalSum - sum << endl;
}
int main()
{
    vector<int> arr{9, 6, 4, 2, 3, 5, 7, 0, 1};
    int size = arr.size();
    int missingNum = 0;
    bool isMissing = false;
    // bruteForce(arr, size, missingNum, isMissing);
    optimal(arr, size);
}