/* 4) Escreva uma função que receba strings s e t e decida se s é um segmento de t.
Escreva um programa que use a função para contar o número de ocorrências de uma string s
em uma string t. */

#include <stdio.h>
#include <string.h>
int main(){
    char s[100], p[100];
    int c=0, t=0;
    printf("Digite a primeira palavra\n");
    scanf(" %s", p);
    printf("Digite a segunda palavra\n");
    scanf(" %s", s);
    //Cria um vetor temporário do tamanho da segunda string para auxílio
    int temp[strlen(s)];
    //Inicia a verificação

    //1) Se a segunda string for maior que a primeira, exibe um erro e encerra o programa;
    if(strlen(s)>strlen(p)){
        printf("Erro.\n");
        return 0;
    }
    //2) Se a string for exatamente igual a frase, conta 1 ocorrência e encerra o programa:
    /*if(strcmp(s,p)){
        c++;
        printf("%d", c);
        return 0;
    }*/
    //3) Percorre a primeira string até encontrar uma letra igual à segunda string:
    for(int i=0, aux; i<(strlen(p)-strlen(s)); i++){
        //Se encontra a primeira letra, verifica se na sequência vem as letras seguintes
        if(p[i]==s[0]){
            aux = i;
            //Zera todos os valores da variável temporária
            for(int k =0; k<strlen(s); k++){
                temp[k]=0;
            }
            //Verifica se a sequência é igual à da segunda string
            for(int j=0; j<strlen(s); j++){
                if(s[j]==p[aux]){
                    //Caso for igual, insere 1 no vetor temporário
                    t=1;
                    aux++;
                }
                else{
                   t=0;
                   j=strlen(s);
                }
            }
        }
        //Verifica se o vetor temporário é composto apenas por números 1:
      /*  for(int i=0, j=0; i<strlen(p); i++){
            if(temp[i]==1){
                j++;
            }
            if(j==strlen(s)){
               c++; 
            } 
        }*/
        if(t){
            c++;
        }
    }
    printf("O numero de ocorrências é: %d\n", c);
}