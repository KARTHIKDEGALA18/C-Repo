#include<stdio.h>
int main(void)
{
    int time_alice,time_bob,time_charlie;
    float speed_alice,speed_bob,speed_charlie;
    scanf("%d%d%d", &time_alice,&time_bob,&time_charlie);
    speed_alice=(400.0/time_alice);
    speed_bob=(400.0/time_bob);
    speed_charlie=(400.0/time_charlie);
    if(speed_alice>speed_bob && speed_alice>speed_charlie){
        printf("ALICE");
    }
    else if(speed_bob>speed_alice && speed_bob>speed_charlie){
        printf("BOB");
    }
    else{
        printf("CHARLIE");
    }
}