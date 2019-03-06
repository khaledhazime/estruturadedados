//Faça um algoritmo para ler base e altura de 50 triângulos e imprimir a sua área.
#define n 5
#include <stdio.h>
int main(){
    int b[50], h[50], a[50], x, at=0;
    for(x=0; x<n; x++){
        printf("Digite a base do %d.o triangulo\n", x+1);
        scanf("%d", &b[x]);
        printf("Digite a altura do %d.o triangulo\n", x+1);
        scanf("%d", &h[x]);
    }
    printf("As áreas dos triângulos são:");
    for(x=0; x<n; x++){
        printf("%d.o : %d\n", x+1, (b[x]*h[x])/2);
        at = at+((b[x]*h[x])/2);
    }
    printf("A área total é %d\n", at);
}