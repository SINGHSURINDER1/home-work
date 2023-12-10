#include<stdio.h>
int main()
{
    int n;
    printf("enter the number ");
    scanf("%d",&n);
    int sum;
    int ld;
    int digit=0;
    while(n!=0)
    {
        ld=n%10;
        sum=ld+n;
          n =n/10;
        digit++;

    }
    printf("%d",sum);
}