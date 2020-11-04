/*
Faça um Programa que peça um valor e mostre na tela se o valor é
positivo ou negativo.
*/
#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
int main()
{
    float valor;
    printf("Digite um numero: ");
    scanf("%f", &valor);
    if (valor > 0)
    {
        printf("O valor digitado é positivo");
    }
    else if (valor < 0)
    {
        printf("O valor digitado é negativo");
    }
    return 0;
}
