#include<stdio.h>
#include<math.h>

int main () {
 
 printf("%d \n", 4 == 4);  // 1  matlab true

 printf("%d \n", 3 > 3);  // 0

 printf("%d \n", 4 <= 6);  // 1

 printf("%d \n", 4 != 4);  // != : Not equal to operator  

 // Logical Operator && || |

 printf("%d", 4>3 && 5>6); // 0 false

 printf("%d \n", 4>3 || 5>6); // 1 true

 printf("%d", !((4>3) && (5>6)); // 1 true

 // Assignment Operator 
 
 int a = 1;
 int b = 4;
 a = a + b;
 printf("%d \n", a);  // 5

 int a = 1;
 int b = 4;
 a += b;
 printf("%d \n", a);  // 5

 int a = 1;
 int b = 4;
 a *= b;
 printf("%d \n", a);  //  4

 int a = 1;
 int b = 4;
 a -= b;
 printf("%d \n", a); // a = a - b = -3

 return 0;   
}