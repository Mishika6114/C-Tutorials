#include<stdio.h>

int main () {
//for loop // i is iterator, counter
for(int i=1; i<=100; i++) {   // i=i+1, i+=1, i++
printf("%d\n", i);
}

for(float i=1.0; i<=5.0; i++) {
    printf("%f \n, i");
}
for(char ch='a'; ch<='z'; ch++) {
    printf("%c \n", ch);
}
return 0;
}