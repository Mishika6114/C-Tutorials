#include<stdio.h>

int main(){
   for( int i=1, i<=5; i++) {
    if(i==3) break;           // if(i==3) { break; }
    printf("%d \n", i);
   }
   printf("end");
    return 0;
}

/*
#include<stdio.h>

int main(){
    int i, age;

   for( i=1, i<=10; i++) {
    printf("%d Enter your age : ", i);
    scanf("%d", &age);

    if(age>=10) { break; }          // if(i==3) { break; }
   }
    return 0;
}
*/
