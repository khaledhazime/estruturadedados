//Faça um algoritmo para gerar os termos da seguinte P.G.: 3,9,27,81,...,calcule o 30º termo e calcular a soma dos termos da P.G.
#include <stdio.h>
#include <math.h>
int main(){
    float init, second, n=30, q, s, thirtyth;
    init=3; 
    //Primeiro termo da PG
    second=9; 
    //Segundo termo da PG
    q = second/init; 
    //Calculo da razão da pg
    thirtyth = init*pow(q,(n-1)); 
    //Calculo do trigésimo termo da PG
    printf("O 30.o termo é: %.2f\n", thirtyth);
    s = (init*(pow(q, n)-1)/(q-1)); 
    //Calculo da soma da PG
    printf("A soma da PG é: %.2f\n", s);
}