#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(){
    srand (time(NULL)); //SEMEADORA
    int numerosorteado = rand()%100;//sorteando um num entre 0 e 100
    printf("%d",numerosorteado);
    return 1;
}