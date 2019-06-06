#include <stdio.h>
void PREENCHE_VETOR(int *vetor, int tamanho_do_vetor){
    printf("Digite os valores do seu vetor\n");
    for(int i=0; i<tamanho_do_vetor; i++){
        scanf("%d", &vetor[i]);
    }
}
void ORGANIZA(int *vetor, int tamanho_do_vetor){
    int menor_elemento=vetor[0], temporario;
    for(int i=0; i<tamanho_do_vetor; i++){
        for(int j=i+1; j<tamanho_do_vetor; j++){
            if(vetor[i]>vetor[j]){
                temporario = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temporario;
            }
        }
    } 
}
void IMPRIME(int *vetor, int tamanho_do_vetor){
    printf("\n");
    for(int i=0; i<tamanho_do_vetor; i++){
        printf("%d ", vetor[i]);
    }
    printf("\n");
}
void BUSCA(int *vetor, int tamanho_do_vetor){
    int elemento_buscado, inicio = 0, meio, fim = tamanho_do_vetor;
    char repetir = 's';
    while(repetir == 's'){
        printf("Digite o elemento buscado\n");
        scanf("%d", &elemento_buscado);
        for(int i=inicio; i<fim;){
            meio=(inicio+fim)/2;
            if(elemento_buscado==vetor[meio]){
                printf("O elemento %d está na posição %d do vetor\n", elemento_buscado, meio);
                break;
            }
            if(elemento_buscado>vetor[meio]){
                inicio = meio;
            }
            else if(elemento_buscado<vetor[meio]){
                fim = meio;
            }
        }
        printf("Deseja buscar outro elemento? (s/n)\n");
        scanf(" %c", &repetir);
    }
}
int main(){
    int tamanho_do_vetor;
    printf("Digite o tamanho do vetor\n");
    scanf("%d", &tamanho_do_vetor);
    int vetor[tamanho_do_vetor];
    PREENCHE_VETOR(vetor, tamanho_do_vetor);
    ORGANIZA(vetor, tamanho_do_vetor);
    IMPRIME(vetor, tamanho_do_vetor);
    BUSCA(vetor,tamanho_do_vetor);
}