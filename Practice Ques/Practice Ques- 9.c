//Ques- Write a program tp check if a student passed or failed. marks > 30 is PASS & marks <= 30 is FAIL.

#include<stdio.h>

int main(){
    int marks;
    printf("enter marks(0-100) : ");
    scanf("%d", &marks);

    if( marks >= 0 && marks <= 30) {
        printf("fail \n");
    } else if(marks > 30 && marks <= 100) {
        printf("PASS \n");
    } else {
        printf("Wrong marks");
    }
    return 0;
}

/*
#include<stdio.h>

int main(){
    int marks;
    printf("enter marks(0-100) : ");
    scanf("%d", &marks);

    marks <= 30 ? printf("FAIL \n") : printf("PASS \n");

    return 0;
}
*/