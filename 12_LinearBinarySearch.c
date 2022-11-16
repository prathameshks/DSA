#include <stdio.h>

int linearSearch(int arr[], int size, int elmt)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == elmt)
        {
            return i;
        }
    }
    return -1;
}

int binarySearch(int arr[], int size, int elmt)
{
    int low, mid, high;
    low = 0;
    high = size - 1;
    while (low <= high) //<= is necessary because for case 1 in {1,2,3} 
    {
        mid = (low + high) / 2;
        if (arr[mid] == elmt)
        {
            return mid;
        }
        else if (arr[mid] < elmt)
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 3,4};
    // int arr[] = {1, 4, 5, 8, 9, 12, 14, 18, 20, 34, 39, 41, 52, 67, 78, 84, 90, 100};
    int size = sizeof(arr) / sizeof(int);
    printf("%d", binarySearch(arr, size, 1));
    return 0;
}