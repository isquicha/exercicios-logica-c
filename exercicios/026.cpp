/*
Faça um programa que pergunte o preço de três produtos e informe qual produto
você deve comprar, sabendo que a decisão é sempre pelo mais barato.
*/
#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
int main()
{
    float preco1, preco2, preco3;
    printf("Digite o preço do produto 1: ");
    scanf("%f", &preco1);
    printf("Digite o preço do produto 2: ");
    scanf("%f", &preco2);
    printf("Digite o preço do produto 3: ");
    scanf("%f", &preco3);
    if (preco1 < preco2 && preco1 < preco3)
        printf("O produto com o menor preco é o 1, custando R$%.2f", preco1);
    else if (preco2 < preco1 && preco2 < preco3)
        printf("O produto com o menor preco é o 2, custando R$%.2f", preco2);
    else
        printf("O produto com o menor preco é o 3, custando R$%.2f", preco3);
    return 0;
}
