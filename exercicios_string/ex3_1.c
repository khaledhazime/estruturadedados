/*3) Escreva uma função que receba uma string s e inteiros positivos i e j e devolva uma 
string com o mesmo conteúdo que o segmento s[i..j]. Escreva duas versões: na primeira, 
sua função não deve alocar novo espaço e pode alterar a string s que recebeu;*/
#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    int i,j, tam, x,y;
    printf("Digite uma string\n");
    scanf("%s", s);
    printf("Digite um valor para i\n");
    scanf("%d", &i);
    printf("Digite um valor para j\n");
    scanf("%d", &j);
    tam = strlen(s);
    for(x=0, y=i-1; y<j; y++, x++){
        s[x] = s[y];
    }
    s[x] = '\0';
    printf("%s", s);
    printf("\n");
}