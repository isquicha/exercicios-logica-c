/*
O cardápio de uma lanchonete é o seguinte:
    Especificação   Código  Preço
    Cachorro Quente 100     R$ 1,20
    Bauru Simples   101     R$ 1,30
    Bauru com ovo   102     R$ 1,50
    Hambúrguer      103     R$ 1,20
    Cheeseburguer   104     R$ 1,30
    Refrigerante    105     R$ 1,00
Faça um programa que leia o código dos itens pedidos e as quantidades
desejadas.

Calcule e mostre o valor a ser pago por item (preço * quantidade) e o total
geral do pedido.

Considere que o cliente deve informar quando o pedido deve ser encerrado.
*/
#include <stdio.h>
int main()
{
    int quantidade_produto_100 = 0;
    int quantidade_produto_101 = 0;
    int quantidade_produto_102 = 0;
    int quantidade_produto_103 = 0;
    int quantidade_produto_104 = 0;
    int quantidade_produto_105 = 0;
    int quantidade;
    int codigo;
    float total = 0;

    printf("Produto         Codigo  Custo"
           "\n-------------------------------"
           "\nCachorro Quente 100     R$ 1.20"
           "\nBauru Simples   101     R$ 1.30"
           "\nBauru com ovo   102     R$ 1.50"
           "\nHamburguer      103     R$ 1.20"
           "\nCheeseburguer   104     R$ 1.30"
           "\nRefrigerante    105     R$ 1.00\n");

    while (true)
    {
        printf("Digite o codigo do produto (ou 0 para encerrar): ");
        scanf("%d", &codigo);
        if (codigo == 0)
            break;
        if (codigo > 105 || codigo < 100)
        {
            printf("Codigo invalido!\n");
            continue;
        }

        printf("Digite a quantidade desse produto: ");
        scanf("%d", &quantidade);
        if (codigo == 100)
            quantidade_produto_100 += quantidade;
        else if (codigo == 101)
            quantidade_produto_101 += quantidade;
        else if (codigo == 102)
            quantidade_produto_102 += quantidade;
        else if (codigo == 103)
            quantidade_produto_103 += quantidade;
        else if (codigo == 104)
            quantidade_produto_104 += quantidade;
        else
            quantidade_produto_105 += quantidade;
    }
    printf("\nFechamento do pedido"
           "\nCodigo  -  Quantidade  -  Custo unidade  -  Custo total");
    if (quantidade_produto_100 > 0)
    {
        printf("\n100\t-\t%d\t-  R$ 1.20\t-", quantidade_produto_100);
        printf("\tR$ %.2f", quantidade_produto_100 * 1.2);
        total += quantidade_produto_100 * 1.2;
    }
    if (quantidade_produto_101 > 0)
    {
        printf("\n101\t-\t%d\t-  R$ 1.30\t-", quantidade_produto_101);
        printf("\tR$ %.2f", quantidade_produto_101 * 1.3);
        total += quantidade_produto_101 * 1.3;
    }
    if (quantidade_produto_102 > 0)
    {
        printf("\n102\t-\t%d\t-  R$ 1.50\t-", quantidade_produto_102);
        printf("\tR$ %.2f", quantidade_produto_102 * 1.5);
        total += quantidade_produto_102 * 1.5;
    }
    if (quantidade_produto_103 > 0)
    {
        printf("\n103\t-\t%d\t-  R$ 1.20\t-", quantidade_produto_103);
        printf("\tR$ %.2f", quantidade_produto_103 * 1.2);
        total += quantidade_produto_103 * 1.2;
    }
    if (quantidade_produto_104 > 0)
    {
        printf("\n104\t-\t%d\t-  R$ 1.30\t-", quantidade_produto_104);
        printf("\tR$ %.2f", quantidade_produto_104 * 1.3);
        total += quantidade_produto_104 * 1.3;
    }
    if (quantidade_produto_105 > 0)
    {
        printf("\n105\t-\t%d\t-  R$ 1.00\t-", quantidade_produto_105);
        printf("\tR$ %.2f", quantidade_produto_105 * 1.0);
        total += quantidade_produto_105 * 1.0;
    }

    printf("\nTotal do pedido: R$ %.2f", total);

    return 0;
}
