//Inverte array

#include <stdlib.h>
#include <stdio.h>

void inverteArray(int array[],int esq, int dir){
    int aux;
    if(esq >= dir) return;
    aux = array[esq];
    array[esq] = array[dir];
    array[dir] = aux;
    inverteArray(array,esq+1,dir-1);

}

int main(){
    int size = 5;
    int array[size] = {5,4,3,2,1};
    inverteArray(array,0,size);
    for(int i=0;i<size;i++){
        printf("%d |",array[i]);
    }
    system("pause");
    return 0;
}