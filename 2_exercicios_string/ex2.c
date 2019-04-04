/*2) Escreva uma função que receba strings x e s e 
devolva o índice da posição a partir da qual x 
ocorre em s*/
#include <stdio.h>
#include <string.h>

int main(){
    char s[100], p[100];
    int pos;
    int indice, tam;
    printf("Digite a primeira string\n");
    scanf("%s", s);
    printf("Digite a segunda string\n");
    scanf("%s", p);
    pos = strstr(s,p) - s;
    tam = strlen(p);
    if(pos > strlen(s)){
        printf("Não existe\n");
    }
    else{
        printf("A segunda string está dentro da primeira entre as posições %d e %d\n", pos+1, (pos+1)+(tam-1));
    }
}