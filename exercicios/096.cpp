/*
Faça um Programa que leia 20 números inteiros e armazene-os num vetor.
Armazene os números pares no vetor PAR e os números IMPARES no vetor impar.
Imprima os três vetores.
*/
#include <stdio.h>
#define NUMEROS 20
int main()
{
    int inteiros[NUMEROS];
    int pares[NUMEROS + 1];
    int impares[NUMEROS + 1];

    pares[NUMEROS] = 0; // Contador de numeros pares
    impares[NUMEROS] = 0;
    for (int i = 0; i < NUMEROS; i++)
    {
        printf("Digite um inteiro: ");
        scanf("%d", &inteiros[i]);
        if (inteiros[i] % 2 == 0)
        {
            pares[pares[NUMEROS]] = inteiros[i];
            pares[NUMEROS]++;
        }
        else
        {
            impares[impares[NUMEROS]] = inteiros[i];
            impares[NUMEROS]++;
        }
    }

    printf("\nInteiros\n");
    for (int i = 0; i < NUMEROS; i++)
        printf("%d ", inteiros[i]);
    printf("\nPares\n");
    for (int i = 0; i < pares[NUMEROS]; i++)
        printf("%d ", pares[i]);
    printf("\nImpares\n");
    for (int i = 0; i < impares[NUMEROS]; i++)
        printf("%d ", impares[i]);
    return 0;
}
