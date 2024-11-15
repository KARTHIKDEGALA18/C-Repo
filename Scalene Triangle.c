#include<stdio.h>
int main(void)
{
    int x,y,z;
    scanf("%d%d%d", &x,&y,&z);
    if(x!=y&&y!=z&&z!=x){
        printf("YES");
    }
    else{
        printf("NO");
    }
}