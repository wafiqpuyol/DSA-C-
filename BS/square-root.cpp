#include <iostream>
#include <vector>
using namespace std;

double precisionApproach1(double a, int t)
{
    double increment = 0.1;
    int precision;
    cin >> precision;
    for (int i = 0; i < precision; i++)
    {
        while (a * a <= t)
        {
            a += increment;
        }
        a = a - increment;
        increment = increment / 10;
    }
    return a;
}

double precisionApproach2(double a, int t)
{
    double increment = 0.1;
    int precision;
    cin >> precision;
    for (int i = 0; i < precision; i++)
    {
        for (double j = a; j * j <= t; j = j + increment)
        {
            a = j;
        }
        increment = increment / 10;
    }
    return a;
}

double squareRoot(int t)
{
    double s = 0, e = t, m = (s + e) / 2;
    double a = -1;
    while (s <= e)
    {
        if (m * m == t)
        {
            return m;
        }
        else if (m * m > t)
        {
            e = m - 1;
        }
        else
        {
            a = m;
            s = m + 1;
        }
        m = s + (e - s) / 2;
    }

    return precisionApproach1(a, t);
    return precisionApproach2(a, t);
}

int main()
{
    int t;
    cin >> t;
    cout << squareRoot(t);
    return 0;
}