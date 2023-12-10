#include<stdio.h>
int main()
{
    int n;
    printf("enter the number of terms ");
    scanf("%d",&n);
    int i;
    printf("the given ap is:" );
    for(int i=1;i<=2*n-1;i=i+2){
        printf("%d      \n",i);

    }
}