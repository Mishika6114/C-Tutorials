// Ques- Keep taking numbers as input from user until user enters an odd number. (do while loop)

#include<stdio.h>

int main() {
    int n;
    do{
        printf("enter number : ");
        scanf("%d", &n);
        printf("%d \n", n);

        if(n % 2 != 0) { break; }
    } while(1);    // 1--> always true (infinite loop)

    printf("Error! You entered an odd number.");
    return 0;
}