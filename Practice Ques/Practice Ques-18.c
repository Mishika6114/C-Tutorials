// Keep taking numbers as input from user until user enetrs a number which is multiple of 7.

#include<stdio.h>

int main() {
    int n;
    do{
        printf("enter number : ");
        scanf("%d", &n);
        printf("%d \n", n);

        if(n % 7 == 0) { break; }  // n is a multiple of 7
    } while(1);  

    printf("Error! You entered an odd number.");
    return 0;
}