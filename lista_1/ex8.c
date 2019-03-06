//Dado um conjunto de n registros cada registro contendo um valor real, faça um algoritmo que calcule a média dos valores maiores que 4.
#define n 5
#include <stdio.h>
int main(){
    int v[n], soma=0, media, num=0;
    //Coloca os valores numa string de n elementos
    for (int x=0; x<n; x++){
        printf("Digite o %d.o valor\n", x+1);
        scanf("%d", &v[x]);
        //Se o valor for maior que 4 adiciona à soma e acrescenta 1 ao contador
        if(v[x]>4){
            soma = soma + v[x];
            num++;
        }
    }
    //Calcula a média
    media = soma/num;
    printf("A média é %d\n", media);
}