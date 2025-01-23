#include <stdio.h>

void swap(int *a,int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

void reverseArr(int arr[],int size)
{
    int i = 0;
    int j = size - 1;
    while(i < j)
    {
        swap(&arr[i],&arr[j]);
        i++;
        j--;
    }

}

void printArr(int arr[],int size)
{
    int i; 
    for(i = 0; i < size ; i ++)
    {
        printf("%d ",arr[i]);
    }
    printf("\n");
}

int main()
{
    int arr[] = {1, 2, 3, 4, 5,6,7,8,9,10};
    int size = sizeof(arr) / sizeof(arr[0]);
    printArr(arr,size);
    reverseArr(arr,size);
    printArr(arr,size);
    return 0;
}