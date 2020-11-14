/*
Faça um programa que peça 10 números inteiros, calcule e mostre a quantidade de
números pares e a quantidade de números impares.
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>
int main()
{
    int pares = 0, impares = 0, numero;
    for (int i = 1; i <= 10; i++)
    {
        printf("\nDigite um numero: ");
        scanf("%d", &numero);
        if ((numero % 2) == 0)
            pares++;
        else
            impares++;
    }
    printf("Pares: %d\nÍmpares: %d", pares, impares);

    return 0;
}
