#include <stdio.h>

int BinarySearch(int arr[], int target, int left, int right)
{
    while (right >= left)
    {
        int mid = (left + right) / 2;
        if (arr[mid] == target)
        {
            return mid;
        }
        else if (target > arr[mid])
        {
            left = mid + 1;
        }
        else
        {
            right = mid - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {1, 3, 5, 7, 9, 11, 13, 15};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = BinarySearch(arr, 13, 0, size - 1);
    if (result != -1)
    {
        printf("Vi tri cua muc tieu can tim la %d\n", result);
    }
    else
    {
        printf("Muc tieu tim kiem khong co trong mang\n");
    }
    return 0;
}