#include<stdio.h>
int main()
{
    int n;
    printf("enter the number that you want to find that it is primre or not :\n");
    scanf("%d",&n);
    int a=0;
    for(int i=2;i<=n-1;i++)
    {
        if(n%i==0)
        a=1;
        break;
    }
    if(n==1)
    printf("the given number is neither prime nor composite");
       else if(a==0)
       {
        printf("the given umber is prime");
       }
        else
            printf("the given umber is composite");        
    return 0;
}