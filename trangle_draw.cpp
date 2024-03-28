/*#include<stdio.h>
int main(){
    int year;
    printf("ENTER year :");
    scanf("%d",&year);
    if(year%400==0 && year%100!=0 && year%4==0){
        printf("IT is leap year ");
    }
    else{
        printf("IT is not leap year");
    }
    return 0;
}*/

#include<stdio.h>
int main(){
    int a ;
    printf("Enter a number :");
    scanf("%d",&a);
    for(int i=1;i<=a;i++){
        for(int j=1;j<=a-i;j++){
            printf("  ");
        }
        for(int j=1;j<=i;j++){
        printf("*");
    }
     printf("\n");
    }
    return 0;
}

/*#include <stdio.h>
int main() {
    int i, j, rows;
    printf("Enter the number of rows for the triangle: ");
    scanf("%d", &rows);
    for (i = 1; i <= rows; i++) {
        for (j = 1; j <= rows - i; j++) {
            printf(" ");
        }
        for (j = 1; j <= i; j++) {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}*/
