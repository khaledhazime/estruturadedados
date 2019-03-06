//Dado uma palavra terminada com o sinal “$”, faça um ALGORITMO para criar uma nova STRING, a ser formada com os caracteres da primeira palavra invertidos
#include <stdio.h>
int main(){
    char stra[8]="dollar$";
    char strb[8];
    //Varia a primeira string de 0 a 7, e a segunda de 7 a 0 para inverter
    for(int a=0, b=7; a<8, b>=0; a++, b--){
        strb[b]=stra[a];
    }
}