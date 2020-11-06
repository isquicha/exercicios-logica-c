/*
Faça um programa para o cálculo de uma folha de pagamento, sabendo que os
descontos são do Imposto de Renda, que depende do salário bruto
(conforme tabela abaixo) e 10% para o INSS e que o FGTS corresponde a 11% do
Salário Bruto, mas não é descontado (é a empresa que deposita).

O Salário Líquido corresponde ao Salário Bruto menos os descontos.
O programa deverá pedir ao usuário o valor da sua hora e a quantidade de horas
trabalhadas no mês.

Desconto do IR:
    Salário Bruto até 900 (inclusive) - isento
    Salário Bruto até 1500 (inclusive) - desconto de 5%
    Salário Bruto até 2500 (inclusive) - desconto de 10%
    Salário Bruto acima de 2500 - desconto de 20%

Imprima na tela as informações, dispostas conforme o exemplo abaixo.
No exemplo o valor da hora é 5 e a quantidade de hora é 220.

        Salário Bruto: (5 * 220)        : R$ 1100,00
        (-) IR (5%)                     : R$   55,00
        (-) INSS ( 10%)                 : R$  110,00
        FGTS (11%)                      : R$  121,00
        Total de descontos              : R$  165,00
        Salário Liquido                 : R$  935,00
*/
#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
int main()
{
    float valorDaHora,
        horasTrabalhadas,
        salarioBruto,
        descontoIr,
        IR,
        INSS,
        FGTS,
        totalDeDescontos,
        salarioLiquido;

    printf("Digite quanto você recebe por hora: ");
    scanf("%f", &valorDaHora);
    printf("Digite quantas horas você trabalhou esse mês: ");
    getchar();
    scanf("%f", &horasTrabalhadas);
    salarioBruto = valorDaHora * horasTrabalhadas;
    if (salarioBruto <= 900)
        descontoIr = 0.0;
    else if (salarioBruto <= 1500)
        descontoIr = 5;
    else if (salarioBruto <= 2500)
        descontoIr = 10;
    else
        descontoIr = 20;

    IR = salarioBruto * (descontoIr / 100.0);
    INSS = salarioBruto * (10 / 100.0);
    FGTS = salarioBruto * (11 / 100.0);
    totalDeDescontos = IR + INSS;
    salarioLiquido = salarioBruto - totalDeDescontos;

    printf("\nSalário Bruto     : R$%.2f", salarioBruto);
    printf("\n(-) IR (5%%)       : R$%.2f", IR);
    printf("\n(-) INSS (10%%)    : R$%.2f", INSS);
    printf("\nFGTS (11%%)        : R$%.2f", FGTS);
    printf("\nTotal de descontos: R$%.2f", totalDeDescontos);
    printf("\nSalário Liquido   : R$%.2f", salarioLiquido);
    return 0;
}
