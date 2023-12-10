// Q- Print the factorial of a number n.

#include<stdio.h>

int main() {

    int n;
    printf("enter a number: ");
    scanf("%d", &n);

    int product=1;
    for (int i=1; i<=n; i++) {
        product = product * i;
    }
    printf("factorial is %d \n", product);
    return 0;

}