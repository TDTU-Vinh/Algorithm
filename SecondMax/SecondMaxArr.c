#include <stdio.h>

void secondMaxSearch(int arr[],int size)
{
    int i;
    int j;
    int max;
    int secondMax;
    if(arr[0] > arr [1])
    {
        max = arr[0];
        secondMax = arr[1];
    }else if (arr[i] > secondMax && arr[i] != max) {
            secondMax = arr[i]; // Cập nhật secondMax
    }

    for(i = 2;i < size ; i ++)
    {
        if(arr[i] > max)
        {
            secondMax = max;
            max = arr[i];
        }
    }

    printf("Max: %d\n",max);
    printf("Second Max: %d\n",secondMax);
}

void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void printArray(int arr[], int size)
{
    int i;
    for (i = 0; i < size; i++)
    {
        printf("%d ", arr[i]);
    }

    printf("\n");
}

int main()
{
    int arr[] = {64, 25, 12, 22, 11 ,19 , 100,1000, 57 ,98,2000};
    int size = sizeof(arr) / sizeof(arr[0]);
    printArray(arr, size);
    secondMaxSearch(arr,size);
    return 0;
}