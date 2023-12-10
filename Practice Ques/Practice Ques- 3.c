// Solve: int a = 1.999999;

#include<stdio.h>
#include<math.h>

int main () {
 int a = 1.999999;
 return 0;   
}

int main () {
 int a = (int) 1.999999; // 1, decimal round off nahi kara uda hi deta hai
 printf("%d \n", a)
 return 0;   
}