#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "stats.h"

int intelligence(){
srand(time(NULL));
int poption;
int moption;
int phits, mhits;
int pdam, mdam;
int escape = 0;
if(hp <= 0){
    mhp = 30;
    printf("You lost\n");
    gameworld();
}
if(mhp <= 0){
    printf("You won\n");
    mhp = 30;
    exp += 1;
    player();
}
printf("Chose your action:\n 1.Attack 2.Magic attack\n");
scanf("%d", &poption);
//How many hits
phits = agi / 3;
//Damage done by normal attack
if (poption == 1){
    (phits == 1)?
    printf("You have hit once\n"):printf("You have hit %d times\n", phits);
    //Damage amount
    pdam = str * phits;
    mhp -= (pdam - mdef);
    printf("Monsters health is:%d\n", mhp);
}
else if (poption == 2){
    //Damage done by magic attack
    mhp -= (mp - mmp);
}
if(mhp <= 0){
    printf("You won\n");
    exp += 1;
    mhp = 30;
    player();
}
    if (mhp > 0){
        moption = rand() % 2;
        if (moption == 0 || moption == 1){
            hp = hp - (mstr - def);
            printf("Your current health is: %d\n", hp);
            escape++;
            intelligence();
        }
        if (moption == 2 && escape == 0 ){
            printf("Monster has escaped\n");
            gameworld();
        }
    }



}

