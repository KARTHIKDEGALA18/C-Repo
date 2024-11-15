#include<stdio.h>
int main(void)
{
    int x,y,z;
    scanf("%d%d%d", &x,&y,&z);
    if(x+y==z||y+z==x||x+z==y){
        printf("YES");
    }
    else{
        printf("NO");
    }
}