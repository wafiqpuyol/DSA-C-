#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr{64, 25, 12, 22, 11};
    int s = arr.size() - 1;

    for (int i = 0; i < s; i++)
    {
        int min = i;
        cout << "Prev" << min << endl;
        for (int j = i + 1; j <= s; j++)
        {
            if (arr[min] > arr[j])
            {
                cout << "J value -> " << arr[j] << endl;
                min = j;
            }
        }
        cout << "now" << arr[min] << "-" << arr[i] << "," << endl;
        swap(arr[i], arr[min]);
        cout << "\\" << arr[i] << endl;
    }

    for (int i = 0; i <= s; i++)
    {

        cout << arr[i] << ",";
    }
    return 0;
}