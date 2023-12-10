#include<stdio.h> 
void main()
{
    int a,b,c;
    printf("enter two numbers");
    scanf("%d%d,&a,&b");
    c=a+b;
    printf("sum=%d",c);
    c=a-b;
    printf("sub=%d",c);
    c=a*b;
    printf("product=%d",c);
}