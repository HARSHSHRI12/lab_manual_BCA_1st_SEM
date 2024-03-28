#include <stdio.h>

void findlargest(int a, int b, int c, int *largest) {
    if (a >= b && a >= c) {
        *largest = a;
    } else if (b >= a && b >= c) {
        *largest = b;
    } else {
        *largest = c;
    }
}

int main() {
    int num1, num2, num3, largest;

    printf("Enter the first number: ");
    scanf("%d%d%d", &num1,&num2,&num3);
    findlargest(num1, num2, num3, &largest);
    
    printf("The largest value is %d\n", largest);

    return 0;
}


