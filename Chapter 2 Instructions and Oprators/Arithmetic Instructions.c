#include<stdio.h>
#include<math.h>

int main () {
 int a = 1, b = 2; // Type Declaration Instruction
 int sum = a + b; // Arithmetic Instruction

 int power = pow(a,b);
 printf("%d", power);

 printf("%d \n", 2 * 2);

 printf("%f \n", 2.0 * 2);

 printf("%d \n", 2/3);  // 0 because integer value aayega

 printf("%f \n", 2.0/3); // 0.666667

 printf("%d \n", 3/2); // 1

 printf("%f \n", 3.0/2); // 1.500000

 return 0;   
}
