/*Fazer um algoritmo que calcule  escreva a soma dos 50 primeiros termos das seguinte série:
    1000/1 - 997/2 + 994/3 - 991/4  */
#include <stdio.h>
int main(){
    int n=0;
    float dividendo, divisor, result = 0;
    /* Estabelece o n como zero, variando até 50
        Dividendo como 1000, diminuindo 3 todo loop (1000, 997, 998)
        Divisor como 1, somando 1 todo loop (1, 2, 3, 4)
        Quando o n é par, ele soma no resultado
        Quando o n é impar, ele diminui no resultado */
    for(n = 0, dividendo=1000, divisor = 1; n<=50; n++, dividendo-3, divisor++){
        if(n%2==0){
            result = result + dividendo/divisor;
        }
        else{
            result = result - dividendo/divisor;
        }
    }
    printf("O resultado é: %.2f\n", result);
}