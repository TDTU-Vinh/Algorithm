#include <stdio.h>

int linearSearch(int arr[], int size, int target)
{
    int i;
    for(i = 0; i < size ; i ++)
    {
        if(arr[i] == target)
        {
            return i;
        }
    }
    return -1;

}

int main()
{
    int arr[] = {5, 1, 8, 56, 7, 11};
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 7;

    int result = linearSearch(arr,size,target);
    if(result != -1)
    {
        printf("Vi tri cua muc tieu can tim la %d\n",result);
    }else{
        printf("Muc tieu tim kiem khong co trong mang\n");
    }
    return 0;
}