// Qs- Write a program to calculate area of a square?

/* solution 1:

#include<stdio.h>

int main () {
 int side;
 printf("enter side");
 scanf("%d", &side);

 printf("area of square is: %d", side * side);
 return 0;
}

*/

// Solution 2:

#include<stdio.h>

int main () {
 float side;
 printf("enter side");
 scanf("%f", &side);

 printf("area of square is: %f", side * side);
 return 0;   
}