// Ques- Calculate the sum of all numbers between 5 and 50. (uncluding 5 & 50)

#include<stdio.h>

int main() {
    int sum = 0;
    for( int i=5; i<=50; i++) {
        sum = sum + i;
    }
    printf("sum is : %d", sum);
    return 0;
}