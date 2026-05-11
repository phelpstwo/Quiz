#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <unistd.h>

int temNome();
void menu();
int opcoesMenu();
void bemVindo();
int casa();

int opcoes; //Global variable to options
char nome[20] = ""; //Global variable to name with null initial value

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    if(strlen(nome) == 0){
        if(opcoes == 0){
            casa();
        }
        if(opcoes == 1){
            system("clear");
            printf("Escreva seu nome:");
            scanf(" %19[^\n]s", nome);

            while(getchar() != '\n');
        }
    }
    if(strlen(nome) != 0){
        bemVindo();
    }
    return 0;
}

int casa(){
    do{
        if(strlen(nome) == 0){
            system("clear");

            printf("\n");
            printf("╔─────────────────────────────────────────────────────────────────────────────────╗\n");
            printf("│ ___       ________  ________             ________  ___  ___  ___  ________      │\n");
            printf("│|\\  \\     |\\   ____\\|\\   __  \\           |\\   __  \\|\\  \\|\\  \\|\\  \\|\\_____  \\     │\n");
            printf("│\\ \\  \\    \\ \\  \\___|\\ \\  \\|\\  \\ _________\\ \\  \\|\\  \\ \\  \\  \\ \\  \\|___/  /|       │\n");
            printf("│ \\ \\  \\    \\ \\_____  \\ \\   ____\\_________\\ \\  \\  \\ \\  \\  \\ \\  \\   /  / /         │\n");
            printf("│  \\ \\  \\____\\|____|\\  \\ \\  \\___\\|_________|\\ \\  \\  \\ \\  \\  \\ \\  \\ /  /_/__       │\n");
            printf("│   \\ \\_______\\____\\_\\  \\ \\__\\               \\ \\_____  \\ \\_______\\ \\__\\_______ \\  │\n");
            printf("│    \\|_______|\\_________\\|__|                \\|___| \\__\\|_______|\\|__|\\|_______| │\n");
            printf("│             \\|_________|                          \\|__|                         │\n");
            printf("│                                                                                 │\n");
            printf("│                                                                                 │\n");
            printf("│                                  1. Escrever nome                               │\n");
            printf("│                                     2. Iniciar                                  │\n");
            printf("│                                     3. Opções                                   │\n");
            printf("│                                      4. Sair                                    │\n");
            printf("│                                                                                 │\n");
            printf("╚─────────────────────────────────────────────────────────────────────────────────╝\n");
            printf("Escolha uma opção:");

            if(scanf("%d",  &opcoes) != 1){
                system("clear");

                while(getchar() != '\n');

                printf("Entrada inválida!\n");
                sleep(2);

                continue;
            }
            else if(opcoes < 1 || opcoes > 4){
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
                    scanf(" %19[^\n]s", nome);

                    while(getchar() != '\n');
                }
                return 1;
            case 3:
                opcoesMenu();
                break;
            }
        }
        else{
            return 0;
        }
    }while(opcoes != 4);

    system("clear");
    printf("Obrigado por jogar o quiz, até a próxima!\n");
    printf("Saindo...\n");
    sleep(2);
    exit(0);
}

void bemVindo(){
    do{
        system("clear");

        printf("\n");
        printf("╔─────────────────────────────────────────────────────────────────────────────────╗\n");
        printf("│ ___       ________  ________             ________  ___  ___  ___  ________      │\n");
        printf("│|\\  \\     |\\   ____\\|\\   __  \\           |\\   __  \\|\\  \\|\\  \\|\\  \\|\\_____  \\     │\n");
        printf("│\\ \\  \\    \\ \\  \\___|\\ \\  \\|\\  \\ _________\\ \\  \\|\\  \\ \\  \\  \\ \\  \\|___/  /|       │\n");
        printf("│ \\ \\  \\    \\ \\_____  \\ \\   ____\\_________\\ \\  \\  \\ \\  \\  \\ \\  \\   /  / /         │\n");
        printf("│  \\ \\  \\____\\|____|\\  \\ \\  \\___\\|_________|\\ \\  \\  \\ \\  \\  \\ \\  \\ /  /_/__       │\n");
        printf("│   \\ \\_______\\____\\_\\  \\ \\__\\               \\ \\_____  \\ \\_______\\ \\__\\_______ \\  │\n");
        printf("│    \\|_______|\\_________\\|__|                \\|___| \\__\\|_______|\\|__|\\|_______| │\n");
        printf("│             \\|_________|                          \\|__|                         │\n");
        printf("│                                                                                 │\n");
        printf("│                                                                                 │\n");
        printf("                                Bem vindo %s!                                       \n", nome);
        printf("│                                                                                 │\n");
        printf("│                                                                                 │\n");
        printf("│                                    1. Iniciar                                   │\n");
        printf("│                                    2. Opções                                    │\n");
        printf("│                                     3. Sair                                     │\n");
        printf("│                                                                                 │\n");
        printf("╚─────────────────────────────────────────────────────────────────────────────────╝\n");
        printf("Escolha uma opção:");

        if(scanf("%d", &opcoes) != 1){
            system("clear");

            while(getchar() != '\n');

            printf("Entrada inválida!\n");
            sleep(2);

            continue;
        }
        else if(opcoes < 1 || opcoes > 3){
            system("clear");

            while(getchar() != '\n');

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
    }while(opcoes != 3);

    system("clear");
    printf("Obrigado por jogar o quiz, até a próxima!\n");
    printf("Saindo...\n");
    sleep(2);
    exit(0);
}

int opcoesMenu(){
    do{
        system("clear");

        printf("\n");
        printf("╔─────────────────────────────────────────────────────────────────────────────────╗\n");
        printf("│ ___       ________  ________             ________  ___  ___  ___  ________      │\n");
        printf("│|\\  \\     |\\   ____\\|\\   __  \\           |\\   __  \\|\\  \\|\\  \\|\\  \\|\\_____  \\     │\n");
        printf("│\\ \\  \\    \\ \\  \\___|\\ \\  \\|\\  \\ _________\\ \\  \\|\\  \\ \\  \\  \\ \\  \\|___/  /|       │\n");
        printf("│ \\ \\  \\    \\ \\_____  \\ \\   ____\\_________\\ \\  \\  \\ \\  \\  \\ \\  \\   /  / /         │\n");
        printf("│  \\ \\  \\____\\|____|\\  \\ \\  \\___\\|_________|\\ \\  \\  \\ \\  \\  \\ \\  \\ /  /_/__       │\n");
        printf("│   \\ \\_______\\____\\_\\  \\ \\__\\               \\ \\_____  \\ \\_______\\ \\__\\_______ \\  │\n");
        printf("│    \\|_______|\\_________\\|__|                \\|___| \\__\\|_______|\\|__|\\|_______| │\n");
        printf("│             \\|_________|                          \\|__|                         │\n");
        printf("│                                                                                 │\n");
        printf("│                                                                                 │\n");
        printf("│                             Menu de Opções do Quiz                              │\n");
        printf("│                                                                                 │\n");
        printf("│                               Em desenvovimento...                              │\n");
        printf("│                                 1. Alterar nome                                 │\n");
        printf("│                                    2. Voltar                                    │\n");
        printf("│                                                                                 │\n");
        printf("╚─────────────────────────────────────────────────────────────────────────────────╝\n");
        printf("Escolha uma opção:");

        if(scanf("%d", &opcoes) != 1){
            system("clear");

            while(getchar() != '\n');

            printf("Entrada inválida!\n");
            sleep(2);

            continue;
        }
        else if(opcoes < 1 || opcoes > 2){
            system("clear");

            while(getchar() != '\n');

            printf("Opção inválida!\n");
            sleep(2);

            continue;
        }

        switch(opcoes){
            case 1:
                if(strlen(nome) == 0){
                    system("clear");

                    printf("Você precisa ter um nome para poder alterá-lo!\n");
                    sleep(1);
                    printf("Escreva seu nome:");
                    scanf(" %19[^\n]s", nome);

                    while(getchar() != '\n');

                    system("clear");
                    printf("Nome definido com sucesso!\n");
                    sleep(2);

                }
                else{
                    system("clear");

                    printf("Escreva seu novo nome:");
                    scanf(" %19[^\n]s", nome);
                    
                    while(getchar() != '\n');

                    system("clear");
                    printf("Nome alterado com sucesso!\n");
                    sleep(2);
                }
                break;
        }
    }while(opcoes != 2);

    return 0;
}

void menu(){
    do{
        system("clear");

        printf("\n");
        printf("╔─────────────────────────────────────────────────────────────────────────────────╗\n");
        printf("│ ___       ________  ________             ________  ___  ___  ___  ________      │\n");
        printf("│|\\  \\     |\\   ____\\|\\   __  \\           |\\   __  \\|\\  \\|\\  \\|\\  \\|\\_____  \\     │\n");
        printf("│\\ \\  \\    \\ \\  \\___|\\ \\  \\|\\  \\ _________\\ \\  \\|\\  \\ \\  \\  \\ \\  \\|___/  /|       │\n");
        printf("│ \\ \\  \\    \\ \\_____  \\ \\   ____\\_________\\ \\  \\  \\ \\  \\  \\ \\  \\   /  / /         │\n");
        printf("│  \\ \\  \\____\\|____|\\  \\ \\  \\___\\|_________|\\ \\  \\  \\ \\  \\  \\ \\  \\ /  /_/__       │\n");
        printf("│   \\ \\_______\\____\\_\\  \\ \\__\\               \\ \\_____  \\ \\_______\\ \\__\\_______ \\  │\n");
        printf("│    \\|_______|\\_________\\|__|                \\|___| \\__\\|_______|\\|__|\\|_______| │\n");
        printf("│             \\|_________|                          \\|__|                         │\n");
        printf("│                                                                                 │\n");
        printf("│                                                                                 │\n");
        printf("│                       Menu de Quizes de conhecimentos gerais                    │\n");
        printf("│                                                                                 │\n");
        printf("│                                1. Linguagem HTML                                │\n");
        printf("│                                2. Linguagem CSS                                 │\n");
        printf("│                                  3. Adivinhas                                   │\n");
        printf("│                                   4. Voltar                                     │\n");
        printf("│                                                                                 │\n");
        printf("╚─────────────────────────────────────────────────────────────────────────────────╝\n");
        printf("Escolha uma opção:");

        if(scanf("%d", &opcoes) != 1){
            system("clear");

            while(getchar() != '\n');

            printf("Entrada inválida!\n");
            sleep(2);

            continue;
        }
        else if(opcoes < 1 || opcoes > 4){
            system("clear");

            while(getchar() != '\n');

            printf("Opção inválida!\n");
            sleep(2);

            continue;
        }

    }while(opcoes != 4);
}