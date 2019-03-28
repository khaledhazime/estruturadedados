/*3) Escreva uma função que receba uma string s e inteiros positivos i e j e devolva uma 
string com o mesmo conteúdo que o segmento s[i..j]. Escreva duas versões: na segunda, 
sua função deve devolver uma cópia do segmento s[i..j] e não pode alterar a string s que recebeu */
#include <stdio.h>
#include <string.h>
int main(){
    char s[100], cp[100];
    int i,j, tam, x,y;
    printf("Digite uma string\n");
    scanf("%s", s);
    printf("Digite um valor para i\n");
    scanf("%d", &i);
    printf("Digite um valor para j\n");
    scanf("%d", &j);
    tam = strlen(s);
    for(x=0, y=i-1; y<j; y++, x++){
        cp[x] = s[y];
    }
    cp[x] = '\0';
    printf("%s", cp);
    printf("\n");
    printf("%s", s);
    printf("\n");
}