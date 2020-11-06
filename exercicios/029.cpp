/*
As Organizações Tabajara resolveram dar um aumento de salário aos seus
colaboradores e lhe contrataram para desenvolver o programa que calculará os
reajustes.

Faça um programa que recebe o salário de um colaborador e o reajuste segundo o
seguinte critério, baseado no salário atual:

    salários até R$ 280,00 (incluindo) : aumento de 20%
    salários entre R$ 280,00 e R$ 700,00 : aumento de 15%
    salários entre R$ 700,00 e R$ 1500,00 : aumento de 10%
    salários de R$ 1500,00 em diante :
        aumento de 5% Após o aumento ser realizado,
    informe na tela:
        o salário antes do reajuste;
        o percentual de aumento aplicado;
        o valor do aumento;
        o novo salário, após o aumento.
*/
#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
int main()
{
    float salarioAnterior,
        percentualDeAumento,
        diferencaEntreSalarios,
        salarioAtual;

    printf("Digite seu salário atual: ");
    scanf("%f", &salarioAnterior);

    if (salarioAnterior <= 280)
        percentualDeAumento = 20;
    else if (salarioAnterior <= 750)
        percentualDeAumento = 15;
    else if (salarioAnterior <= 1500)
        percentualDeAumento = 10;
    else
        percentualDeAumento = 5;
    diferencaEntreSalarios = salarioAnterior * (percentualDeAumento / 100.0);
    salarioAtual = salarioAnterior + diferencaEntreSalarios;
    printf("\nSeu salário antes do reajuste era de R$%.2f", salarioAnterior);
    printf("\nSeu salário foi aumentado em %.1f%%", percentualDeAumento);
    printf("\nSeu salário foi aumentado em R$%.2f", diferencaEntreSalarios);
    printf("\nSeu salário atual é de R$%.2f", salarioAtual);
    return 0;
}
