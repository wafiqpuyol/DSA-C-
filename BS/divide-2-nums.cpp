#include <iostream>
#include <vector>
using namespace std;

int divideNum(int dividend, int divisor)
{
    int s = 0, e = dividend, m = s + (e - s) / 2, ans = -1;
    /* (mid/quotient * divisor) + remainder = dividend */
    while (s <= e)
    {
        if (m * divisor == dividend)
        {
            // if minus value is available, break the loop instead of returning
            return m;
        }
        else if (m * divisor > dividend)
        {
            e = m - 1;
        }
        else
        {
            ans = m;
            s = m + 1;
        }
        m = s + (e - s) / 2;
    }
    return ans;
}

int main()
{
    int dividend, divisor;
    cin >> dividend;
    cin >> divisor;
    cout << divideNum(dividend, divisor);
    return 0;
}