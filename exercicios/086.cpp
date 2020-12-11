/*
Desenvolver um programa para verificar a nota do aluno em uma prova com 10
questões, o programa deve perguntar ao aluno a resposta de cada questão e ao
final comparar com o gabarito da prova e assim calcular o total de acertos e a
nota (atribuir 1 ponto por resposta certa).

Após cada aluno utilizar o sistema deve ser feita uma pergunta se outro aluno
vai utilizar o sistema.

Após todos os alunos terem respondido informar:
    Maior e Menor Acerto;
    Total de Alunos que utilizaram o sistema;
    A Média das Notas da Turma.
    Gabarito da Prova:
        01 - A
        02 - B
        03 - C
        04 - D
        05 - E
        06 - E
        07 - D
        08 - C
        09 - B
        10 - A

Após concluir isto você poderia incrementar o programa permitindo que o
professor digite o gabarito da prova antes dos alunos usarem o programa.
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMANHO_DO_NOME 30

struct aluno
{
    char nome[TAMANHO_DO_NOME];
    char *respostas;
    int acertos = 0;
    float nota;
};

int main()
{
    // * Variáveis "globais"
    struct aluno *alunos;
    char aluno_com_maior_acerto[TAMANHO_DO_NOME] = "";
    char aluno_com_menor_acerto[TAMANHO_DO_NOME] = "";
    char resposta_atual; // Variável auxiliar para pegar caracteres
    char *gabarito;
    int maior_acerto = 0;
    int menor_acerto;
    int numero_de_alunos = 0;
    int numero_de_questoes;
    float media_da_turma = 0.0;

    // ? O gabarito e os alunos vão ser vetores dinamicamente alocados
    // ? Não podemos usar define pois o define roda em tempo de compilação
    // ? e o usuário vai digitar quantas questões e quantos alunos são
    // ? em tempo de execução.
    // !Pesquisem sobre!
    printf("Digite o numero de questoes: ");
    scanf("%d", &numero_de_questoes);
    getchar();
    menor_acerto = numero_de_questoes;
    // ? Aloca o tamanho de um char * o número de questões para o gabarito
    // ? Como o malloc retorna um ponteiro para void, convertemos ele
    // ? para um ponteiro para caracteres com o (char *)
    gabarito = (char *)malloc(sizeof(char) * numero_de_questoes);

    printf("Digite o numero de alunos: ");
    scanf("%d", &numero_de_alunos);
    getchar();
    // ? Mesma ideia de alocação que a usada para o gabarito
    alunos = (struct aluno *)malloc(sizeof(struct aluno) * numero_de_alunos);

    // * Programa
    // ? i vai de 1 até o número de questões
    for (int i = 1; i <= numero_de_questoes; i++)
    {
        printf("Digite a resposta correta da questao '%d': ", i);
        scanf("%c", &resposta_atual);
        getchar();
        // ? Garante que a resposta vai ser uma letra maiúscula
        if (resposta_atual <= 'z')
            resposta_atual += 'A' - 'a';
        // ? O gabarito pode ser acessado como se fosse um vetor
        gabarito[i - 1] = resposta_atual;
    }

    for (int i = 0; i < numero_de_alunos; i++)
    {
        // ? Limpa a tela para os alunos não verem o gabarito, nem a resposta
        // ? dos colegas
        if (!system("cls"))
            system("clear");
        printf("Digite o nome do aluno %d: ", i + 1);

        // ? Este algoritmo pega o nome dos alunos mesmo que o nome tenha
        // ? espaços em branco, e troca o enter por uma terminação de string
        // ! Pesquisem sobre!
        fgets((alunos + i)->nome, TAMANHO_DO_NOME, stdin);
        for (int j = 0; j < TAMANHO_DO_NOME; j++)
        {
            // ? As structs alocadas dinâmicamente são acessadas pela notação
            // ? de seta, e antes da seta somamos o offset do elemento
            // ? (alunos + 2)->nome por exemplo acessa o nome do terceiro
            // ? aluno (lembrando que começa do 0). O [j] depois do nome é
            // ? uma operação com vetores normais, pois queremos acessar uma
            // ? letra específica do nome.
            // ! Pesquisem sobre!
            if ((alunos + i)->nome[j] == '\n')
                (alunos + i)->nome[j] = '\0';
        }

        // ? Cria a tabela de respostas e nota do aluno, também dinâmica
        // ? afinal, não sabemos quantos alunos teremos em tempo de compilação
        (alunos + i)->respostas =
            (char *)malloc(sizeof(char) * numero_de_questoes);

        // ? A dinâmica para pegar as respostas do aluno é semelhante
        for (int j = 0; j < numero_de_questoes; j++)
        {
            printf("Digite a resposta que o aluno %s deu para a questao %d: ",
                   (alunos + i)->nome, j + 1);

            scanf("%c", &resposta_atual);
            getchar();
            if (resposta_atual <= 'z')
                resposta_atual += 'A' - 'a';
            // ? Guarda a resposta do aluno na tabela de respostas dele
            (alunos + i)->respostas[j] = resposta_atual;
        }
        (alunos + i)->acertos = 0;
    }

    if (!system("cls"))
        system("clear");

    // ? Percorre cada aluno
    for (int i = 0; i < numero_de_alunos; i++)
    {
        // ? E percorre cada uma de suas respostas
        for (int j = 0; j < numero_de_questoes; j++)
        {
            // ? Se a resposta for igual ao gabarito, aumentam os acertos
            if ((alunos + i)->respostas[j] == gabarito[j])
                (alunos + i)->acertos++;
        }

        // ? Calcula a nota do aluno e adiciona na media da turma
        (alunos + i)->nota =
            10.0 * (float)(alunos + i)->acertos / (float)numero_de_questoes;
        media_da_turma += (alunos + i)->nota;

        // ? Exibe o aproveitamento dele na prova
        printf("\nO aluno %s obteve %d acertos dentre %d", (alunos + i)->nome,
               (alunos + i)->acertos, numero_de_questoes);
        printf(" questoes e ficou com a nota %.2f", (alunos + i)->nota);

        // ? Testa se este aluno é o que mais acertou
        if ((alunos + i)->acertos > maior_acerto)
        {
            maior_acerto = (alunos + i)->acertos;
            // ? Copia o nome do aluno para a variável de aluno com maior
            // ? quantidade de acertos
            // ! Pesquisem sobre o strcpy!
            strcpy(aluno_com_maior_acerto, (alunos + i)->nome);
        }
        if ((alunos + i)->acertos < menor_acerto)
        {
            menor_acerto = (alunos + i)->acertos;
            strcpy(aluno_com_menor_acerto, (alunos + i)->nome);
        }
    }

    media_da_turma = media_da_turma / (float)numero_de_alunos;
    printf("\nO aluno com o mais acertos eh %s, ", aluno_com_maior_acerto);
    printf("com %d acertos", maior_acerto);
    printf("\nO aluno com o menos acertos eh %s, ", aluno_com_menor_acerto);
    printf("com %d acertos", menor_acerto);
    printf("\nA media da turma eh %.2f", media_da_turma);

    // ! IMPORTANTE
    // ? Libera a memória alocada dinâmicamente
    // ! Pesquisem sobre!
    for (int i = 0; i < numero_de_alunos; i++)
        free((alunos + i)->respostas);
    free(gabarito);
    free(alunos);

    return 0;
}
