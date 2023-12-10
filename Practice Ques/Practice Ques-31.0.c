// Ques- Write functions to calculate area of a square, a circle & a rectangle.

#include<stdio.h>
#include<math.h>

int squareArea(int side);
int circleArea(int radius);
int rectangleArea(int a, int b);

int main(){
    int a = 5;
    int b = 10;
    int r = 7:

    //printf("area of rectangle is : %d", rectangleArea(a,b));
    printf("area of circle is : %d", circleArea(r));     // 153

    return 0;
}

int squareArea(int side) {
    return side*side;
}

int circleArea(int radius){
    return 3.14 * pow(radius, 2);
}

int rectangleArea(int a, int b){
    return a * b;
}