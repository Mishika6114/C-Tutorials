// Ques- Print reverse of the table for a number n.

#include<stdio.h>

int main() {
    int n;
    printf("enter number : ");
    scanf("%d", &n);

    int product;
    for(int i=10; i>=1; i-- ) {
        printf("%d \n", n*i);
        // product = i*n;
        // printf("%d \n", product);
    }
    return 0;
}