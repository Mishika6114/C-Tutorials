// Ques- Use libraryy functions to calculate the square of a number given by user. 

#include<stdio.h>
#include<math.h>

int main(){
    int n;
    printf("enter number : ");
    scanf("%d", &n);
    printf("%d", pow(n,2)); 

    return 0;
}

// power function returns a double value 
// also power function takes two double values
// integer can convert into double but double cant convert to integer
// numbers are converted into base 2 (binary) and then converted back
// certain numbers cant be converted exactly in base 2 in float so we have to use double (like 1111.1111)