/*
Altere o programa anterior, intercalando 3 vetores de 10 elementos cada.
*/
#include <stdio.h>
#define ELEMENTOS 10
int main()
{
    int vetor1[ELEMENTOS];
    int vetor2[ELEMENTOS];
    int vetor3[ELEMENTOS];
    int vetor4[ELEMENTOS * 2];
    for (int i = 0; i < ELEMENTOS; i++)
    {
        printf("Entre com o %do numero inteiro para o vetor 1: ", i + 1);
        scanf("%d", &vetor1[i]);
    }
    for (int i = 0; i < ELEMENTOS; i++)
    {
        printf("Entre com o %do numero inteiro para o vetor 2: ", i + 1);
        scanf("%d", &vetor2[i]);
    }
    for (int i = 0; i < ELEMENTOS; i++)
    {
        printf("Entre com o %do numero inteiro para o vetor 3: ", i + 1);
        scanf("%d", &vetor3[i]);
    }
    for (int i = 0, j = 0; i < ELEMENTOS; i++, j += 3)
    {
        vetor4[j] = vetor1[i];
        vetor4[j + 1] = vetor2[i];
        vetor4[j + 2] = vetor3[i];
    }
    printf(
        "\nO vetor com os elementos intercalados dos vetores 1, 2 e e eh:\n");
    for (int i = 0; i < ELEMENTOS * 3; i++)
        printf("%d ", vetor4[i]);

    return 0;
}
