#include<stdio.h>
#include<ctype.h>
int main(void)
{
    char x;
    scanf("%c", &x);
     if(islower(x))
     {
        x=toupper(x);
     }
     else if (isupper(x))
    {
        x=tolower(x);
     }
     printf("%c", x);
}