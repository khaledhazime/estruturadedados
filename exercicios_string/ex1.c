/*1) Escreva uma função que receba uma string s e 
um caractere c e devolva o índice da primeira 
posição de s que é igual a c.*/
#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    char c;
    int pos = 0, p;
    printf("Insira uma string\n");
    scanf("%s", s);
    printf("Insira um caractere\n");
    scanf(" %c", &c);
    printf("Insira uma posicao\n");
    scanf(" %d", &p);
    pos = strchr(s+p,c) - s;
   
    if(pos>strlen(s)){
     printf("Não existe\n");
    }
    else{
     printf("A primeira posição é %d\n", pos+1);
    }
}