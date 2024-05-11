/**
 * Linear Search
 * 
 * 
**/

#include <iostream>
#include <limits.h>
using namespace std;

int findLargestEl(int *arr, int size, int maxVal) {
    for(int i=0; i<=size; i++) {
        if(arr[i] > maxVal) {
            maxVal = arr[i];
        }
    }

    return maxVal;
}

int main() {
    int arr[] = { 2, 45, 25, 69, 105, 37};
    int maxVal , max= INT_MIN;
    int size = 6;

    // cout << "Largest value is " <<  findLargestEl(arr, size, maxVal) << endl;
    cout<<  max  << endl;
    cout<<  maxVal<< endl;

}