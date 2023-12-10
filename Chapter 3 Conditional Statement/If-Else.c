// a. Write a program to print the average of 3 numbers.

#include<stdio.h>
#include<math.h>

int.main () {
    int age;
    printf("enter age : ");
    scanf("%d", &age);
    
    if(age > 18) {
        printf("adult \n");
        printf("they can vote \n");
        printf("they can drive \n");
    }
    else{ 
        printf("not adult \n");
    }
    printf("thank you");

    return 0;
}

/*
#include<stdio.h>
#include<math.h>

int.main () {
    int age;
    printf("enter age : ");
    scanf("%d \n", &age);
    
    if(age > 18) 
        printf("adult \n");
        
    else
        printf("not adult \n");
    
    printf("thank you");

    return 0;
}
*/