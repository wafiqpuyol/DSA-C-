#include <iostream>
#include <string>
using namespace std;

void compare(string s1, string s2)
{
    if (s1.length() != s2.length())
    {
        cout << "Length didn't matched";
        return;
    }
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] != s2[i])
        {
            cout << "String didn't matched";
            return;
        }
    }
    cout << "String matched";
    return;
}

int main()
{
#define MAX_LEN 100
    char ch1[MAX_LEN] = {"wafiq hossain"};
    char ch2[MAX_LEN] = {"wafiq hossain"};
    compare(ch1, ch2);
    return 0;
}