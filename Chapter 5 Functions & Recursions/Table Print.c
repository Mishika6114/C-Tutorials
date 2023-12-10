// Ques- Write a program to print the table of a number n.(use functions)

#include<stdio.h>

void printTable(int b);

int main() {
    int n;
    printf("enter number : ");
    scanf("%d", &n);
    
    printTable(n); // n: argument/ actual parameter

    return 0;
}

void printTable(int b) {  // b: parameter/ formal parameter
    for(int i=1; i<=10; i++) {
        printf("%d \n", i*b);
    }
}

