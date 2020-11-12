/*
Faça um programa que receba dois números inteiros e gere os números inteiros
que estão no intervalo compreendido por eles.
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>
int main()
{
    int primeiro_numero, segundo_numero;
    printf("\nDigite um numero: ");
    scanf("%d", &primeiro_numero);
    getchar();
    printf("\nDigite um numero: ");
    scanf("%d", &segundo_numero);
    for (int i = primeiro_numero + 1; i < segundo_numero; i++)
        printf("\n%d", i);

    return 0;
}
