#include <stdio.h>
void main()
{
    int a,b,big;
    printf("enter the numbers");
    scanf("%d%d",&a,&b);
    big=a>b?a:b;
    printf("enter the gratest number=%d",big);
}