#include <stdio.h>

int binarySearch(int arr[], int size, int key)
{
    int left = 0, right = size - 1;
    while (left <= right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == key)
            return mid;
        else if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main()
{
    int arr[] = {3, 10, 13, 15, 19, 19, 20, 27};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key = 20;

    int result = binarySearch(arr, size, key);

    if (result != -1)
        printf("Value %d found at index: %d\n", key, result);
    else
        printf("Value %d not found.\n", key);

    return 0;
}
