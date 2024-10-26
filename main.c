#include <stdio.h>

// Variaveis
int alunos[30];
int id[30];
float notas1[30];
float notas2[30];
float notas3[30];

// Funçao para cadastro de Alunos, ID, e notas 1 2 3
int cadastroAluno(){
    
    printf("Digite o nome do aluno: ");
    scanf("%d", &alunos);

    printf("Digite o ID do aluno: ");
    scanf("%d", &id);

    printf("Digite a nota 1: ");
    scanf("%f", &notas1);

    printf("Digite a nota 2: ");
    scanf("%f", &notas2);

    printf("Digite a nota 3: ");
    scanf("%f", &notas3);

}

// Funcao para Menu com laço de repetição
int menu(){
    int escolha;

    printf("\n\n\n\n\n\n\n\n\n\n");
    printf("========== SISTEMA DE NOTAS ==========");
    printf("1- Cadastrar novo aluno");
    printf("2- Media do aluno especifico");
    printf("3- Relatorio de notas geral");
    printf("4- Sair");

    while(escolha < 4)
    {
        if(escolha == 1){
            cadastroAluno();
        }else if(escolha == 2){
            mediaAluno();
        }else if(escolha == 3){
            relatorioNotas();
        }                    
    }
}

// FUNCOES PENDENTES: Media de Aluno e Relatorio de Notas
