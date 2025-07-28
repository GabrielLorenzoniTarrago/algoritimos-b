#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define TAM 10

//fazer um programa que sorteie 10 numeros aleatorios entre 0 e 100 
//armazendo em um vetor de tamanho 10 
//ao final, exibir esses numeros
int main(){
    int vetor[TAM];

    srand(time(null));
    for (int i=0;i<TAM;i++){
        printf( "%d\t",vetor[i]);


    }
    printf("/n");
    return 1;
}