#include <stdio.h>

void swap(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
/*
    truyền arr[] => khi truyền 1 mảng vào một hàm, thực chất đang truyền phần tử đầu tiên của mảng vào trong hàm => điều này như là truyền theo kiểu pass by reference mặc dù có vẻ như pass by value Ư
*/
void bubbleSort(int arr[], int size)
{
    int i;
    int j;
    for (i = 0; i < size; i++)
    {
        for (j = 0; j < size - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
            }
        }
    }
}

void printArr(int arr[], int size)
{
    int i = 0;
    printf("[");
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("]\n");
}

int main()
{
    int arr[] = {64, 34, 25, 12, 22, 11, 90}; // Mảng đầu vào
    int size = sizeof(arr) / sizeof(arr[0]);
    printArr(arr, size);
    bubbleSort(arr, size);
    printArr(arr, size);
    return 0;
}