/*Faça um algoritmo para:
   a) Ler um valor x qualquer
   b) Calcular Y = ( x+1)+(x+2)+(x+3)+(x+4)+(x+5)+...(x+100).*/
#include <stdio.h>
int main(){
    int x, n, y=0;
    printf("Digite um valor pra x\n");
    scanf("%d", &x);
    for(n=1; n<=100; n++){
        y = y + (x+n);
    }
    printf("O valor de y é: %d\n", y);
}