#include<stdio.h>

void namaste();
void bonjour();

int main() {
    char ch;
    printf("enter f for french & i for indian : ");
    scanf("%c", &ch);

    if(ch=='i') {
        namaste();
    } else {
        bonjour();
    }
}

void namaste() {
    printf("Namaste \n");
}

void bonjour() {
    printf("Bonjour \n");
}