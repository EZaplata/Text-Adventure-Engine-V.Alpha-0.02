#include <stdio.h>
#include "stats.h"


void gameworld(){
int test;
printf("Test fight:Type in 1 to fight\nItem generator:Type in 2 to generate\nCheck stats 3\n");
scanf("%d", &test);
if(test == 1){
    intelligence();
}
else if(test == 2){
    itemgenerator();
}
else if(test == 3){
    printf("Level:\n%d\nStats:\n strength=%d \n agility=%d \n defense=%d \n health=%d \n magic=%d \n\n",lvl, str ,agi ,def ,hp, mp);
    printf("Current experience:%d\nNeeded to level up:%d\n\n", exp, rexp);
    gameworld();
}
if(lvl > plvl){
        player();
    }


}
