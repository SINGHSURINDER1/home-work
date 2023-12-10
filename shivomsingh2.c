#include<stdio.h>
int main()
{
    char ch = 'A';
    if ( ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U') {
        printf("the character %c is a vowel.\n", ch);
    }
    else{
        printf("the character %c is a cnstant. \n", ch);
    }
    return 0;
}