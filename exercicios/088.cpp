/*
Em uma competição de ginástica, cada atleta recebe votos de sete jurados.
A melhor e a pior nota são eliminadas.
A sua nota fica sendo a média dos votos restantes.

Você deve fazer um programa que receba o nome do ginasta e as notas dos sete
jurados alcançadas pelo atleta em sua apresentação e depois informe a sua
média, conforme a descrição acima informada (retirar o melhor e o pior salto e
depois calcular a média com as notas restantes).

As notas não são informados ordenadas.
Um exemplo de saída do programa deve ser conforme o exemplo abaixo:
    Atleta: Aparecido Parente
    Nota: 9.9
    Nota: 7.5
    Nota: 9.5
    Nota: 8.5
    Nota: 9.0
    Nota: 8.5
    Nota: 9.7

    Resultado final:
    Atleta: Aparecido Parente
    Melhor nota: 9.9
    Pior nota: 7.5
    Média: 9,04
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NOTAS 7
#define TAMANHO_DO_NOME 30

struct atleta
{
    char nome[TAMANHO_DO_NOME];
    float notas[NOTAS];
    float media;
    struct atleta *atleta_anterior;
};

/**
 * Compara dois elementos para ver qual é o maior
 *
 * @param `elem1` O primeiro elemento a ser comparado
 * @param `elem2` O segundo elemento a ser comparado
 * @return 1 se o primeiro elemento é maior, -1 se o segundo ou 0 se são iguais
 *
 */
int compare(const void *elem1, const void *elem2)
{
    int f = *((int *)elem1);
    int s = *((int *)elem2);
    if (f > s)
        return 1;
    if (f < s)
        return -1;
    return 0;
}

int main()
{
    char nome[TAMANHO_DO_NOME];
    struct atleta *atleta_atual = NULL, *ultimo_atleta;
    while (true)
    {
        printf("\nDigite o nome do atleta ou 0 para sair: ");
        fgets(nome, TAMANHO_DO_NOME, stdin);
        if (nome[0] == '0')
            break;
        for (int i = 0; i < TAMANHO_DO_NOME; i++)
        {
            if (nome[i] == '\n')
                nome[i] = '\0';
        }

        ultimo_atleta = atleta_atual;
        atleta_atual = (struct atleta *)malloc(sizeof(struct atleta));
        atleta_atual->atleta_anterior = ultimo_atleta;
        atleta_atual->media = 0;
        strcpy(atleta_atual->nome, nome);

        for (int i = 0; i < NOTAS; i++)
        {
            printf("Nota: ");
            scanf("%f", &atleta_atual->notas[i]);
        }
        getchar();

        qsort(atleta_atual->notas,
              sizeof(atleta_atual->notas) / sizeof(*atleta_atual->notas),
              sizeof(*atleta_atual->notas), compare);

        for (int i = 1; i < (NOTAS - 1); i++)
            atleta_atual->media += atleta_atual->notas[i];
        atleta_atual->media /= (NOTAS - 2);
    }
    printf("\nResultado final:");
    while (atleta_atual != NULL)
    {
        printf("\nAtleta: %s", atleta_atual->nome);
        printf("\nMelhor nota: %.1f", atleta_atual->notas[NOTAS - 1]);
        printf("\nPior nota: %.1f", atleta_atual->notas[0]);
        printf("\nMedia: %.2f\n", atleta_atual->media);
        ultimo_atleta = atleta_atual;
        atleta_atual = atleta_atual->atleta_anterior;
        free(ultimo_atleta);
    }

    return 0;
}
