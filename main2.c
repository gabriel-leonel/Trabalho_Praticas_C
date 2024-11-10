#include <stdio.h>

int menu();

char nomeAlunos[30][20];
float infoAluno[30][4];
int alunosCadastrados = 0;

void cadastroAluno()
{
    if (alunosCadastrados >= 30)
    {
        printf("Quantidade máxima de alunos cadastrados.\n");
        return;
    }

    printf("Digite o nome do aluno: ");
    scanf("%s", nomeAlunos[alunosCadastrados]);
    printf("Digite o ID do aluno: ");
    scanf("%f", &infoAluno[alunosCadastrados][0]);
    printf("Digite a primeira nota: ");
    scanf("%f", &infoAluno[alunosCadastrados][1]);
    printf("Digite a segunda nota: ");
    scanf("%f", &infoAluno[alunosCadastrados][2]);
    printf("Digite a terceira nota: ");
    scanf("%f", &infoAluno[alunosCadastrados][3]);

    printf("\nAluno cadastrado com sucesso!\n");
    printf("\nNome: %s \n", nomeAlunos[alunosCadastrados - 1]);
    printf("ID: %.f \n", infoAluno[alunosCadastrados - 1][0]);
    printf("Nota1: %.2f\n", infoAluno[alunosCadastrados - 1][1]);
    printf("Nota2: %.2f\n", infoAluno[alunosCadastrados - 1][2]);
    printf("Nota3: %.2f\n", infoAluno[alunosCadastrados - 1][3]);

    alunosCadastrados++;
    menu();
}

void calcularMedia()
{
    int id_digitado = 0;

    printf("Digite o ID do aluno:");
    scanf("%d", &id_digitado);

    for (int i = 0; i < alunosCadastrados; i++)
    {
        if (infoAluno[i][0] == id_digitado)
        {
            float media = (infoAluno[i][1] + infoAluno[i][2] + infoAluno[i][3]) / 3.0;
            printf("A media do aluno com ID %d e: %.2f\n", id_digitado, media);
            return;
        }
    }
}

float relatorioGeral()
{
    float somaMedias = 0;
    if (alunosCadastrados > 0)
    {
        for (int i = 0; i < alunosCadastrados; i++) // repete de acordo co o numero de alunos
        {
            float mediaAluno = (infoAluno[i][1] + infoAluno[i][2] + infoAluno[i][3]) / 3; // pega a media de cada aluno
            somaMedias += mediaAluno;
        }

        float mediaGeral = somaMedias / alunosCadastrados; // media geral para calcular

        printf("A media geral da turma e: %.2f\n", somaMedias / alunosCadastrados);

        printf("\nAlunos acima da media:\n");
        for (int i = 0; i < alunosCadastrados; i++) // repete de acordo com o numero de alunos
        {
            float mediaAluno = (infoAluno[i][1] + infoAluno[i][2] + infoAluno[i][3]) / 3.0; // pega a media do aluno
            if (mediaAluno > mediaGeral)                                                    // se estiver abaixo da me
            {
                printf("%s - Media: %.2f\n", nomeAlunos[i], mediaAluno);
            }
        }

        printf("\nAlunos abaixo da media:\n");
        for (int i = 0; i < alunosCadastrados; i++) // bloco de codigo igual porem comparando abaixo da media geral
        {
            float mediaAluno = (infoAluno[i][1] + infoAluno[i][2] + infoAluno[i][3]) / 3.0;
            if (mediaAluno < mediaGeral)
            {
                printf("%s - Media: %.2f\n", nomeAlunos[i], mediaAluno);
            }
        }
    }
    else
    {
        printf("Nenhum aluno cadastrado.\n");
    }
    menu();
}

int menu()
{
    int escolha;

    printf("\nO que deseja fazer?");
    printf("\n1- Cadastrar novo aluno");
    printf("\n2- Media do aluno especifico");
    printf("\n3- Relatorio de notas geral");
    printf("\n4- Sair \n");

    scanf("%d", &escolha);
    if (escolha == 1)
    {
        cadastroAluno();
    }
    else if (escolha == 2)
    {
        calcularMedia();
    }
    else if (escolha == 3)
    {
        relatorioGeral();
    }
    else if (escolha == 4)
    {
        printf("Saindo do programa.\n");
    }
    else
    {
        printf("Opcao invalida, fechando o programa.\n");
    }
}

int main()
{
    menu();
}
