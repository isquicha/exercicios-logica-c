/*
Faça um Programa que pergunte quanto você ganha por hora e o número de horas
trabalhadas no mês.

Calcule e mostre o total do seu salário no referido mês,
sabendo-se que são descontados 11% para o Imposto de Renda,
8% para o INSS e 5% para o sindicato, faça um programa que nos dê:
    salário bruto.
    quanto pagou ao INSS.
    quanto pagou ao sindicato.
    o salário líquido.
calcule os descontos e o salário líquido, conforme a tabela abaixo:

    + Salário Bruto : R$
    - IR (11%) : R$
    - INSS (8%) : R$
    - Sindicato ( 5%) : R$
    = Salário Liquido : R$

Obs.: Salário Bruto - Descontos = Salário Líquido.
*/
#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
int main()
{
    float salarioHora,
        horasTrabalhadas,
        IR,
        INSS,
        sindicato,
        salarioLiquido,
        salarioBruto;

    printf("Digite quanto voce recebe por hora: ");
    scanf("%f", &salarioHora);
    printf("Digite quantas horas voce trabalhou esse mes: ");
    getchar();
    scanf("%f", &horasTrabalhadas);

    salarioBruto = salarioHora * horasTrabalhadas;
    IR = salarioBruto * (11.0 / 100);
    INSS = salarioBruto * (8.0 / 100);
    sindicato = salarioBruto * (5.0 / 100);
    salarioLiquido = salarioBruto - IR - INSS - sindicato;

    printf("+ Salário Bruto : R$%.2f\n", salarioBruto);
    printf("- IR (11%) : R$%.2f\n", IR);
    printf("- INSS (8%) : R$%.2f\n", INSS);
    printf("- Sindicato ( 5%) : R$%.2f\n", sindicato);
    printf("= Salário Liquido : R$%.2f", salarioLiquido);
    return 0;
}
