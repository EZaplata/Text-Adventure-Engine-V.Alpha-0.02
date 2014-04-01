#include <stdio.h>
#include <conio.h>


void menu();

int main(){
    menu();
    return 0;
}

void menu(){
    int option;
printf("\t1.Start\n");
printf("\t2.Options\n");
printf("\t3.Exit\n");
printf("\n\n\t\t\t\t\t\t\t Version:Alpha 0.02\n");
printf("Developed by Eryk Zaplata\n");
scanf("%d", &option);
action ( option );


}
