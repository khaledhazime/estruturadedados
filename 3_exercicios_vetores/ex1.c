/*
1) Fazer um programa contendo funções para:

a) ler um vetor onde cada elemento (vagas[i]) representa o número de vagas do curso i.

b) ler um outro vetor onde cada elemento (candidatos[i]) representa o número de candidatos inscritos para o curso i.

c) criar um terceiro vetor contendo o número de candidatos por vaga

d) receber o índice de um curso e retornar o número de candidatos por vaga desse curso

e) retornar o índice do curso de maior concorrência*/
#include <stdio.h>
//Letra a)
int vagas(int *v, int n){
    for(int i=0; i<n; i++){
        printf("Digite o numero de vagas do curso %d\n", i+1);
        scanf("%d", &v[i]);
    }
}
//Letra b)
int candidatos(int *c, int n){
    for(int i=0; i<n; i++){
        printf("Digite o numero de candidatos para o curso %d\n", i+1);
        scanf("%d", &c[i]);
    }
}
//Letra c)
float calculo(float *cpv, int *c,int *v, int n){
    for(int i=0; i<n; i++){
        cpv[i] = (c[i]/v[i]);
    }
}
//Letra d)
int indice(int i, float *cpv){
    printf("O numero de candidatos por vaga do curso %d é: %.2f candidatos por vaga\n", i+1, cpv[i]);
}
//Letra e)
int mc(float *cpv, int n){
    int maior, x;
    for(int i=0; i<n; i++){
        if (cpv[i]>maior){
            maior = i;
    }
    return (maior+1);
    }
}
int main(){
    int v[100], c[100], n, i;
    float cpv[100];
    printf("Deseja digitar quantos cursos?\n");
    scanf("%d", &n);
    vagas(v, n);
    candidatos(c,n);
    calculo(cpv, c, v, n);
    printf("Digite o indíce do curso\n");
    scanf("%d", &i);
    i-=i;
    indice(i, cpv);
    printf("O curso com maior numero de candidatos por vaga eh o curso %i, que possui %.2f\n", mc(cpv, n), cpv[mc(cpv, n)]);
    
}