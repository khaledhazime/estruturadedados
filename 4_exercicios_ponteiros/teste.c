#include <stdio.h>
int main(){
    int *ponteiro;
    int matriz[10][10];
    int i,j;
    ponteiro = matriz[0];
    printf("%d", ponteiro);
    printf("%d", *ponteiro);
}