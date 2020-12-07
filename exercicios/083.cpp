/*
Faça um programa que leia uma quantidade indeterminada de números positivos e
conte quantos deles estão nos seguintes intervalos:
[0-25], [26-50], [51-75] e [76-100].

A entrada de dados deverá terminar quando for lido um número negativo.
*/
#include <stdio.h>
int main()
{
    int numero, range1 = 0, range2 = 0, range3 = 0, range4 = 0;

    while (true)
    {
        printf(
            "Digite um numero inteiro de 0 a 100 (ou negativo para parar): ");
        scanf("%d", &numero);
        if (numero < 0)
            break;
        if (numero <= 25)
            range1++;
        else if (numero <= 50)
            range2++;
        else if (numero <= 75)
            range3++;
        else if (numero <= 100)
            range4++;
        else
            printf("Numero invalido!\n");
    }

    printf("\nDos numeros digitados: ");
    printf("\n%d foram de [0-25]", range1);
    printf("\n%d foram de [26-50]", range2);
    printf("\n%d foram de [51-75]", range3);
    printf("\n%d foram de [76-100]", range4);
    return 0;
}
