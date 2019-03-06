//Faça um algoritmo para ler base e altura de 50 triângulos e imprimir a sua área.
#define n 5
//Define o número de triângulos (O exercício pede 50)
#include <stdio.h>
int main(){
    int b[50], h[50], a[50], x, at=0;
    for(x=0; x<n; x++){
        printf("Digite a base do %d.o triangulo\n", x+1);
        scanf("%d", &b[x]);
        printf("Digite a altura do %d.o triangulo\n", x+1);
        scanf("%d", &h[x]);
    }
    //Armazena no vetor os valores de base e altura dos n triângulos
    printf("As áreas dos triângulos são:");
    for(x=0; x<n; x++){
        printf("%d.o : %d\n", x+1, (b[x]*h[x])/2);
        //Printa as áreas de todos os triângulos
        at = at+((b[x]*h[x])/2);
        //Calcula a área total
    }
    printf("A área total é %d\n", at);
}