#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int options; //Global variable to options
char name[50] = ""; //Global variable to name with null initial value

void wellcome(){

    system("clear");

    printf("\n");
    printf(" ___       ________  ________             ________  ___  ___  ___  ________      \n");
    printf("|\\  \\     |\\   ____\\|\\   __  \\           |\\   __  \\|\\  \\|\\  \\|\\  \\|\\_____  \\     \n");
    printf("\\ \\  \\    \\ \\  \\___|\\ \\  \\|\\  \\ _________\\ \\  \\|\\  \\ \\  \\\\  \\ \\  \\|___/  /|    \n");
    printf(" \\ \\  \\    \\ \\_____  \\ \\   ____\\_________\\ \\  \\\\  \\ \\  \\\\  \\ \\  \\   /  / /    \n");
    printf("  \\ \\  \\____\\|____|\\  \\ \\  \\___\\|_________|\\ \\  \\\\  \\ \\  \\\\  \\ \\  \\ /  /_/__   \n");
    printf("   \\ \\_______\\____\\_\\  \\ \\__\\               \\ \\_____  \\ \\_______\\ \\__\\_______ \\ \n");
    printf("    \\|_______|\\_________\\|__|                \\|___| \\__\\|_______|\\|__|\\|_______| \n");
    printf("             \\|_________|                          \\|__|                         \n");
    printf("\n");
    printf("\n");
    printf("Bem vindo %s!\n", name);
    printf("\n");
    printf("\n");
    printf("                        1.Iniciar               2.Opcoes\n");
    printf("\n");
    printf("Escolha uma opcao:");
    scanf("%i", &options);

}

void setName(){

    system("clear");

    printf("\n");
    printf("Digite seu nome:");
    scanf(" %[^\n]s", name);
    wellcome();

}

void home(){

    system("clear");

    printf("\n");
    printf(" ___       ________  ________             ________  ___  ___  ___  ________      \n");
    printf("|\\  \\     |\\   ____\\|\\   __  \\           |\\   __  \\|\\  \\|\\  \\|\\  \\|\\_____  \\     \n");
    printf("\\ \\  \\    \\ \\  \\___|\\ \\  \\|\\  \\ _________\\ \\  \\|\\  \\ \\  \\\\  \\ \\  \\|___/  /|    \n");
    printf(" \\ \\  \\    \\ \\_____  \\ \\   ____\\_________\\ \\  \\\\  \\ \\  \\\\  \\ \\  \\   /  / /    \n");
    printf("  \\ \\  \\____\\|____|\\  \\ \\  \\___\\|_________|\\ \\  \\\\  \\ \\  \\\\  \\ \\  \\ /  /_/__   \n");
    printf("   \\ \\_______\\____\\_\\  \\ \\__\\               \\ \\_____  \\ \\_______\\ \\__\\_______ \\ \n");
    printf("    \\|_______|\\_________\\|__|                \\|___| \\__\\|_______|\\|__|\\|_______| \n");
    printf("             \\|_________|                          \\|__|                         \n");
    printf("\n");
    printf("1. Escrever seu nome.\n");
    printf("\n");
    printf("                        2.Iniciar               3.Opcoes\n");
    printf("\n");
    printf("Escolha uma opcao:");
    scanf("%i", &options);

    switch (options){
    case 1:
        setName();
        break;
    case 2:
        if(strlen(name) == 0){

            system("clear");

            printf("\n");
            printf("Digite seu nome para iniciar o quiz:");
            scanf(" %[^\n]s", name);
            wellcome();
        }
        else{
            wellcome();
        }
        break;
    case 3:
        break;
    default:

        system("clear");

        printf("Opcao invalida!\n");
        break;
    }
}

int main(){

    if(strlen(name) == 0){
        home();
    }
    else{
        wellcome();
    }

    return 0;
}