#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    char c;
    int pos = 0;
    printf("Insira uma string\n");
    scanf("%s", s);
    printf("Insira um caractere\n");
    scanf(" %c", &c);
    pos = strchr(s+3,c) - s;
   
    if(pos>strlen(s)){
     printf("Não existe\n");
    }
    else{
     printf("A primeira posição é %d\n", pos+1);
    }
}