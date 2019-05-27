#include <stdio.h>
void inicializar(int *matriz){
    for(int i=0; i<100; i++, matriz++){
        matriz = 0;
    }
}
int main(){
    int matriz[10][10];
    inicializar(matriz);
}