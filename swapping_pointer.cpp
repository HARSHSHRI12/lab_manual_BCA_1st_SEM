#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int num1, num2;

    printf("Enter the value of num1: ");
    scanf("%d", &num1);

    printf("Enter the value of num2: ");
    scanf("%d", &num2);

    printf("Before swapping: num1 = %d, num2 = %d\n", num1, num2);

    // Call the swap function to swap values using pointers
    swap(&num1, &num2);

    printf("After swapping: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
