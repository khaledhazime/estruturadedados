#include <stdio.h>
typedef struct {
    int idade;
    char nome[99];
}operador;
int main(){
    operador operadores[5];
    for(int i=0; i<5; i++){
        printf("Digite o nome %d\n", i+1);
        scanf(" %s", operadores[i].nome);
        printf("Digite a idade de %s\n", operadores[i].nome);
        scanf("%d", &operadores[i].idade);
    }
}