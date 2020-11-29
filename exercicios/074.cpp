/*
O Sr. Manoel Joaquim acaba de adquirir uma panificadora e pretende implantar a
metodologia da tabelinha, que já é um sucesso na sua loja de 1,99.

Você foi contratado para desenvolver o programa que monta a tabela de preços de
pães, de 1 até 50 pães, a partir do preço do pão informado pelo usuário,
conforme o exemplo abaixo:

    Preço do pão: R$ 0.18
    Panificadora Pão de Ontem - Tabela de preços
    1 - R$ 0.18
    2 - R$ 0.36
    ...
    50 - R$ 9.00
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>
int main()
{
    float preco;
    printf("Preço do pão: ");
    scanf("%f", &preco);
    printf("\nLojas Quase Dois - Tabela de preços");
    for (int i = 1; i <= 50; i++)
        printf("\n%2d - R$ %5.2f", i, preco * i);
    return 0;
}
