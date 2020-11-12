/*
Faça um programa que leia 5 números e informe a soma e a média dos números.
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>
int main()
{
    float total = 0.0, aux;
    for (int i = 0; i < 5; i++)
    {
        printf("\nDigite um numero: ");
        scanf("%f", &aux);
        total += aux;
    }

    printf("\nA média é %f", total / 5);
    return 0;
}
