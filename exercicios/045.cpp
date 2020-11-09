/*
O Hipermercado Tabajara está com uma promoção de carnes que é imperdível.
Confira:

                      Até 5 Kg           Acima de 5 Kg
File Duplo      R$ 4,90 por Kg          R$ 5,80 por Kg
Alcatra         R$ 5,90 por Kg          R$ 6,80 por Kg
Picanha         R$ 6,90 por Kg          R$ 7,80 por Kg

Para atender a todos os clientes, cada cliente poderá levar apenas um dos tipos
de carne da promoção, porém não há limites para a quantidade de carne
por cliente.

Se compra for feita no cartão Tabajara o cliente receberá ainda um desconto de
5% sobre o total da compra.

Escreva um programa que peça o tipo e a quantidade de carne comprada pelo
usuário e gere um cupom fiscal, contendo as informações da compra:
    tipo de carne
    quantidade de carne
    preço total
    tipo de pagamento
    valor do desconto
    valor a pagar.
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>
int main()
{
    float peso, preco_total, desconto;
    char carne, pagamento;
    printf("Digite F para filé duplo, A para alcatra e P para picanha: ");
    scanf("%c", &carne);
    printf("Digite quantos quilos dessa carne vai comprar: ");
    getchar();
    scanf("%f", &peso);
    printf("Dinheiro ou cartão tabajara (5%% de desconto)? D ou C: ");
    getchar();
    scanf("%c", &pagamento);
    preco_total = 0;

    printf("\nHipermercado Tabajara\nCupom fiscal\n");
    if (carne == 'F' || carne == 'f')
    {
        printf("\nItem: Filé Duplo");
        if (peso > 5)
            preco_total = peso * 5.8;
        else
            preco_total = peso * 4.9;
    }
    else if (carne == 'A' || carne == 'a')
    {
        printf("\nItem: Alcatra");
        if (peso > 5)
            preco_total = peso * 6.8;
        else
            preco_total = peso * 5.9;
    }
    else if (carne == 'P' || carne == 'p')
    {
        printf("\nItem: Picanha");
        if (peso > 5)
            preco_total = peso * 7.8;
        else
            preco_total = peso * 6.9;
    }
    printf("\nQuantidade: %.2fKg", peso);
    printf("\nPreço total: R$%.2f", preco_total);
    if (pagamento == 'D' || pagamento == 'd')
    {
        printf("\nTipo de pagamento: Dinheiro");
        desconto = 0;
        printf("\nDesconto: R$%.2f", desconto);
        printf("\nValor a pagar: R$%.2f", (preco_total - desconto));
    }
    else if (pagamento == 'C' || pagamento == 'c')
    {
        printf("\nTipo de pagamento: Cartão Tabajara");
        desconto = preco_total * 5 / 100.0;
        printf("\nDesconto: R$%.2f", desconto);
        printf("\nValor a pagar: R$%.2f", (preco_total - desconto));
    }
    return 0;
}
