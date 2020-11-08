/*
Faça um Programa que peça um número e informe se o número é inteiro ou decimal.
Dica: utilize uma função de arredondamento.
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>
int main()
{
    float numero;
    printf("Digite um número: ");
    scanf("%f", &numero);
    if (floor(numero) == numero)
        printf("Inteiro");
    else
        printf("Decimal");
    return 0;
}
