/*12) Escreva um algoritmo para dizer quais os números primos entre 1 e 1000.
 Entende-se por número primo aquele que só possui dois divisores, 1 e ele próprio.*/
#include <stdio.h>
#include <stdlib.h>

int main() {
  
  int i, x; 
  int c = 0;
 //Varia o número de 1 até 1000 
  for(x=1; x<=1000; x++){
      //Inicializa o contador em 0 em cada loop
      c = 0;
      //Varia o divisor de 1 até o x
  for (i = 1; i <= x; i++) {
    //Se o resto da divisão for 0, acrescenta 1 no contador
    if (x % i == 0) { 
     c++;
    }
  }
    //Se o contador for menor ou igual a 2, é primo
  if (c <= 2){
    printf("O número %d é primo \n", x);
  }
  }
}