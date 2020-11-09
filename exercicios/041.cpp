/*
Faça um Programa que leia 2 números e em seguida pergunte ao usuário qual
operação ele deseja realizar.

O resultado da operação deve ser acompanhado de uma
frase que diga se o número é:
    par ou ímpar;
    positivo ou negativo;
    inteiro ou decimal.
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>
int main()
{
    float numero1, numero2, resultado;
    char op;
    printf("Digite um número: ");
    scanf("%f", &numero1);
    printf("Digite outro número: ");
    scanf("%f", &numero2);
    printf("Digite qual operação (+, -, * ou /) deseja realizar: ");
    scanf("%s", &op);

    if (op == '+')
        resultado = numero1 + numero2;
    else if (op == '-')
        resultado = numero1 - numero2;
    else if (op == '*')
        resultado = numero1 * numero2;
    else if (op == '/')
        resultado = numero1 / numero2;

    printf("O resultado é: \n");

    if ((int)resultado % 2 == 0)
        printf("Par");
    else
        printf("Ímpar");

    if (resultado >= 0)
        printf("\nPositivo");
    else
        printf("\nNegativo");

    if (floor(resultado) == resultado)
        printf("\nInteiro");
    else
        printf("\nDecimal");
    return 0;
}
