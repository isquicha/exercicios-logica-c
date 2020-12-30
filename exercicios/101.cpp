/*
Faça um Programa que leia dois vetores com 10 elementos cada.
Gere um terceiro vetor de 20 elementos, cujos valores deverão ser compostos
pelos elementos intercalados dos dois outros vetores.
*/
#include <stdio.h>
#define ELEMENTOS 10
int main()
{
    int vetor1[ELEMENTOS];
    int vetor2[ELEMENTOS];
    int vetor3[ELEMENTOS * 2];
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
    for (int i = 0, j = 0; i < ELEMENTOS; i++, j += 2)
    {
        vetor3[j] = vetor1[i];
        vetor3[j + 1] = vetor2[i];
    }
    printf("\nO vetor com os elementos intercalados dos vetores 1 e 2 eh:\n");
    for (int i = 0; i < ELEMENTOS * 2; i++)
        printf("%d ", vetor3[i]);

    return 0;
}
