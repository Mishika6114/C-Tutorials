#include<stdio.h>
#include<math.h>

int main(){
   int number;
   printf("enter number : ");
   scanf("%d", &number);

   if(number >= 0) {
    printf("positive \n");
    if(number % 2 == 0) { // if(number % 2 = 0) is wrong because condition should have true or false answer.
        printf("even \n");
    } else {
        printf("odd \n");
    }
   } else { 
    printf("negative \n");
   }

   return 0;
}