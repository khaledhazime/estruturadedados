/*2. Seja um vetor de inteiros (global) de tamanho TAM. Faça um programa com as seguintes funções:

leitura: lê os elementos do vetor.

imaior: retorna o índice do maior elemento do vetor.

media: retorna a média aritmética dos elementos do vetor.

troca: recebe dois valores x e y e substitui x por y no vetor. Ex.: supor x = 3 e y = 9. Se o vetor

inicialmente lido fosse {2, 5, 3, 7, -5, 3, 2, 9}, depois da troca ele ficaria: {2, 5, 9, 7, -5, 9, 2, 9}

imprime: imprime o vetor.*/
#define TAM 5
#include <stdio.h>

int v1[TAM];
int leitura(int *v){
    for(int i=0; i<TAM; i++){
        printf("Digite o %d.o elemento do vetor (indice %d) \n", i+1, i);
        scanf("%d", &v[i]);
    }
}
int imaior(int *v){
    int maior=0;
    for(int i=0; i<TAM; i++){
        if (v[i]>maior){
            maior = i;
        }
    }
    return(maior);
}
int media(int *v){
    int soma=0, m;
    for(int i=0; i<TAM; i++){
        soma = soma + v[i];
    }
    m = soma/TAM;
    return(m);
}
int troca(int *v){
    int x, y;
    printf("Digite o valor de x\n");
    scanf("%d", &x);
    printf("Digite o valor de y\n");
    scanf("%d", &y);
    for(int i=0; i<TAM; i++){
        if(v[i]==x){
            v[i]=y;
        }
    }
}
int imprime(int *v){
    printf("Vetor antes da troca:\n");
    for(int i=0; i<TAM; i++){
        printf("%d\n", v1[i]);
    }
    
    troca(v1);
    printf("Vetor depois da troca:\n");
    for(int i=0; i<TAM; i++){
        printf("%d\n", v1[i]);
    }
}
int main(){
    leitura(v1);
    imaior(v1);
    printf("Maior: %d\n", imaior(v1));
    imprime(v1);
}

