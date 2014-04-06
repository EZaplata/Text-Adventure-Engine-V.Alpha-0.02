#include <stdio.h>
#include <stdlib.h>
#include <time.h>


int itemgenerator(){
    //Need to find better way of generating random numbers
srand(time(NULL));
int weapontype = rand() % 3;
int sword = 0;
int axe = 0;
int noitem = 0;
int damage = 0;
int atspeed = 0;
int type = 0;
int ice = 0;
int fire = 0;


if(weapontype == 0){
    sword++;
}
else if (weapontype == 1){
    axe++;
}
else if(weapontype == 2){
    noitem++;
}

if(sword == 1){
    type = (rand() % 3);
        if(type == 1){
        printf("Ice ");
         ice = (rand() % 7) + 1;
    }

    if (type == 2){
        printf("Fire ");
        fire = (rand() % 7) + 1;
    }
    printf("sword \n");
    //Chances of damage stat
    damage = (rand() % 7) + 1;
    printf("Damage:%d\n", damage);
    //Chances of speed stat
    atspeed = (rand() % 10) + 1;
    printf("Attack Speed:%d\n", atspeed);
    printf("Ice damage:%d\n", ice);
    printf("Fire damage:%d\n\n", fire);
}

else if(axe == 1){
    type = (rand() % 3);
    if(type == 1){
        printf("Ice ");
         ice = (rand() % 7) + 1;
    }

    if (type == 2){
        printf("Fire ");
        fire = (rand() % 7) + 1;
    }
    printf("axe \n");
    damage = (rand() % 10) + 1;
    printf("Damage:%d\n", damage);
    atspeed = (rand() % 7) + 1;
    printf("Attack Speed:%d\n", atspeed);
    printf("Ice damage:%d\n", ice);
    printf("Fire damage:%d\n\n", fire);
}
else if(noitem == 1){
    printf("Nothing was generated\n\n");
}


gameworld();

}


