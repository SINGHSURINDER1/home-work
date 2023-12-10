#include<stdio.h>
int main()
{
    int x=4,y=0,z;
    {
        if(x==y)
       break;  
        else
        {
            printf("\n%d%d",x,y);
            x--;
            y++;
        }
    }
}