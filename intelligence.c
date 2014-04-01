#include <stdio.h>

void intelligence(void){
//Test intelligence str,agi,hp,mp
FILE *file_ptr;
int monster[4] = {10, 10, 10, 10};
int poption;
int str[1];
int agi[1];
int hp[1];
int mp[1];
//Can't bring the variable from game.c
file_ptr = fopen("savestr.txt", "r");
fgets(str,1,file_ptr);
printf("Chose your action:\n 1.Attack 2.Defend");
scanf("%d", &poption);
if(poption == 1){
monster[2] = monster[2] - str[1];
}
if(monster[2] <= str){
printf("You won\n");
gameworld();
}
}
