/*
Um funcionário de uma empresa recebe aumento salarial anualmente.

Sabe-se que:
Esse funcionário foi contratado em 1995, com salário inicial de R$ 1.000,00;
Em 1996 recebeu aumento de 1,5% sobre seu salário inicial;
A partir de 1997 (inclusive), os aumentos salariais sempre correspondem ao
dobro do percentual do ano anterior.

Faça um programa que determine o salário atual desse funcionário.
Após concluir isto, altere o programa permitindo que o usuário digite o salário
inicial do funcionário.
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>
int main()
{
    int ano, ano_atual;
    float salario, aumento;
    printf("Dgite o salário inicial do funcionário em 1995: ");
    scanf("%f", &salario);
    ano = 1995;
    printf("Digite em que ano estamos: ");
    scanf("%d", &ano_atual);
    aumento = 1.5 / 100.0; // ? 1.5%

    while (ano < ano_atual)
    {
        ano++;
        salario *= 1 + aumento;
        aumento *= 2;
    }
    printf("O salario em %d é de R$ %.2f", ano, salario);
    return 0;
}
