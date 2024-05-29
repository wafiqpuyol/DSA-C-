#include <iostream>
using namespace std;

string toUpperCase(string str)
{
    int len = str.length();
    for (int i = 0; i <= len; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            str[i] = char(str[i] - 32);
        }
    }
    return str;
}

int main()
{
    string s = "wafIq";
    cout << toUpperCase(s);
    return 0;
}