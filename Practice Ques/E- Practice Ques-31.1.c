#include<stdio.h>
#include<math.h>


float circleArea(float radius);

int main(){
    float r = 7;
    printf("area of circle is : %f", circleArea(r));     // 153.860001

    return 0;
}

float circleArea(float radius){
    return 3.14 * radius * radius;
}

/*
float circleArea(float radius);

int main(){
    float r = 7.0;
    printf("area of circle is : %f", circleArea(r));     // 153.860001

    return 0;
}

float circleArea(float radius){
    return 3.14 * pow(radius, 2);
}
*/

// float circleArea(float radius);

// int main(){
//     float r = 7;
//     printf("area of circle is : %f", circleArea(r));     // 153.860001

//     return 0;
// }

// float circleArea(float radius){
//     return 3.14 * pow(radius, 2);
// }

/*
float circleArea(float radius);

int main(){
    int r = 7;
    printf("area of circle is : %f", circleArea(r));     // 153.860001

    return 0;
}

float circleArea(float radius){
    return 3.14 * pow(radius, 2);
}
*/

// float circleArea(int radius);

// int main(){
//     int r = 7;
//     printf("area of circle is : %f", circleArea(r));     // 153.860001

//     return 0;
// }

// float circleArea(int radius){
//     return 3.14 * pow(radius, 2);
// }

/*int circleArea(int radius);

int main(){
    int r = 7;
    printf("area of circle is : %f", circleArea(r));     // 0.000000 : because float circleArea is not defined by us only!

    return 0;
}

int circleArea(int radius){
    return 3.14 * pow(radius, 2);
}
*/

/*
int circleArea(int radius);

int main(){
    int r = 7;
    printf("area of circle is : %d", circleArea(r));     // 153

    return 0;
}

int circleArea(int radius){
    return 3.14 * pow(radius, 2);
}
*/