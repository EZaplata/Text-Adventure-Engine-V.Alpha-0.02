#include <stdio.h>


void menu();

int main(){
    menu();
    return 0;
}

void menu(){
    int option;
printf("\t1.Start\n");
printf("\t2.Options\n");
printf("\t3.Multiplayer\n");
printf("\t4.Credits\n");
printf("\t5.Exit\n");
printf("\n\n\t\t\t\t\t\t\t Version:Alpha 0.04\n");
scanf("%d", &option);
action ( option );


}
void action(int option){
int setup;
if(option == 1){
game( setup );
}
else if(option == 2){
    printf("Work in progress(The alpha version is set at Normal difficulty level)\n");
    printf("What difficulty level you want to play:\n1.Easy\n2.Normal\n3.Hard\n4.HELL!!\n\n");
    main();
}
else if (option == 3){
        printf("Work in progress\n");
        main();
}
else if (option == 4){
    printf("Developed by:\n\tEryk Zaplata\n\n");
    main();
}

else{

}
}
