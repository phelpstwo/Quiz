#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

void menu();
void optionsMenu();
void welcome();
void setName();
void home();

int options; //Global variable to options
char name[50] = ""; //Global variable to name with null initial value

void menu(){
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
    printf("Menu de Quizes de conhecimentos gerais\n");
    printf("\n");
    printf("1. Linguagem HTML\n");
    printf("2. Linguagem CSS\n");
    printf("3. Adivinhas\n");
    printf("4. Voltar\n");
    scanf("%i", &options);

    switch (options){
    case 4:
        welcome();
        break;
    
    default:
        system("clear");
        printf("Opcao invalida!\n");
        sleep(3);
        menu();
        break;
    }
}

void optionsMenu(){

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
    printf("Opcoes do quiz\n");
    printf("\n");
    printf("Em desenvolvimento...\n");
    printf("1. Voltar\n");
    scanf("%i", &options);

    switch (options){
    case 1:
        if(strlen(name) == 0){
            home();
        }
        else{
            welcome();
        }
        break;
    
    default:
        system("clear");
        printf("Opcao invalida!\n");
        sleep(3);
        optionsMenu();
        break;
    }
}

void welcome(){

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

    switch (options){
    case 1:
        menu();
        break;
    case 2:
        optionsMenu();
        break;
    default:
        system("clear");
        printf("Opcao invalida!\n");
        sleep(3);
        welcome();
        break;
    }
}

void setName(){

    system("clear");

    printf("\n");
    printf("Digite seu nome:");
    scanf(" %[^\n]s", name);
    welcome();

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
            welcome();
        }
        else{
            welcome();
        }
        break;
    case 3:
        optionsMenu();
        break;
    default:
        system("clear");
        printf("Opcao invalida!\n");
        sleep(3);
        home();
        break;
    }
}

int main(){

    if(strlen(name) == 0){
        home();
    }
    else{
        welcome();
    }

    return 0;
}