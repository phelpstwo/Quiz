#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>
#include <ctype.h>
#include <unistd.h>

void limparTela();
int temNome();
void menu();
int opcoesMenu();
void bemVindo();
int casa();

int opcoes;
char nome[20] = "";

int main(){
    setlocale(LC_ALL, "pt_BR.UTF-8");
    
    if(strlen(nome) == 0){
        if(opcoes == 0){
            casa();
        }
        if(opcoes == 1){
            limparTela();
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

void limparTela(){

#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif

}

int casa(){
    do{
        if(strlen(nome) == 0){
            limparTela();

            printf("\n");
            printf("╔─────────────────────────────────────────────────────────────────────────────────╗\n");
            printf("| ___       ________  ________             ________  ___  ___  ___  ________      |\n");
            printf("||\\  \\     |\\   ____\\|\\   __  \\           |\\   __  \\|\\  \\|\\  \\|\\  \\|\\_____  \\     |\n");
            printf("|\\ \\  \\    \\ \\  \\___|\\ \\  \\|\\  \\ _________\\ \\  \\|\\  \\ \\  \\  \\ \\  \\|___/  /|       |\n");
            printf("| \\ \\  \\    \\ \\_____  \\ \\   ____\\_________\\ \\  \\  \\ \\  \\  \\ \\  \\   /  / /         |\n");
            printf("|  \\ \\  \\____\\|____|\\  \\ \\  \\___\\|_________|\\ \\  \\  \\ \\  \\  \\ \\  \\ /  /_/__       |\n");
            printf("|   \\ \\_______\\____\\_\\  \\ \\__\\               \\ \\_____  \\ \\_______\\ \\__\\_______ \\  |\n");
            printf("|    \\|_______|\\_________\\|__|                \\|___| \\__\\|_______|\\|__|\\|_______| |\n");
            printf("|             \\|_________|                          \\|__|                         |\n");
            printf("|                                                                                 |\n");
            printf("|                                                                                 |\n");
            printf("|                                  1. Escrever nome                               |\n");
            printf("|                                     2. Iniciar                                  |\n");
            printf("|                                     3. Opções                                   |\n");
            printf("|                                      4. Sair                                    |\n");
            printf("|                                                                                 |\n");
            printf("╚─────────────────────────────────────────────────────────────────────────────────╝\n");
            printf("Escolha uma opção:");

            if(scanf("%d",  &opcoes) != 1){
                limparTela();

                while(getchar() != '\n');

                printf("Entrada inválida!\n");
                sleep(2);

                continue;
            }
            else if(opcoes < 1 || opcoes > 4){
                limparTela();

                printf("Opção inválida!\n");
                sleep(2);

                continue;
            }

            switch (opcoes){
            case 1:
                return 0;
            case 2:
                if(strlen(nome) == 0){

                    limparTela();
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

    limparTela();
    printf("Obrigado por jogar o quiz, até a próxima!\n");
    printf("Saindo...\n");
    sleep(2);
    exit(0);
}

void bemVindo(){
    do{
        limparTela();

        printf("\n");
        printf("╔─────────────────────────────────────────────────────────────────────────────────╗\n");
        printf("| ___       ________  ________             ________  ___  ___  ___  ________      |\n");
        printf("||\\  \\     |\\   ____\\|\\   __  \\           |\\   __  \\|\\  \\|\\  \\|\\  \\|\\_____  \\     |\n");
        printf("|\\ \\  \\    \\ \\  \\___|\\ \\  \\|\\  \\ _________\\ \\  \\|\\  \\ \\  \\  \\ \\  \\|___/  /|       |\n");
        printf("| \\ \\  \\    \\ \\_____  \\ \\   ____\\_________\\ \\  \\  \\ \\  \\  \\ \\  \\   /  / /         |\n");
        printf("|  \\ \\  \\____\\|____|\\  \\ \\  \\___\\|_________|\\ \\  \\  \\ \\  \\  \\ \\  \\ /  /_/__       |\n");
        printf("|   \\ \\_______\\____\\_\\  \\ \\__\\               \\ \\_____  \\ \\_______\\ \\__\\_______ \\  |\n");
        printf("|    \\|_______|\\_________\\|__|                \\|___| \\__\\|_______|\\|__|\\|_______| |\n");
        printf("|             \\|_________|                          \\|__|                         |\n");
        printf("|                                                                                 |\n");
        printf("|                                                                                 |\n");
        printf("                                Bem vindo %s!                                       \n", nome);
        printf("|                                                                                 |\n");
        printf("|                                                                                 |\n");
        printf("|                                    1. Iniciar                                   |\n");
        printf("|                                    2. Opções                                    |\n");
        printf("|                                     3. Sair                                     |\n");
        printf("|                                                                                 |\n");
        printf("╚─────────────────────────────────────────────────────────────────────────────────╝\n");
        printf("Escolha uma opção:");

        if(scanf("%d", &opcoes) != 1){
            limparTela();

            while(getchar() != '\n');

            printf("Entrada inválida!\n");
            sleep(2);

            continue;
        }
        else if(opcoes < 1 || opcoes > 3){
            limparTela();

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

    limparTela();
    printf("Obrigado por jogar o quiz, até a próxima!\n");
    printf("Saindo...\n");
    sleep(2);
    exit(0);
}

int opcoesMenu(){
    do{
        limparTela();

        printf("\n");
        printf("╔─────────────────────────────────────────────────────────────────────────────────╗\n");
        printf("| ___       ________  ________             ________  ___  ___  ___  ________      |\n");
        printf("||\\  \\     |\\   ____\\|\\   __  \\           |\\   __  \\|\\  \\|\\  \\|\\  \\|\\_____  \\     |\n");
        printf("|\\ \\  \\    \\ \\  \\___|\\ \\  \\|\\  \\ _________\\ \\  \\|\\  \\ \\  \\  \\ \\  \\|___/  /|       |\n");
        printf("| \\ \\  \\    \\ \\_____  \\ \\   ____\\_________\\ \\  \\  \\ \\  \\  \\ \\  \\   /  / /         |\n");
        printf("|  \\ \\  \\____\\|____|\\  \\ \\  \\___\\|_________|\\ \\  \\  \\ \\  \\  \\ \\  \\ /  /_/__       |\n");
        printf("|   \\ \\_______\\____\\_\\  \\ \\__\\               \\ \\_____  \\ \\_______\\ \\__\\_______ \\  |\n");
        printf("|    \\|_______|\\_________\\|__|                \\|___| \\__\\|_______|\\|__|\\|_______| |\n");
        printf("|             \\|_________|                          \\|__|                         |\n");
        printf("|                                                                                 |\n");
        printf("|                                                                                 |\n");
        printf("|                             Menu de Opções do Quiz                              |\n");
        printf("|                                                                                 |\n");
        printf("|                               Em desenvovimento...                              |\n");
        printf("|                                 1. Alterar nome                                 |\n");
        printf("|                                    2. Voltar                                    |\n");
        printf("|                                                                                 |\n");
        printf("╚─────────────────────────────────────────────────────────────────────────────────╝\n");
        printf("Escolha uma opção:");

        if(scanf("%d", &opcoes) != 1){
            limparTela();

            while(getchar() != '\n');

            printf("Entrada inválida!\n");
            sleep(2);

            continue;
        }
        else if(opcoes < 1 || opcoes > 2){
            limparTela();

            while(getchar() != '\n');

            printf("Opção inválida!\n");
            sleep(2);

            continue;
        }

        switch(opcoes){
            case 1:
                if(strlen(nome) == 0){
                    limparTela();

                    printf("Você precisa ter um nome para poder alterá-lo!\n");
                    sleep(1);
                    printf("Escreva seu nome:");
                    scanf(" %19[^\n]s", nome);

                    while(getchar() != '\n');

                    limparTela();
                    printf("Nome definido com sucesso!\n");
                    sleep(2);

                }
                else{
                    limparTela();

                    printf("Escreva seu novo nome:");
                    scanf(" %19[^\n]s", nome);
                    
                    while(getchar() != '\n');

                    limparTela();
                    printf("Nome alterado com sucesso!\n");
                    sleep(2);
                }
                break;
        }
    }while(opcoes != 2);

    return 0;
}

void menu(){
    int qc = 0, qi = 0;
    char repst[15];
    do{
        limparTela();

        printf("\n");
        printf("╔─────────────────────────────────────────────────────────────────────────────────╗\n");
        printf("| ___       ________  ________             ________  ___  ___  ___  ________      |\n");
        printf("||\\  \\     |\\   ____\\|\\   __  \\           |\\   __  \\|\\  \\|\\  \\|\\  \\|\\_____  \\     |\n");
        printf("|\\ \\  \\    \\ \\  \\___|\\ \\  \\|\\  \\ _________\\ \\  \\|\\  \\ \\  \\  \\ \\  \\|___/  /|       |\n");
        printf("| \\ \\  \\    \\ \\_____  \\ \\   ____\\_________\\ \\  \\  \\ \\  \\  \\ \\  \\   /  / /         |\n");
        printf("|  \\ \\  \\____\\|____|\\  \\ \\  \\___\\|_________|\\ \\  \\  \\ \\  \\  \\ \\  \\ /  /_/__       |\n");
        printf("|   \\ \\_______\\____\\_\\  \\ \\__\\               \\ \\_____  \\ \\_______\\ \\__\\_______ \\  |\n");
        printf("|    \\|_______|\\_________\\|__|                \\|___| \\__\\|_______|\\|__|\\|_______| |\n");
        printf("|             \\|_________|                          \\|__|                         |\n");
        printf("|                                                                                 |\n");
        printf("|                                                                                 |\n");
        printf("|                       Menu de Quizes de conhecimentos gerais                    |\n");
        printf("|                                                                                 |\n");
        printf("|                                1. Linguagem HTML                                |\n");
        printf("|                                2. Linguagem CSS                                 |\n");
        printf("|                                  3. Adivinhas                                   |\n");
        printf("|                                   4. Voltar                                     |\n");
        printf("|                                                                                 |\n");
        printf("╚─────────────────────────────────────────────────────────────────────────────────╝\n");
        printf("Escolha uma opção:");

        if(scanf("%d", &opcoes) != 1){
            limparTela();

            while(getchar() != '\n');

            printf("Entrada inválida!\n");
            sleep(2);

            continue;
        }

        switch(opcoes){
            case 1:
            limparTela();
            printf("Quiz em desenvolvimento...\n");
            sleep(2);
            break;
        case 2:
            limparTela();
            printf("Quiz em desenvolvimento...\n");
            sleep(2);
            break;
        case 3:
            limparTela();
            printf("╔─────────────────────────────────────────────────────────────────────────────────╗\n");
            printf("|                                                                                 |\n");
            printf("|                 O que é, o que é? Cai em pé e corre deitada?                    |\n");
            printf("|                                                                                 |\n");
            printf("╚─────────────────────────────────────────────────────────────────────────────────╝\n");
            printf("Resposta:");
            scanf(" %19[^\n]s", repst);
            printf("\n");

            for(int i = 0; repst[i]; i++){
                repst[i] = tolower(repst[i]);
            }

            if(strcmp(repst , "a chuva") == 0 || strcmp(repst, "chuva") == 0){
                printf("Parabéns! Você acertou! Uhuul :)\n");
                qc++;
                sleep(2);
            }
            else{
                printf("Infelizmente você errou kk\n");
                printf("Resposta: chuva\n");
                qi++;
                sleep(2);
            }

            limparTela();
            printf("╔─────────────────────────────────────────────────────────────────────────────────╗\n");
            printf("|                                                                                 |\n");
            printf("|    O que é, o que é? Tem coroa, mas não é rei; tem escamas, mas não é peixe?    |\n");
            printf("|                                                                                 |\n");
            printf("╚─────────────────────────────────────────────────────────────────────────────────╝\n");
            printf("Resposta:");
            scanf(" %19[^\n]s", repst);
            printf("\n");

            for(int i = 0; repst[i]; i++){
                repst[i] = tolower(repst[i]);
            }

            if(strcmp(repst , "o abacaxi") == 0 || strcmp(repst, "abacaxi") == 0){
                printf("Parabéns! Você acertou! Uhuul :)\n");
                qc++;
                sleep(2);
            }
            else{
                printf("Infelizmente você errou kk\n");
                printf("Resposta: abacaxi\n");
                qi++;
                sleep(2);
            }

            limparTela();
            printf("╔─────────────────────────────────────────────────────────────────────────────────╗\n");
            printf("|                                                                                 |\n");
            printf("|              O que é, o que é? O nadador faz para bater recordes?               |\n");
            printf("|                                                                                 |\n");
            printf("╚─────────────────────────────────────────────────────────────────────────────────╝\n");
            printf("Resposta:");
            scanf(" %19[^\n]s", repst);
            printf("\n");

            for(int i = 0; repst[i]; i++){
                repst[i] = tolower(repst[i]);
            }

            if(strcmp(repst , "nadar") == 0 || strcmp(repst, "nada") == 0){
                printf("Parabéns! Você acertou! Uhuul :)\n");
                qc++;
                sleep(2);
            }
            else{
                printf("Infelizmente você errou kk\n");
                printf("Resposta: nada kk\n");
                qi++;
                sleep(2);
            }

            limparTela();
            printf("╔─────────────────────────────────────────────────────────────────────────────────╗\n");
            printf("|                                                                                 |\n");
            printf("|    O que é, o que é? Subindo o sol, vai se encurtando e descendo o sol, vai     |\n");
            printf("|    se alongando?                                                                |\n");
            printf("|                                                                                 |\n");
            printf("╚─────────────────────────────────────────────────────────────────────────────────╝\n");
            printf("Resposta:");
            scanf(" %19[^\n]s", repst);
            printf("\n");

            for(int i = 0; repst[i]; i++){
                repst[i] = tolower(repst[i]);
            }

            if(strcmp(repst , "a sombra") == 0 || strcmp(repst, "sombra") == 0){
                printf("Parabéns! Você acertou! Uhuul :)\n");
                qc++;
                sleep(2);
            }
            else{
                printf("Infelizmente você errou kk\n");
                printf("Resposta: sombra\n");
                qi++;
                sleep(2);
            }

            limparTela();
            printf("╔─────────────────────────────────────────────────────────────────────────────────╗\n");
            printf("|                                                                                 |\n");
            printf("|      O que é, o que é? Corre a casa inteira e depois descansa em um canto?      |\n");
            printf("|                                                                                 |\n");
            printf("╚─────────────────────────────────────────────────────────────────────────────────╝\n");
            printf("Resposta:");
            scanf(" %19[^\n]s", repst);
            printf("\n");

            for(int i = 0; repst[i]; i++){
                repst[i] = tolower(repst[i]);
            }

            if(strcmp(repst , "a vassoura") == 0 || strcmp(repst, "vassoura") == 0){
                printf("Parabéns! Você acertou! Uhuul :)\n");
                qc++;
                sleep(2);
            }
            else{
                printf("Infelizmente você errou kk\n");
                printf("Resposta: vassoura\n");
                qi++;
                sleep(2);
            }

            limparTela();
            printf("╔─────────────────────────────────────────────────────────────────────────────────╗\n");
            printf("|                                                                                 |\n");
            printf("|        O que é, o que é? Tem perna e braço, mas não anda e nem abraça?          |\n");
            printf("|                                                                                 |\n");
            printf("╚─────────────────────────────────────────────────────────────────────────────────╝\n");
            printf("Resposta:");
            scanf(" %19[^\n]s", repst);
            printf("\n");

            for(int i = 0; repst[i]; i++){
                repst[i] = tolower(repst[i]);
            }

            if(strcmp(repst , "a cadeira") == 0 || strcmp(repst, "cadeira") == 0){
                printf("Parabéns! Você acertou! Uhuul :)\n");
                qc++;
                sleep(2);
            }
            else{
                printf("Infelizmente você errou kk\n");
                printf("Resposta: cadeira\n");
                qi++;
                sleep(2);
            }

            limparTela();
            printf("╔─────────────────────────────────────────────────────────────────────────────────╗\n");
            printf("|                                                                                 |\n");
            printf("|                 O que é, o que é? Nasce grande e morre pequeno(a)?              |\n");
            printf("|                                                                                 |\n");
            printf("╚─────────────────────────────────────────────────────────────────────────────────╝\n");
            printf("Resposta:");
            scanf(" %19[^\n]s", repst);
            printf("\n");

            for(int i = 0; repst[i]; i++){
                repst[i] = tolower(repst[i]);
            }

            if(strcmp(repst , "a vela") == 0 || strcmp(repst, "vela") == 0 || strcmp(repst, "o lápis") == 0 || strcmp(repst, "lápis") == 0){
                printf("Parabéns! Você acertou! Uhuul :)\n");
                qc++;
                sleep(2);
            }
            else{
                printf("Infelizmente você errou kk\n");
                printf("Resposta: lápis ou vela\n");
                qi++;
                sleep(2);
            }

            limparTela();
            printf("╔─────────────────────────────────────────────────────────────────────────────────╗\n");
            printf("|                                                                                 |\n");
            printf("|                O que é, o que é? Objeto que mais pesa no mundo?                 |\n");
            printf("|                                                                                 |\n");
            printf("╚─────────────────────────────────────────────────────────────────────────────────╝\n");
            printf("Resposta:");
            scanf(" %19[^\n]s", repst);
            printf("\n");

            for(int i = 0; repst[i]; i++){
                repst[i] = tolower(repst[i]);
            }

            if(strcmp(repst , "a balança") == 0 || strcmp(repst, "balança") == 0){
                printf("Parabéns! Você acertou! Uhuul :)\n");
                qc++;
                sleep(2);
            }
            else{
                printf("Infelizmente você errou kk\n");
                printf("Resposta: balança\n");
                qi++;
                sleep(2);
            }

            limparTela();
            printf("╔─────────────────────────────────────────────────────────────────────────────────╗\n");
            printf("|                                                                                 |\n");
            printf("|              O que é, o que é? Nós matamos quando está nos matando?             |\n");
            printf("|                                                                                 |\n");
            printf("╚─────────────────────────────────────────────────────────────────────────────────╝\n");
            printf("Resposta:");
            scanf(" %19[^\n]s", repst);
            printf("\n");

            for(int i = 0; repst[i]; i++){
                repst[i] = tolower(repst[i]);
            }

            if(strcmp(repst , "a fome") == 0 || strcmp(repst, "fome") == 0){
                printf("Parabéns! Você acertou! Uhuul :)\n");
                qc++;
                sleep(2);
            }
            else{
                printf("Infelizmente você errou kk\n");
                printf("Resposta: fome\n");
                qi++;
                sleep(2);
            }

            limparTela();
            printf("╔─────────────────────────────────────────────────────────────────────────────────╗\n");
            printf("|                                                                                 |\n");
            printf("|                 O que é, o que é? Entra duro, sai mole e pingando?              |\n");
            printf("|                                                                                 |\n");
            printf("╚─────────────────────────────────────────────────────────────────────────────────╝\n");
            printf("Resposta:");
            scanf(" %19[^\n]s", repst);
            printf("\n");

            for(int i = 0; repst[i]; i++){
                repst[i] = tolower(repst[i]);
            }

            if(strcmp(repst , "o macarrão") == 0 || strcmp(repst, "macarrão") == 0){
                printf("Parabéns! Você acertou! Uhuul :)\n");
                qc++;
                sleep(2);
            }
            else{
                printf("Infelizmente você errou kk\n");
                printf("Resposta: Macarrão. Quando vai para a penela é duro e quando sai e mole e pinga molho kkkkk\n");
                qi++;
                sleep(4);
            }

            if(qc == 10){
                limparTela();
                printf("Parabéns %s! Vocẽ acertou todas as adivinhas! :)\n", nome);
                printf("\n");
                printf("Aperte qualquer tecla para continuar...");
                getchar(); getchar();
            }
            if(qc < 10 && qc >= 7){
                limparTela();
                printf("Parabéns %s! Vocẽ foi muito bom!\n", nome);
                printf("Desempenho: %d acertos e %d erros\n", qc, qi);
                printf("\n");
                printf("Aperte qualquer tecla para continuar...");
                getchar(); getchar();
            }
            if(qc <= 6 && qc >= 4){
                limparTela();
                printf("Tá na média kk\n");
                printf("Desempenho: %d acertos e %d erros\n", qc, qc);
                printf("\n");
                printf("Aperte qualquer tecla para continuar...");
                getchar(); getchar();
            }
            if(qc < 4){
                limparTela();
                printf("Errou quase tudo %s kkk\n", nome);
                printf("Desempenho: %d acertos e %d erros\n", qc, qi);
                printf("\n");
                printf("Aperte qualquer tecla para continuar...");
                getchar(); getchar();
            }
            break;
        case 4:
        break;
        default:
            limparTela();
            printf("Opção inváida!\n");
            sleep(2);
            break;
        }

    }while(opcoes != 4);
}