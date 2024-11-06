#include <stdio.h>

char nomeAlunos[30][20]; // Armazena o nomes dos alunos de ate 20 caracteres
float infoAluno[30][4];  // Indice 0 = ID, Indice 1,2,3 = Notas 1,2,3
int alunosCadastrados=1;

int cadastroAluno(int alunosCadastrados2){
    alunosCadastrados++;

        // input de informacoes
        for (int i = 0; i < alunosCadastrados2; i++)
        {
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

        // output das mesmas informacoes
        for (int i = 0; i < alunosCadastrados2; i++){
            printf("Nome: %s \n", nomeAlunos[i]);
            printf("ID: %.f \n", infoAluno[i][0]);
            printf("Nota1%.2f\n", infoAluno[i][1]);
            printf("Nota2%.2f\n", infoAluno[i][2]);
            printf("Nota3%.2f\n", infoAluno[i][3]);
        }
}

void calcularMedia(){
    int id_digitado = 0;

    printf("Digite o ID do aluno:");
    scanf("%d", &id_digitado);

    for(int i = 0; i < alunosCadastrados; i++){
        
    }
    printf("%d", infoAluno[id_digitado][0]);
}

int main()
{
    cadastroAluno(alunosCadastrados);

    calcularMedia();    
}

