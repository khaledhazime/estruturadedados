/* Dado modelo, ano de fabricação, cor e placa de 1000 carros, faça um algoritmo que: 
    a) Imprima quantos são, da cor verde e o percentual em relação ao total.
    b) Imprima quantos foram fabricados antes de 1990 e o percentual em relação ao total.
    c) Imprima quantos são FIAT UNO e o percentual em relação ao total.
    d) Imprima quantos carros tem na placa o digito 5 e o percentual em relação ao total. Considere placas com seguinte formato “AANNNN”*/
#define numcar 10
#include <stdio.h>
int main(){
    int ctdmodelo=0, ctdcor=0, ctdplaca=0;
    char modelo[80], cor[80], placa[7];
    int ano;
    for(int x=0; x<numcar; x++){
        //Coleta os dados dos carros
        printf("Digite o modelo do %d.o carro\n", x+1);
        scanf(" %s", modelo);
        printf("Digite a cor do %d.o carro\n");
        scanf(" %s", cor);
        printf("Digite a placa do %d.o veículo\n");
        scanf(" %s", placa);
        //Conta caracteres
        for(int y=0; y<80; y++){
            if(modelo[y]=="\0"){
                break;
            }
            ctdmodelo++;
        }
        

    }
    

}