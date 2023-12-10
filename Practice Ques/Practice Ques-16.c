// Ques- Print the table of a number input by the user.

/* Solution 1 
#include<stdio.h>

int main(){
    int n;
    printf("enter number : ");
    scanf("%d", &n);

    int sum = 0;
     for(int j=n; sum <= n*9; j=j) {  // agar sum less than n*9 hai toh sum main n add hoga aur n*9+n = n*10 print hoga.  
         sum = sum + j; // sum += j
         printf("%d \n", sum);
     }

    return 0;
}
 */

#include<stdio.h>

int main(){
    int n;
    printf("enter number : ");
    scanf("%d", &n);

    int sum = 0;
     for(int i=1; i<=10; i++) { 
         printf("%d \n", n*i);
     }

    return 0;
}