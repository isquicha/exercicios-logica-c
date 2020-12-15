/*
Em uma competição de salto em distância cada atleta tem direito a cinco saltos.
No final da série de saltos de cada atleta, o melhor e o pior resultados são
eliminados.

O seu resultado fica sendo a média dos três valores restantes.
Você deve fazer um programa que receba o nome e as cinco distâncias alcançadas
pelo atleta em seus saltos e depois informe a média dos saltos conforme a
descrição acima informada (retirar o melhor e o pior salto e depois
calcular a média).

Faça uso de uma lista para armazenar os saltos.
Os saltos são informados na ordem da execução, portanto não são ordenados.
O programa deve ser encerrado quando não for informado o nome do atleta.
A saída do programa deve ser conforme o exemplo abaixo:
    Atleta: Rodrigo Curvêllo

    Primeiro Salto: 6.5 m
    Segundo Salto: 6.1 m
    Terceiro Salto: 6.2 m
    Quarto Salto: 5.4 m
    Quinto Salto: 5.3 m

    Melhor salto:  6.5 m
    Pior salto: 5.3 m
    Média dos demais saltos: 5.9 m

    Resultado final:
    Rodrigo Curvêllo: 5.9 m
*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TAMANHO_DO_NOME 30

struct atleta
{
    char nome[TAMANHO_DO_NOME];
    float saltos[5];
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
    struct atleta *atleta_atual = NULL, *ultimo_atleta = NULL;

    while (true)
    {
        printf(
            "Digite o nome do atleta (ou enter para encerrar o programa): ");
        fgets(nome, TAMANHO_DO_NOME, stdin);
        if (nome[0] == '\n')
            break;
        for (int i = 0; i < TAMANHO_DO_NOME; i++)
        {
            if (nome[i] == '\n')
            {
                nome[i] = '\0';
                break;
            }
        }

        ultimo_atleta = atleta_atual;
        atleta_atual = (struct atleta *)malloc(sizeof(struct atleta));
        atleta_atual->atleta_anterior = ultimo_atleta;
        atleta_atual->media = 0.0;

        strcpy(atleta_atual->nome, nome);
        for (int i = 0; i < 5; i++)
        {
            printf("Distancia do salto n%d: ", i + 1);
            scanf("%f", &atleta_atual->saltos[i]);
        }
        getchar();
        qsort(atleta_atual->saltos,
              sizeof(atleta_atual->saltos) / sizeof(*atleta_atual->saltos),
              sizeof(*atleta_atual->saltos), compare);

        for (int i = 1; i < 4; i++)
            atleta_atual->media += atleta_atual->saltos[i];
        atleta_atual->media /= 3.0;

        printf("\nMelhor salto: %.1f m", atleta_atual->saltos[4]);
        printf("\nPior salto: %.1f m", atleta_atual->saltos[0]);
        printf("\nMedia dos demais saltos: %.1f m\n", atleta_atual->media);
    }

    printf("\n\nResultado final");
    while (true)
    {
        printf("\n%s: %.1f m", atleta_atual->nome, atleta_atual->media);
        ultimo_atleta = atleta_atual->atleta_anterior;
        free(atleta_atual);
        if (ultimo_atleta == NULL)
            break;

        atleta_atual = ultimo_atleta;
    }
    return 0;
}
