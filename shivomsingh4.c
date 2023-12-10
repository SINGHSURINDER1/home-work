#include<stdio.h>
int main()
{
    int a;
    printf("enter a: ");
    scanf("%d",&a);
    if(a % 2 == 0){
        printf("the given number is given EVEN");
    }
    else{
        printf("the given number is ODD");
    }
    return 0;
}