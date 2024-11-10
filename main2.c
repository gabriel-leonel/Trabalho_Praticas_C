#include <stdio.h>

int menu();

char nomeAlunos[30][20]; 
float infoAluno[30][4];  
int alunosCadastrados = 0;

int cadastroAluno(int alunosCadastrados) {
    alunosCadastrados++;
    if (alunosCadastrados >= 30) {
        printf("Quantidade máxima de alunos cadastrados.\n");
        menu();
    } else {
        for (int i = 0; i < alunosCadastrados; i++) {
            printf("Digite o nome do aluno: ");
            scanf("%s", nomeAlunos[i]);
            printf("Digite o ID do aluno: ");
            scanf("%f", &infoAluno[i][0]);
            printf("Digite a primeira nota: ");
            scanf("%f", &infoAluno[i][1]);
            printf("Digite a segunda nota: ");
            scanf("%f", &infoAluno[i][2]);
            printf("Digite a terceira nota: ");
            scanf("%f", &infoAluno[i][3]);
        }

        for (int i = 0; i < alunosCadastrados; i++) {
            printf("\n\nNome: %s \n", nomeAlunos[i]);
            printf("ID: %.f \n", infoAluno[i][0]);
            printf("Nota1: %.2f\n", infoAluno[i][1]);
            printf("Nota2: %.2f\n", infoAluno[i][2]);
            printf("Nota3: %.2f\n", infoAluno[i][3]);
        }
        menu();
    }
}

void calcularMedia() {
    int id_digitado = 0;

    printf("Digite o ID do aluno:");
    scanf("%d", &id_digitado);

    for (int i = 0; i < alunosCadastrados; i++) {
        if (infoAluno[i][0] == id_digitado) {
            float media = (infoAluno[i][1] + infoAluno[i][2] + infoAluno[i][3]) / 3.0;
            printf("A media do aluno com ID %d e: %.2f\n", id_digitado, media);
            return;
        }
    }

    printf("Aluno nao encontrado.\n");
}

int menu() {
    int escolha;

    printf("\nO que deseja fazer?");
    printf("\n1- Cadastrar novo aluno");
    printf("\n2- Media do aluno especifico");
    printf("\n3- Relatorio de notas geral");
    printf("\n4- Sair \n");

    scanf("%d", &escolha);
    if (escolha == 1) {
        cadastroAluno(alunosCadastrados);
    } else if (escolha == 2) {
        calcularMedia();
    } else if (escolha == 3) {
        printf("Relatorio de notas geral (a ser implementado).\n");
    } else if (escolha == 4) {
        printf("Saindo do programa.\n");
    } else {
        printf("Opcao invalida, fechando o programa.\n");
    }
}

int main() {    
    menu();
}
