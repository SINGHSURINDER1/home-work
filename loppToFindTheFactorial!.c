#include<stdio.h>
int main()
{
    int i;
    int n;
    printf("enter the number");
    scanf("%d",&n);
    int sum=1;
    for(i=1;i<=n;i++){
        sum=sum*i;
    }
    printf("value of factorial is  %d",sum);
}