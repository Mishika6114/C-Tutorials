#include<stdio.h>

int main() {
    int age;
    printf("enter age");
    scanf("%d",&age);
    printf("age is: %d", age)
    return 0;
}

// &age : address age

/*NOTE
jab variable ko already assign kar diya ho (jaise side='2';) toh aise likhenge >>> printf("....%d", side)
jab variable ko  assign nahi ho (jaise side;) aur fir user se input liya ho (jaise scanf("%d", &side)) toh aise likhenge >>> printf("")
*/