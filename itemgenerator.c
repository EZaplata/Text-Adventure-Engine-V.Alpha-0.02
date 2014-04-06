#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

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
  HANDLE h = GetStdHandle ( STD_OUTPUT_HANDLE );
  WORD wOldColorAttrs;
  CONSOLE_SCREEN_BUFFER_INFO csbiInfo;
  GetConsoleScreenBufferInfo(h, &csbiInfo);
  wOldColorAttrs = csbiInfo.wAttributes;

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
        SetConsoleTextAttribute ( h, FOREGROUND_BLUE | FOREGROUND_INTENSITY );
        printf("Ice ");
         ice = (rand() % 7) + 1;
    }
    if (type == 2){

  SetConsoleTextAttribute ( h, FOREGROUND_RED | FOREGROUND_INTENSITY );
        printf("Fire ");
        fire = (rand() % 7) + 1;
    }
    printf("sword \n");
    SetConsoleTextAttribute ( h, wOldColorAttrs);
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
        SetConsoleTextAttribute ( h, FOREGROUND_BLUE | FOREGROUND_INTENSITY );
        printf("Ice ");
         ice = (rand() % 7) + 1;
    }

    if (type == 2){
        SetConsoleTextAttribute ( h, FOREGROUND_RED | FOREGROUND_INTENSITY );
        printf("Fire ");
        fire = (rand() % 7) + 1;
    }
    printf("axe \n");
    SetConsoleTextAttribute ( h, wOldColorAttrs);
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

