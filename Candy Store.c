#include<stdio.h>
int main(void)
{
    int x,y;
    scanf("%d%d", &x,&y);
     if(x>=y)
     {
        printf("%d", y);
     }
     else if(x<y){
        printf("%d",(1*x)+(2*(y-x)));
     }
}