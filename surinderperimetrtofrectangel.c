#include<stdio.h>
int main()
{
    float length;
    printf("enter the the value of length\n");
    scanf("%f",&length);
    printf("enter the value of breadth\n");
    float breadth;
    scanf("%f",&breadth);
     float perimeter =(length+breadth)*2;
    printf("the area of rectangle is %f",perimeter);

}