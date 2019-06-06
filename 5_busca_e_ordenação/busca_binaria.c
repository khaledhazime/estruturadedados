#include <stdio.h>
void BUSCA(int *vetor, int elemento_procurado, int tamanho_do_vetor){
    int inicio = 0, fim = tamanho_do_vetor, meio;
    for(int i=inicio; i<fim; ){
        meio = (inicio + fim)/2;
        printf("meio = %d° posicao\n", meio);
        if(elemento_procurado==vetor[meio]){
            printf("O elemento %d está na posição %d do vetor", elemento_procurado, meio);
            break;
        }
        else if(elemento_procurado<vetor[meio]){
            printf("%d é menor que o elemento do meio (%d)\n", elemento_procurado, vetor[meio]);
            fim = meio;
        }
        else if(elemento_procurado>vetor[meio]){
            printf("%d é maior que o elemento do meio (%d)\n", elemento_procurado, vetor[meio]);
            inicio = meio;
        }
    }
}
int main(){
    int vetor[15]={10, 24, 30, 80, 109, 189, 386, 450, 490, 800, 801, 843, 910, 930, 940};
    int tamanho_do_vetor = 15;
    int elemento_procurado = 30;
    BUSCA(vetor, elemento_procurado, tamanho_do_vetor);
}