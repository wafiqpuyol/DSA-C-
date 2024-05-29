#include <iostream>
using namespace std;

string removeEqualAdjacentApproach1(string s)
{
    /**
     * In this approach, we wont use any extra space.
     * We'll match current item w/ the previous item, if matches then remove both.
     * Hence, the string has been changed. We'll decrease "i" by 2. Becoz , after deletion of two adjacent item, the afterward item;'s index of adjacent pair's 2nd occurrence has been moved to adjacent pair's 1st occurrence's index.
     * We'll also update the length based on the current string length.
     *
     */
    int len = s.length() - 1;
    for (int i = 0; i <= len; i++)
    {
        if (i > 0 && s[i] == s[i - 1])
        {
            s.erase(i - 1, 2);
            len = s.length() - 1;
            i = i - 2;
        }
    }
    return s;
}

string removeEqualAdjacentApproach2(string s)
{
    int len = s.length() - 1;
    string ans = "";
    for (int i = 0; i <= len; i++)
    {
        if (ans.length() > 0 && ans[ans.length() - 1] == s[i])
        {
            ans.pop_back();
        }
        else
        {
            ans.push_back(s[i]);
        }
    }
    return ans;
}

int main()
{
    string s = "ocvvcolop";
    cout << "ANS -> " << removeEqualAdjacentApproach1(s);
    cout << "ANS -> " << removeEqualAdjacentApproach2(s);
    return 0;
}