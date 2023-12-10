#include<stdio.h>
#include<math.h>

int main () {
    int marks;
    printf("enter marks : ");
    scanf("%d", &marks);       // scanf("%d \n", &marks); is WRONG

    if(marks > 90) {
        printf("A \n");
    }
    else if(marks > 80) {
        printf("B \n");
    }
    else if(marks > 70) {
        printf("C \n");
    }
    else if(marks > 60) {
        printf("D \n");
    }
    else if(marks > 50) {
        printf("E \n");
    }
    else {
        printf("FAIL \n");
    }
    
    return 0;
}