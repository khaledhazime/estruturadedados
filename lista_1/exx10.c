/*   Faça um algoritmo que simule um cronometro com horas, minutos e segundos.
     A simulação deverá mostrar no vídeo o cronometro no seguinte formato HH: MM: SS. 
     Inicialmente o cronometro será zerado ( 00: 00: 00 ), sendo que os segundos começarão 
     a ser incrementados, depois os minutos e depois as horas. 
     Lembre-se que a cada 60 segundos os minutos deverão ser incrementados, 
     depois os minutos voltarão a zero. 
     Quando as horas estiverem prestes a chegar em 25, o cronometro deverá voltar a zero ( 00: 00: 00 ).*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
int main(){
    int seg, min, hor;
    int ms = 1; //Velocidade do cronometro
    
    //Entrada de dados do cronometro
    printf("Digite a quantidade de horas\n");
    scanf("%d", &hor);
    printf("Digite a quantidade de minutos\n");
    scanf("%d", &min);
    printf("Digite a quantidade de segundos\n");
    scanf("%d", &seg);
    //Convertendo tudo para menos de 60 (para se o usuário digitar um valor maior q 60)
    //segundos
    if (seg%60==0){
        min = (min+(seg/60));
        seg = 0;
    }
    else{
        while(seg>60){
            min = (min+(seg/60));
            seg = (seg/60);
        }
    }
    //minutos
    if (min%60==0){
        hor = (hor+(min/60));
        min = 0;
    }
    else{
        while(min>60){
            hor = (hor+(min/60));
            min = (min/60);
        }
    }
    //Cronômetro (de fato)
    for (seg, min, hor; ; seg--){
        //Se todos os campos chegarem a zero, encerra o programa
        if(seg == 0 && min == 0 && hor == 0){
            system("clear");
            printf("\n00:00:00");
            printf("\nO tempo acabou\n");
            return 0;
        }
        system("clear");
        printf("\n%02d:%02d:%02d", hor, min, seg);
        sleep(ms);
        //Quando os segundos chegar a 59, incrementa 1 para os minutos e zera os segundos
        if(seg==0){
            min--;
            seg = seg+60;
        }
        //Quando os minutos chegarem em 59, incrementa 1 para as horas e tira 1 minuto
        if(min<0){
            hor--;
            min = min+60;
        }

    }
    
    return 0;
}