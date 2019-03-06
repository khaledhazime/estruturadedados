//Faça um algoritmo para somar os números pares < 1000 e ao final imprimir o resultado.
#include <stdio.h>
int main(){
    int x=0, r=0;
    for(x=0; x<1000;x++){
        if(x%2==0){
            r = r+x;
        }
    }
    printf("O resultado é: %d\n", r);
}