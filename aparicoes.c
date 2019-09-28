//Escreva uma função recursiva que determine quantas vezes um dígito K ocorre em um número natural N. Por exemplo, o dígito 2 ocorre 3 vezes em 762021192.

#include <stdio.h>
#include <stdlib.h>

int aparicoes(long n,int k){
    if(n == 0) return 0;
    return aparicoes(n/10,k) + (n%10 == k);
}
int main(){
    long x = 152556256352235;
    printf("Aparicoes = %d", aparicoes(x,));
    return 0;
}