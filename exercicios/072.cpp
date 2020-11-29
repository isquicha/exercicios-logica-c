/*
Faça um programa que calcule o valor total investido por um colecionador em sua
coleção de CDs e o valor médio gasto em cada um deles.
O usuário deverá informar a quantidade de CDs e o valor para em cada um.
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>
int main()
{
    int cds;
    float preco, preco_total = 0;
    printf("\nDigite a quantidade de CDs: ");
    scanf("%d", &cds);
    for (int i = 1; i <= cds; i++)
    {
        printf("Digite o preço do CD %d: ", i);
        scanf("%f", &preco);
        preco_total += preco;
    }

    printf("\nPreço total: R$%.2f\nMédia de custo por CD: R$%.2f", preco_total,
           preco_total / cds);
    return 0;
}
