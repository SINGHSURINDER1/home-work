#include<stdio.h>
int min()
{
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    for(int i=n;i<=n*20;i++)
    {
        printf("the table of %d is",i);
    }
    return 0;
}