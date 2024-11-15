#include<stdio.h>
int gcd(int a,int b){
while(b!=0){
    int c=b;
    b=a%b;
    a=c;
    } 
    return a;
}
int main(void){
    int N,M,d;
    scanf("%d%d", &N,&M);
    d =gcd(N,M);
    printf("%d", d);
}