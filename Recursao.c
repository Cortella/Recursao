//Resursao introducao

#include <stdlib.h>
#include <stdio.h>

void menu();

void adicao();
void subtracao();
void multiplicacao();
void divisao();
void sair();

int main(){
    menu();
    system("pause");
    return 0;
}

void menu(){
    int opcao;
    printf("Escolha sua opcao: \n");
    printf(" 1 - Adicao \n 2 - Subtracao \n 3 - Multiplicacao \n 4 - divisao \n 5 - Sair \n");
    scanf("%d", &opcao);
    getchar();
    switch(opcao){
        case 1: 
            adicao();
        break;
        case 2: 
            subtracao();
        break;
        case 3: 
            multiplicacao();
        break;
        case 4: 
            divisao();
        break;
        case 5: 
            sair();
        break;
        default:
            printf("Opcao incorreta! \n selecione novamente");
            system("pause");
            menu();
    }
}

void adicao(){
    printf(" Adicao selecionada \n");
    menu();
}
void subtracao(){
    printf(" Subtracao selecionada \n");
    menu();
}
void multiplicacao(){
    printf(" Multiplicacao selecionada \n");
    menu();
}
void divisao(){
    printf(" divisao selecionada \n");
    menu();
}
void sair(){
    printf(" Exit!! \n");
    exit(1);
}