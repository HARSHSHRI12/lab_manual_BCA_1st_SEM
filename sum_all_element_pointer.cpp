#include <stdio.h>

int findSum(int *arr, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += *(arr + i);  // Accessing array elements using pointers
    }
    return sum;
}

int main() {
    int size;

    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }

    int sum = findSum(arr, size);

    printf("The sum of all elements in the array is: %d\n", sum);

    return 0;
}
