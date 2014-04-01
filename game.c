#include <stdio.h>
#include <string.h>

void game(int option){
FILE *file_ptr;
FILE *file_ptr1;
FILE *file_ptr2;
FILE *file_ptr3;
char pfname[20];
char psname[20];
int statre;
//Points go below 0 (Temporary fix found line:52)
int points = 20;
int str = 1;
int agi = 1;
int hp = 1;
int mp = 1;
int warrior;
int rogue;
int mage;
int tank;
//Do not delete fix the problem with wrong stat points numbers.
int statfix = 1;
int statfix2 = 1;
//Do not delete fix the problem with wrong stat points numbers.
file_ptr = fopen("savestr.txt", "w");
file_ptr1 = fopen("saveagi.txt", "w");
file_ptr2 = fopen("savehp.txt", "w");
file_ptr3 = fopen("savemp.txt", "w");
printf("Choose your first name:\n");
scanf("%s", &pfname);
printf("Choose your second name:\n");
scanf("%s", &psname);
printf("Your name is %s %s\n", pfname, psname);
printf("Your starting stats are:\n strength=1\n agility=1 \n health=1 \n magic=1 \n You have 20 points to add\n");

printf("How many add to strength ? \n");
scanf("%d", &str);
if (str++){
    points = (points + 1) - str;
    printf("You have %d points left\n", points);
    fputc(str, file_ptr);
    fclose(file_ptr);
}

printf("How many add to agility ? \n");
scanf("%d", &agi);
if (agi++){
    points = (points + 1) - agi;
    printf("You have %d points left\n", points);
       fputc(agi, file_ptr1);
    fclose(file_ptr1);
}

printf("How many add to health ? \n");
scanf("%d", &hp);
if (hp++){
    points = (points + 1) - hp;
    printf("You have %d points left\n", points);
          fputc(hp, file_ptr2);
    fclose(file_ptr2);
}

printf("How many add to magic ? \n");
scanf("%d", &mp);
if (mp++){
    points = (points + 1) - mp;
    printf("You have %d points left\n", points);
             fputc(mp, file_ptr3);
    fclose(file_ptr3);

}
if(points != 0){
    printf("You have spended to less/much points please add them again\n");

    action( 1 );
}
else{
printf("Your stats are:\n strength=%d \n agility=%d \n health=%d \n magic=%d \n Do you wish to change them? 1.Yes/2.No\n",str ,agi, hp, mp);
scanf("%d", &statre);
}
if(str > agi && str > mp){
    printf("This stats suit a warrior character\n");
    warrior++;
}
if (mp > str && mp > hp){
    printf("This stats suit a mage character\n");
    mage++;
    }
if(agi > str && agi > mp){
    printf("This stats suit a rogue character\n");
    rogue++;
}
if(hp >= str && hp >= agi && hp >= mp){
    printf("This stats suit a tank character\n");
    tank++;
}
else if(warrior == 0 && mage == 0 && rogue == 0 && tank == 0){
    printf("This is a mix character\n");
}

if (statre == 1){
    action( 1 );
}
else{
    gameworld();
    fclose(file_ptr);
}

}
