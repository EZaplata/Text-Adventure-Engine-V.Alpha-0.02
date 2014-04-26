#include <stdio.h>

int str = 1, agi = 1, def = 1, hp = 1, mp = 1;
int lvl = 1, plvl = 0;
int exp = 0, rexp = 10;
int statpoint;
int stat;
char pfname[20];
char psname[20];


//Checks if player has leveled up
int player(){
if(exp >= rexp){
    lvl++;
    plvl = lvl;
    if(lvl <= 10){
    rexp += 10;
    }
    else if(lvl <= 10){
        rexp += 100;
    }
    statpoint += 3;
}
lvlup();
    return str++;
    return agi++;
    return def++;
    return hp++;
    return mp++;
    return lvl++;
    return plvl++;
    return exp++;
    return rexp++;
    return pfname[20];
    return psname[20];

}

//Leveling system
int lvlup(){
if(lvl == plvl && statpoint != 0){
    printf("You have level up!\n You got %d points to add\n", statpoint);
    printf("What do you want to add points to ?\n");
    printf("1.strength=%d \n2.agility=%d \n3.defense=%d \n4.health=%d \n5.magic=%d\n",str ,agi ,def ,hp, mp);
    scanf("%d", &stat);
    if(stat == 1){
        statpoint--;
        str++;
    }
    if(stat == 2){
        statpoint--;
        agi++;
    }
    if(stat == 3){
        statpoint--;
        def++;
    }
    if(stat == 4){
        statpoint--;
        hp++;
    }
    if(stat == 5){
        statpoint--;
        mp++;
    }
    lvlup();
}

else{
    itemgenerator();
}

}



