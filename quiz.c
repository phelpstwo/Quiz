#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int hasName(); //
void menu();
void optionsMenu();
void welcome();
void setName();
void home();

int options; //Global variable to options
char name[50] = ""; //Global variable to name with null initial value

int main(){
    while(!hasName()){
        home();
    }
    while(1){
        welcome();
    }
    return 0;
}

int hasName(){
    for(int i = 0;name[i] != '\0'; i++){
        if(name[i] != ' '){
            return 1;
        }
    }
    return 0;
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
    printf("\n1. Escrever seu nome.\n\n");
    printf("                        2.Iniciar               3.Opcoes\n\n");
    printf("Escolha uma opcao:");
    scanf("%i", &options);

    switch (options){
    case 1:
        setName();
        break;
    case 2:
        if(strlen(name) == 0){

            system("clear");

            printf("\nDigite seu nome para iniciar o quiz:");
            scanf(" %[^\n]s", name);
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
    printf("\n\nBem vindo %s!\n\n", name);
    printf("                        1.Iniciar               2.Opcoes\n\n");
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

    printf("\nDigite seu nome:");
    scanf(" %[^\n]s", name);
}

void optionsMenu(){
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
    printf("\n\nOpcoes do quiz\n\n");
    printf("Em desenvolvimento...\n");
    printf("1. Voltar\n");
    scanf("%i", &options);

    switch (options){
    case 1:
        break;
    default:
        system("clear");

        printf("Opcao invalida!\n");
        sleep(3);
        optionsMenu();
        break;
    }
}

void menu(){
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
    printf("\n\nMenu de Quizes de conhecimentos gerais\n\n");
    printf("1. Linguagem HTML\n");
    printf("2. Linguagem CSS\n");
    printf("3. Adivinhas\n");
    printf("4. Voltar\n");
    scanf("%i", &options);

    switch (options){
    case 4:
        break;
    
    default:
        system("clear");

        printf("Opcao invalida!\n");
        sleep(3);
        menu();
        break;
    }
}