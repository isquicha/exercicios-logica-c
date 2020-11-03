/*
Faça um Programa que pergunte quanto você ganha por hora e o número de horas
trabalhadas no mês. Calcule e mostre o total do seu salário no referido mês.
*/
#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
int main()
{
    float salarioHr, salarioMe, horasTrabalhadas;
    printf("Digite quanto voce ganha por hora: ");
    scanf("%f", &salarioHr);
    printf("Digite quantas horas voce trabalhou esse mes: ");
    getchar();
    scanf("%f", &horasTrabalhadas);
    salarioMe = salarioHr * horasTrabalhadas;
    printf("Seu salario total do mes eh de R$%.2f", salarioMe);
    return 0;
}
