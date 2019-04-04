//Dado uma frase de exatamente 80 caracteres, escreva a frase de trás para frente, um caracter por linha
#include <stdio.h>
int main(){
char s[80];
printf("Digite uma frase de 80 caracteres\n");
scanf(" %s", s);
//Printa letra a letra inversamente 
for(int x=80, n=0; x>=0; x--, n++){
    printf("%d. %c\n", n, s[x]);
}
}

