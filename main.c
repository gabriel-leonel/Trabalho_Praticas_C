#include <stdio.h>

// Variaveis
char alunos[30][20]; // O segundo valor permite que receba string de ate 50 letras
int id[30];
float notas1[30];
float notas2[30];
float notas3[30];

// Funçao para cadastro de Alunos, ID, e notas 1 2 3
int cadastroAluno(){
    int qtdAlunos;
    
    printf("Quantos Alunos deseja cadastrar? ");
    scanf("%d", &qtdAlunos);

    for(int i = 0; i < qtdAlunos; i++){
        printf("Digite o primeiro nome do aluno %d: ",i+1);
        scanf("%s", alunos[i]);

        id[i] = i + 1; // Assemelha o id automaticamente

        printf("\nDigite a nota 1: ");
        scanf("%f", &notas1[i]);

        printf("\nDigite a nota 2: ");
        scanf("%f", &notas2[i]);

        printf("\nDigite a nota 3: ");
        scanf("%f", &notas3[i]);

        printf("\n");
    }
    for(int i=0;i<qtdAlunos;i++){
        printf("Aluno %d: %s\n", id[i], alunos[i]);
        printf("Nota 1: %.2f\n", notas1[i]);
        printf("Nota 2: %.2f\n", notas2[i]);
        printf("Nota 3: %.2f\n", notas3[i]);
        printf("\n");
    }
}

// Funcao para Menu com laço de repetição
int menu(){
    int escolha;

    printf("========== SISTEMA DE NOTAS ==========");

    if(id[0] == 0){
        printf("\nNenhum aluno cadastrado\n");
        cadastroAluno();
    }

    printf("\nO que deseja fazer?");
    printf("\n1- Cadastrar novo aluno");
    printf("\n2- Media do aluno especifico");
    printf("\n3- Relatorio de notas geral");
    printf("\n4- Sair \n");

    scanf("%d", &escolha);
    if(escolha == 1){
        cadastroAluno();
    }
    else if(escolha == 2){
        // Funcao Media de Aluno
    }
    else if(escolha == 3){
        // Funcao Relatorio de Notas
    }
    else if(escolha == 4){
        return 0;
    }
    else{
        printf("Opcao invalida, fechando o programa");
    }
}

int main(){
    menu();
}
// FUNCOES PENDENTES: Media de Aluno e Relatorio de Notas
