//Integrantes do grupo: Lucas Winicius da Silva, Caio Cunha Neves,Gabrielly Carolina de Castro Paula, Jhonatan Novais de Macedo, Joao Mateus Benedito da Cruz e Gabriel Leonel Santos
#include <stdio.h>
#include <string.h> // Para usar strcpy
#include <limits.h> // Lib para usar valor maximo int

char nomeAlunos[30][20]; // Armazena o nomes dos alunos de ate 20 caracteres
float infoAluno[30][4];  // Indice 0 = ID, Indice 1,2,3 = Notas 1,2,3
int alunosCadastrados = 0; // Quantidade de aluno

// Cadastro de aluno, armazenar nome em nomeAlunos, 
int cadastroAluno(){
    int quantidade;
    printf("Quantos alunos deseja cadastrar? ");
    scanf("%d", &quantidade);   
    
    for (int i = alunosCadastrados; i < alunosCadastrados + quantidade; i++) {
        printf("Digite o nome do aluno %d: ", i + 1);
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

    alunosCadastrados += quantidade;
}

// Calcular média por aluno
void calcularMedia(){
    float id_digitado = 0;
    printf("\n");
// pedir o id para calcular media 
    printf("Digite o ID do aluno para calcular a media: ");
    scanf("%f", &id_digitado);

// Laço de repetição para media do if digitado
    for(int i = 0; i < alunosCadastrados; i++){
        if(infoAluno[i][0] == id_digitado){
            float media = (infoAluno[i][1] + infoAluno[i][2]+ infoAluno[i][3])/3;
            printf("Media do aluno %s (ID: %.0f): %.2f\n", nomeAlunos[i], infoAluno[i][0], media);
            return;
        }
    }
    printf("Aluno com ID %.0f nao encontrado!\n", id_digitado);
}

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

// Função para calcular a maior e a menor nota
float maiorNota(){
    if (alunosCadastrados == 0) {
        printf("Nao ha alunos cadastrados para calcular as maiores e menores notas. \n");
        return 0;
    }
  
    float maior_nota = 0;

    // Calculo para maior nota da turma
    for(int i = 0; i < alunosCadastrados; i++){
        for(int j = 0; j <= 3; j++){
            if(infoAluno[i][j] > maior_nota){
                maior_nota = infoAluno[i][j];
            }
        }      
    }

    return maior_nota;
}

float menorNota(){
    float menor_nota = 101.0;

    if (alunosCadastrados == 0) {
        printf("Nao ha alunos cadastrados para calcular as maiores e menores notas. \n");
        return 0;
    }

    // Calculo para menor nota da turma
    for(int i = 0; i < alunosCadastrados; i++){
        for(int j = 0; j <= 3; j++){
            if (infoAluno[i][j] < menor_nota){
                menor_nota = infoAluno[i][j];
            } 
        }
    }

    return menor_nota;
}

void calcularMediaTurma(){
    //Retorna invalido caso nao tenha alunos cadastrados
    if (alunosCadastrados == 0){
        printf("Nao ha alunos cadastrados para calcular as medias. \n");
    }
    //realiza o calculo da media de notas de todos os alunos
    float somaMed= 0;
    printf("\nMedia de todos cadastrados da turma: ");
    for(int i = 0; i < alunosCadastrados; i ++) {
        float media_turma = (infoAluno[i][1] + infoAluno[i][2] + infoAluno[i][3])/3;
    somaMed += media_turma;
    }
    //imprime na tela a media geral da tu
    printf("%.2f\n", somaMed / alunosCadastrados);
    printf("\n");
}

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
        for (int i = 0; i < alunosCadastrados; i++) // repete de acordo com o numero de alunos
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
            if (mediaAluno > mediaGeral)                                                    // se estiver abaixo da media
            {
                printf("ID:[%0.f] %s - Media: %.2f\n", infoAluno[i][0] , nomeAlunos[i], mediaAluno);
            }
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
                printf("ID:[%0.f] %s - Media: %.2f\n", infoAluno[i][0] , nomeAlunos[i], mediaAluno);
                printf("%s - Media: %.2f\n", nomeAlunos[i], mediaAluno);
            }
        }
    }
    else
    {
        printf("Nenhum aluno cadastrado.\n");
    }
    printf("\n");

    // Exibir menor nota da turma
    printf("Menor nota da turma: %.2f", maiorNota());
    printf("\n");

    // Exibir maior nota da turma
    printf("Menor nota da turma: %.2f", menorNota());
    printf("\n");
}

// Função para exibir o menu e gerenciar as opções
void menu() {
    int escolha;
    do {
        printf("\n---- SISTEMA DE NOTAS ----\n");
        printf("1. Cadastrar alunos\n");
        printf("2. Calcular media de um aluno\n");
        printf("3. Calcular media de todos os alunos\n");
        printf("4. Exibir relatorio completo\n");
        printf("5. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &escolha);

        switch (escolha) {
            case 1:
                cadastroAluno();
                break;
            case 2:
                calcularMedia();
                break;
            case 3:
                calcularMediaTurma();
                break;
            case 4:
                relatorioGeral();
                break;
            case 5:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
                break;
        }
    } while (escolha != 5);
}

int main() {
    // Exibir o menu e controlar a execução
    menu();
    return 0;
=======
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
