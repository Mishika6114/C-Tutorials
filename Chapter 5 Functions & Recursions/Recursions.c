#include<stdio.h>

void printHW(int count);

int main(){

    printHW(5);
    return 0; // 0  is returned
}

// Recursive function
void printHW(int count) {
    if(count == 0) {
        return;  // return; that's why it is a void function
    }
    printf("Hello World \n");
    printHW(count-1);
}

/* //WRONG (infinite recursion)
void printHW(int count) {
    printf("Hello World \n");
    printHW(count-1);
    if(count == 0) {
        return; 
    }
}
