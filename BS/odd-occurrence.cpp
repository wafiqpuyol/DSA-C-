#include <iostream>
#include <vector>
using namespace std;

int findOddOccur(vector<int> arr)
{
    int s = 0, e = arr.size() - 1, m = s + (e - s) / 2;
    while (s <= e)
    {
        if (s == e)
        {
            return s;
        }
        else if (m % 2 == 0)
        {
            /*
            this can be the base case. if it's set then else logic would be {e= m-1}
            if (arr[m] != arr[m - 1] && arr[m] != arr[m + 1]) {
                return m;
            }
            */
            if (arr[m] == arr[m + 1])
            {
                s = m + 2;
            }
            else
            {
                e = m;
            }
        }
        else
        {
            if (arr[m] == arr[m + 1])
            {
                e = m - 1;
            }
            else
            {
                s = m + 1;
            }
        }
        m = s + (e - s) / 2;
    }
    return -1;
}

int main()
{
    vector<int> arr{1, 2, 2, 3, 3, 4, 4, 600, 600};
    cout << findOddOccur(arr);
    return 0;
}