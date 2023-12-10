#include<stdio.h>
int main()
{
    float a=100;
    int n;
    printf("enter the value of n");
    scanf("%d",&n);
    for(float i=1;i<=n;i++)
    {
        printf("%d\n",a);
        a=5*a;
    
    }

}