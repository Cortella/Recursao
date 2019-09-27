//Implementacao de funcao de x^n

#include <stdio.h>
#include <stdlib.h>

pot(int x, int n){
    if(n == 0) return 1;
    return x*pot(x,n-1);

}
int main (){
    int base,expoente;
    printf("VALOR DA BASE: \n");
    scanf("%d", &base);
    printf("\nVALOR DO EXPOENTE: \n");
    scanf("%d", &expoente);
    printf("resultado = %d",pot(base,expoente));
    system("pause");
    return 0; 
}