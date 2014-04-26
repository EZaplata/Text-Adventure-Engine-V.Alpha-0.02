#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

void weaponready(){
srand(time(NULL));
int weapon = rand() % 1;
int damage = 0, atspeed = 0;
int ice = 0, fire = 0;

  HANDLE h = GetStdHandle ( STD_OUTPUT_HANDLE );
  WORD wOldColorAttrs;
  CONSOLE_SCREEN_BUFFER_INFO csbiInfo;
  GetConsoleScreenBufferInfo(h, &csbiInfo);
  wOldColorAttrs = csbiInfo.wAttributes;

if(weapon == 0){
    printf("You got: \n");
    SetConsoleTextAttribute ( h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    printf("Glory sword\n");
    damage = 14;
    atspeed = 13;
    ice = 12;
    fire = 0;
    SetConsoleTextAttribute ( h, wOldColorAttrs);
    printf("Damage:%d\n", damage);
    printf("Attack Speed:%d\n", atspeed);
    printf("Ice damage:%d\n", ice);
    printf("Fire damage:%d\n\n", fire);
    gameworld();
}
else if (weapon == 1){
    printf("You got: \n");
    SetConsoleTextAttribute ( h, FOREGROUND_GREEN | FOREGROUND_INTENSITY);
    printf("Glory axe\n");
    damage = 13;
    atspeed = 14;
    ice = 0;
    fire = 12;
    SetConsoleTextAttribute ( h, wOldColorAttrs);
    printf("Damage:%d\n", damage);
    printf("Attack Speed:%d\n", atspeed);
    printf("Ice damage:%d\n", ice);
    printf("Fire damage:%d\n\n", fire);
    gameworld();
}

}
