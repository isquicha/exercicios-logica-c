/*
Faça um Programa que peça os 3 lados de um triângulo.
O programa deverá informar se os valores podem ser um triângulo.
Indique, caso os lados formem um triângulo, se o mesmo é:
    equilátero, isósceles ou escaleno.

Dicas:
    Três lados formam um triângulo quando a soma de
        quaisquer dois lados for maior que o terceiro;
    Triângulo Equilátero: três lados iguais;
    Triângulo Isósceles: quaisquer dois lados iguais;
    Triângulo Escaleno: três lados diferentes;
*/
#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
int main()
{
    float lado1, lado2, lado3;
    printf("Digite o primeiro lado do triângulo: ");
    scanf("%f", &lado1);
    printf("Digite o segundo lado do triângulo: ");
    scanf("%f", &lado2);
    printf("Digite o terceiro lado do triângulo: ");
    scanf("%f", &lado3);

    if (
        (lado1 + lado2 > lado3) 
        && (lado1 + lado3 > lado2) 
        && (lado2 + lado3 > lado1)
    )
    {
        if ((lado1 == lado2) && (lado2 == lado3))
            printf("É um triângulo equilátero!");
        else if ((lado1 == lado2) || (lado1 == lado3) || (lado2 == lado3))
            printf("É um triângulo isósceles!");
        else
            printf("É um triângulo escaleno!");
    }
    else
        printf("Não é um triângulo!");
    return 0;
}
