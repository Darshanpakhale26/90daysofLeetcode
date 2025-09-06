// Sort the characters of a given array of size 125 in ascending order.


#include <iostream>
#include <algorithm>
using namespace std;
void sortCharArr(char arr[], int size)
{
    sort(arr, arr + size);
}
int main()
{
    char arr[125] = "The quick brown fox jumps over the lazy dog. This is a sample character array to demonstrate sorting.";
    int size = 0;
    while (arr[size] != '\0')
        size++;
    sortCharArr(arr, size);
    cout << "Sorted character array: " << arr << endl;
    return 0;
}