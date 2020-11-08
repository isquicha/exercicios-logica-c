/*
Faça um Programa que peça um número inteiro e determine se ele é par ou impar.
Dica: utilize o operador módulo (resto da divisão).
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>
int main()
{
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%i", &numero);
    if (numero % 2 == 0)
        printf("Par");
    else
        printf("Ímpar");
    return 0;
}
