#include<stdio.h>
int main()
{
    int n;
    printf("enter te value of n");
    scanf("%d",&n);
    int sum=0;
    for(int i=0;i<=n;i++)
    {
        sum = sum+i;
    }
    printf("%d",sum );
    int j;
    printf("\n the reverse of %d is",n);
    for(int i=n;i>=1;i--)
    {
        printf(" %d",i);
    }
}