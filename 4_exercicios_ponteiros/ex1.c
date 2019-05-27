/*Escreva  uma função que receba um vetor e os endereços de duas variaveis inteiras digamos min e max 
e deposite nessas variáveis o valor de um elemento mínimo e o valor de um elemento máximo do vetor, escreva também a função 
main*/
#include <stdio.h>
#define TAM 5

void Minmax(int *min, int *max, int *vetor){
    for(int i=0; i<TAM; i++){
        if(vetor[i]>*max)
            *max = vetor[i];
        if(vetor[i]<*min)
            *min = vetor[i];
    }
}
int main(){
    int min=156416, max=-416444, vetor[]={1, 2, 3, 4, 5};
    Minmax(&min, &max, vetor);
    printf("Minimo: %d\nMaximo: %d\n", min, max); 
}