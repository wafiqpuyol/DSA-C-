#include <iostream>
#include <vector>
using namespace std;

int pivot(std::vector<int> arr)
{
    int sum = 0, cs = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += arr[i];
    }

    for (int i = 0; i < arr.size(); i++)
    {
        int ls = cs;
        int rs = sum - ls - arr[i];
        if (ls == rs)
        {
            return i;
        }
        cs += arr[i];
    }
    return -1;
}
int main()
{
    vector<int> arr{1, 7, 3, 6, 5, 6};
    int result = pivot(arr);
    cout << result << "rd index" << endl;
}