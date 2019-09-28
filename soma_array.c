//Soma de array

#include <stdlib.h>
#include <stdio.h>

float soma(float vet[], int size){
    if (size == 0) return 0;
    return vet[size-1] + soma(vet,size-1);
}
int main(){
    float vet[5] = { 5.0,4.0,3.0,2.0,1.0};
    printf(" SOMA = %f.2 ", soma(vet,5));
    system("pause");
    return 0;
}