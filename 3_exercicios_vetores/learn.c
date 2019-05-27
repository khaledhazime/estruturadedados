/*
1) Fazer um programa contendo funções para:

a) ler um vetor onde cada elemento (vagas[i]) representa o número de vagas do curso i.

b) ler um outro vetor onde cada elemento (candidatos[i]) representa o número de candidatos inscritos para o curso i.

c) criar um terceiro vetor contendo o número de candidatos por vaga

d) receber o índice de um curso e retornar o número de candidatos por vaga desse curso

e) retornar o índice do curso de maior concorrência*/

#include <stdio.h>
#define TAMANHO 100
void VAGAS(int *vetor_vagas, int numero_de_cursos){
    for(int i=0; i<numero_de_cursos; i++){
        printf("Digite o numero de vagas do curso[%d]\n", i);
    }
}
int main(){
    int vetor_vagas[TAMANHO], numero_de_cursos;
    printf("Quantos cursos voce deseja digitar?\n");
    scanf("%d", &numero_de_cursos);
    VAGAS(vetor_vagas, numero_de_cursos);
}