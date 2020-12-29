/*
Faça um Programa que leia um vetor A com 10 números inteiros, calcule e mostre
a soma dos quadrados dos elementos do vetor.
*/
#include <stdio.h>
int main()
{
    int soma_dos_quadrados = 0;
    int numero;
    for (int i = 0; i < 10; i++)
    {
        printf("Digite o %do numero inteiro: ", i + 1);
        scanf("%d", &numero);
        soma_dos_quadrados += numero * numero;
    }
    printf("\nA soma dos quadrados dos numeros digitados eh %d",
           soma_dos_quadrados);
    return 0;
}
