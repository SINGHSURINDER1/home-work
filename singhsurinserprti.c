#include<stdio.h>
int main()
{
    float principle,rate,time,simpelintrest;
    printf("enter the value of principle:\n");
    scanf("%f",&principle);
    printf("enter the value of time:\n");
    scanf("%f",&time);
    printf("enter the value of rate:\n");
    scanf("%f",&rate);
    simpelintrest=(principle*rate*time)/100;
    printf("the simple intrest is :%f",simpelintrest);
    return 0;
}
