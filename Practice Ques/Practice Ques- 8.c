/* Ques- Print 1(true) or 0(false) for the following statements:
a. if it's sunday & it's snowing -> true
b. if it's monday or it's raining -> true
c. if a number is greater than 9 or lessthan 100 -> true
(2 digit number)
*/

#include<stdio.h>
#include<math.h>

int.main () {
    int isSunday = 1;
    int is Snowing = 1;
    printf("%d \n", isSunday && isSnowing); // 1 (true)

    int isMonday = 0;
    int isRaining = 1; 
    printf("%d \n", isMonday || isRaining); // 1 (true)

    int x;
    printf("enter number : ")
    scanf("%d \n", &x);
    printf("%d \n", x>9 && x<100);

    return 0;
}