/*
Faça um Programa que peça dois números e imprima a soma.
*/
#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
int main()
{
    float num1, num2, soma;
    printf("Digite um numero: ");
    scanf("%f", &num1);
    printf("Digite outro numero: ");
    getchar();
    scanf("%f", &num2);
    soma = num1 + num2;
    printf("A soma eh: %f", soma);
    return 0;
}
