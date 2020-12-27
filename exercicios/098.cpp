/*
Faça um Programa que leia um vetor de 5 números inteiros, mostre a soma, a
multiplicação e os números.
*/
#include <stdio.h>
int main()
{
    int inteiros[5];
    int soma = 0;
    int multiplicacao = 1;
    for (int i = 0; i < 5; i++)
    {
        printf("Digite o %do inteiro: ", i + 1);
        scanf("%d", &inteiros[i]);
        soma += inteiros[i];
        multiplicacao *= inteiros[i];
    }
    printf("\nNumeros digitados:\n");

    for (int i = 0; i < 5; i++)
        printf("%d ", inteiros[i]);
    printf("\nA soma dos numeros eh %d", soma);
    printf("\nA multiplicacao dos numeros eh %d", multiplicacao);
    return 0;
}
