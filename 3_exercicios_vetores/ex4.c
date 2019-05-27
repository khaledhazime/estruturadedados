#include <stdio.h>
typedef struct{
    float x;
    float y;
    float z;
}ponto_geometrico;
int main(){
    ponto_geometrico coordenadas[10];
    for(int i=0; i<10; i++){
        printf("Digite o valor de x da %d.a coordenada\n", i+1);
        scanf("%f", &coordenadas[i].x);
        printf("Digite o valor de y da %d.a coordenada\n", i+1);
        scanf("%f", &coordenadas[i].y);
        printf("Digite o valor de z da %d.a coordenada\n", i+1);
        scanf("%f", &coordenadas[i].z);
    }    
}