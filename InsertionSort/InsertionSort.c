#include <stdio.h>

void insertionSort(int arr[], int size) {
    for (int i = 1; i < size; i++) {
        int key = arr[i]; // Phần tử cần chèn
        int j = i - 1;

        // Dịch chuyển các phần tử lớn hơn key
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        // Chèn key vào đúng vị trí
        arr[j + 1] = key;

        // In trạng thái mảng sau mỗi lần chèn
        printf("Mảng sau lần chèn %d: ", i);
        for (int k = 0; k < size; k++) {
            printf("%d ", arr[k]);
        }
        printf("\n");
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("Mảng ban đầu: ");
    printArray(arr, size);

    insertionSort(arr, size);

    printf("Mảng sau khi sắp xếp: ");
    printArray(arr, size);

    return 0;
}
