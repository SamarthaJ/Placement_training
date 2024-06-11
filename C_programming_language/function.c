#include<stdio.h>
//area of square, triangle, and circle
int squarearea(int side);
int trianglearea(int base, int height);
int circlearea(int radius);
int squarearea(int side){
    return side*side;
}
int trianglearea(int base, int height){
    return 0.5*base*height;
}
int circlearea(int radius){
    return 3.14*radius*radius;
}
int main(){
    printf("The area of square is: %d", squarearea(5));
    printf("\nThe area of triangle is: %d", trianglearea(5,5));
    printf("\nThe area of circle is: %d", circlearea(5));
    return 0;
}