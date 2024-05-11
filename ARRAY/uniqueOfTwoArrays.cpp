/**
 *
 *
 * Find the all unique indices among two arrays & create a new array out of them
 *
 * */

#include <iostream>
#include <vector>
using namespace std;

void findAllUniqueItems(std::vector<int> arr, std::vector<int> brr, std::vector<int> ans)
{
    for (int i = 0; i < arr.size(); i++)
    {
        for (int j = 0; j < brr.size(); j++)
        {
            if (arr[i] == brr[j])
            {
                brr[j] = -1;
            }
        }
    }

    for (int i = 0; i < arr.size(); i++)
    {
        ans.push_back(arr[i]);
    }

    for (int i = 0; i < brr.size(); i++)
    {
        if (brr[i] != -1)
        {
            ans.push_back(brr[i]);
        }
    }

    for (auto value : ans)
    {
        cout << value << endl;
    }
}

int main()
{
    vector<int> arr{4, 5, 10, 8, 9};
    vector<int> brr{5, 1, 0, 5, 4, 6};
    vector<int> ans;

    findAllUniqueItems(arr, brr, ans);
}