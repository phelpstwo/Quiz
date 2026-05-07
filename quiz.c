#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <unistd.h>

int temNome();
void menu();
void opcoesMenu();
void bemVindo();
int casa();

int opcoes; //Global variable to options
char nome[50] = ""; //Global variable to name with null initial value

int temNome(){
    for(int i = 0;nome[i] != '\0'; i++){
        if(nome[i] != ' '){
            return 1;
        }
    }
    return 0;
}

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    while(!temNome()){
        if(opcoes == 1){
            system("clear");

            printf("\nDigite seu nome:");
            scanf(" %[^\n]s", nome);
        }
        else{
            // system("clear");

            // printf("\nDigite seu nome para iniciar o quiz:");
            // scanf(" %[^\n]s", nome);
            casa();
        }
         
    }
    while(1){
        bemVindo();
    }
    return 0;
}

int casa(){
    while(1){
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
        printf("                        2.Iniciar               3.Opções\n\n");
        printf("Escolha uma opção:");

        if(scanf("%i",  &opcoes) != 1){
            system("clear");

            while(getchar() != '\n');

            printf("Entrada inválida!\n");
            sleep(2);

            continue;
        }
        else if(opcoes < 1 || opcoes > 3){
            system("clear");

            printf("Opção inválida!\n");
            sleep(2);

            continue;
        }

        switch (opcoes){
        case 1:
            return 0;
        case 2:
            if(strlen(nome) == 0){

                system("clear");
                printf("Você precisa escrever seu nome para iniciar o quiz!\n");
                sleep(1);
                printf("Escreva seu nome:");
                scanf(" %[^\n]s", nome);
            }
            return 1;
        case 3:
            opcoesMenu();
            break;
        }
    }
}

void bemVindo(){
    while(1){
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
        printf("\n\nBem vindo %s!\n\n", nome);
        printf("                        1.Iniciar               2.Opções\n\n");
        printf("Escolha uma opção:");

        if(scanf("%i", &opcoes) != 1){
            system("clear");

            while(getchar() != '\n');

            printf("Entrada inválida!\n");
            sleep(2);

            continue;
        }
        else if(opcoes < 1 || opcoes > 2){
            system("clear");

            printf("Opção inválida!\n");
            sleep(2);

            continue;
        }

        switch (opcoes){
        case 1:
            menu();
            break;
        case 2:
            opcoesMenu();
            break;
        }
    }
}

void opcoesMenu(){
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
    printf("\n\nOpções do quiz\n\n");
    printf("Em desenvolvimento...\n");
    printf("1. Voltar\n");
    scanf("%i", &opcoes);

    switch (opcoes){
    case 1:
        break;
    default:
        system("clear");

        printf("Opção inválida!\n");
        sleep(3);
        opcoesMenu();
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
    scanf("%i", &opcoes);

    switch (opcoes){
    case 4:
        break;
    
    default:
        system("clear");

        printf("Opção inválida!\n");
        sleep(3);
        menu();
        break;
    }
}