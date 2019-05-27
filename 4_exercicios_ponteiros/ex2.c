#include <stdio.h>
void inicializar(int **matriz, int linhas, int colunas){
    for(int i=0; i<linhas; i++, matriz++){
        for(int j=0; j<colunas; j++){
            matriz[i][j] = 0;
        }
    }
}
int main(){
    int matriz[10][10];
    inicializar(&matriz[0], 10, 10);
}