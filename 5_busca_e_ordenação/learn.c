#include <stdio.h>
#include <string.h>
#define true 1
int counter=0;
typedef struct {
    char nome[900];
    int numero_de_matricula;
    int notas[4];
}dados;
void organiza(dados *dados_alunos){
    int temporario;
    char temp[900];
        for(int i=0; i<counter; i++){
        for(int j=0; j<counter; j++){
            if(dados_alunos[i].numero_de_matricula < dados_alunos[j].numero_de_matricula){
                temporario = dados_alunos[i].numero_de_matricula;
                strcpy(temp, dados_alunos[i].nome);
                dados_alunos[i].numero_de_matricula = dados_alunos[j].numero_de_matricula;
                strcpy(dados_alunos[i].nome, dados_alunos[j].nome);
                dados_alunos[j].numero_de_matricula = temporario;
                strcpy(dados_alunos[j].nome, temp);
            }
        }
    }
}  
int busca(int n, dados *dados_alunos){
    int inicio = 0, fim = counter, meio;
        for(int i=inicio; i<fim;){
            meio = (inicio+fim)/2;
            if (n == dados_alunos[meio].numero_de_matricula){
                return meio;
            }
            if(n > dados_alunos[meio].numero_de_matricula){
                inicio = meio;
            }
            if(n < dados_alunos[meio].numero_de_matricula){
                fim = meio;
            }
        }
}
void option_1(dados *dados_alunos, int i){
    int numero_de_notas;
    for(int j=0; j<i; j++){
        printf("Digite o nome do %d.o aluno\n", j+1);
        scanf(" %s", dados_alunos[counter].nome);
        printf("Digite o numero de matricula do %d.o aluno\n", j+1);
        scanf("%d", &dados_alunos[counter].numero_de_matricula);
        printf("Deseja digitar notas para o aluno? (de 0 a 4 notas)\n");
        scanf("%d", &numero_de_notas);
        for(int k=0; k<numero_de_notas; k++){
            printf("Digite a %d.a nota do %d.o aluno\n", k+1, j+1);
            scanf("%d", &dados_alunos[j].notas[k]);
        }
        counter++;
    }
}
void option_2(dados *dados_alunos){
    int escolha, numero_de_matricula;
    printf("Qual o método de busca?\
    \n1 - Nome\
    \n2 - Matricula\
    \n0 - Voltar\n");
    scanf("%d", &escolha);
    if(escolha == 1){
    }
    if(escolha == 2){
        int i;
        printf("Digite o numero de matricula do aluno procurado\n");
        scanf("%d", &numero_de_matricula);
        i = busca(numero_de_matricula, dados_alunos);
        printf("\nAluno:\nNome: %s\nMatrícula: %d\nNotas:\n", dados_alunos[i].nome, dados_alunos[i].numero_de_matricula);
        for(int j=0; j<4; j++){
            printf("%d ", dados_alunos[i].notas[j]);
        }
        printf("\n");
    }
    //if(escolha == 0) return 0;
}
void option_3(dados *dados_alunos){
    for(int i=0; i<counter; i++){
        printf("\n%d.o aluno:\
        \nNome: %s\
        \nMatrícula: %d\
        \nNotas:", i+1, dados_alunos[i].nome, dados_alunos[i].numero_de_matricula);
        for(int j=0; j<4; j++){
            printf("%d ", dados_alunos[i].notas[j]);
        }
        printf("\n");
    }
}
int main(){
    int menu_option, numero_de_alunos, added=0;
    dados dados_alunos[1000];
    while(true){
        printf("\nControle de alunos\
        \n1 - Adicionar dados dos alunos\
        \n2 - Consultar informações de um aluno\
        \n3 - Exibir todos os alunos\
        \n4 - Alterar os dados de um aluno\
        \n0 - Sair do programa\n\n");

        scanf("%d", &menu_option);
        if(menu_option==0) break;
        if(menu_option==1){
            printf("Quantos alunos deseja adicionar?\n");
            scanf("%d", &numero_de_alunos);
            option_1(dados_alunos, numero_de_alunos);
        }
        organiza(dados_alunos);
        if(menu_option==2) option_2(dados_alunos);
        if(menu_option==3) option_3(dados_alunos);        
    }
}