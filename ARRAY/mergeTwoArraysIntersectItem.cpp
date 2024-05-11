/**
 *
 *
 * Find the common indices among two arrays / intersect two array & create a new array out of them
 *
 * */

#include <iostream>
#include <vector>
using namespace std;

void findCommonItems(std::vector<int> arr, std::vector<int> brr, std::vector<int> ans)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < brr.size(); j++)
        {
            if (arr[i] == brr[j])
            {
                brr[j] = -1;
                ans.push_back(arr[i]);
            }
        }
    }

    for (auto value : ans)
    {
        cout << value << endl;
    }
}

int main()
{
    vector<int> arr{4, 5, 4, 8, 9};
    vector<int> brr{5, 1, 0, 4, 4, 6};
    vector<int> ans;

    findCommonItems(arr, brr, ans);
}