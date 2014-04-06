#include <stdio.h>

void gameworld(){
int test;
printf("Test fight:Type in 1 to fight\nItem generator:Type in 2 to generate\n");
scanf("%d", &test);
if(test == 1){
    intelligence();
}
else if(test == 2){
    itemgenerator();
}


}
