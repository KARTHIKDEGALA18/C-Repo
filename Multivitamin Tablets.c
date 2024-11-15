#include<stdio.h>
int main(void)
{
    int x,y;
    scanf("%d%d", &x,&y);
    if(y>=3*x)
    {
        printf("YES");
    }
    else{
        printf("NO");
    }
}