#include <iostream>
using namespace std;

int binarysearch(int arr[], int size, int element)
{
    int low, mid, high;
    low = 0;
    high = size - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[mid] == element)
        {
            return mid;
        }
        if (arr[mid] == element)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
}

int main(int argc, char const *argv[])
{
    int arr[] = {1, 3, 5, 56, 67, 123, 231};
    int size = sizeof(arr) / sizeof(int);
    int element;
    cout << "Enter the element to be searched: " << endl;
    cin >> element;
    int searchIndex = binarysearch(arr, size, element);
    cout << "The element " << element << " was found at index " << searchIndex << endl;
    return 0;
}
 