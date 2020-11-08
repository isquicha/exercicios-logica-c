/*
Faça um Programa para um caixa eletrônico.

O programa deverá perguntar ao usuário a valor do saque e depois informar
quantas notas de cada valor serão fornecidas.

As notas disponíveis serão as de 1, 5, 10, 50 e 100 reais.
O valor mínimo é de 10 reais e o máximo de 600 reais.

O programa não deve se preocupar com a quantidade de notas existentes na
máquina.

Exemplo 1:
Para sacar a quantia de 256 reais, o programa fornece duas notas de 100,
uma nota de 50, uma nota de 5 e uma nota de 1;

Exemplo 2:
Para sacar a quantia de 399 reais, o programa fornece três notas de 100,
uma nota de 50, quatro notas de 10, uma nota de 5 e quatro notas de 1.
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>
int main()
{
    int valor, cem, cinquenta, dez, cinco, um;
    printf("Digite o valor a ser sacado (entre 10 e 600): ");
    scanf("%i", &valor);
    if (valor < 10 or valor > 600)
        printf("Valor inválido!");
    else
    {
        cem = valor / 100;  // Pegamos a centena com uma divisão inteira
        valor -= cem * 100; // Subtraímos as centenas retiradas do valor total
        cinquenta = valor / 50; // Idem para as outras coisas
        valor -= cinquenta * 50;
        dez = valor / 10;
        valor -= dez * 10;
        cinco = valor / 5;
        valor -= cinco * 5;
        um = valor; // Depois de subtrair as de cinco só sobram as de um
        if (cem > 0)
            printf("\n%i nota(s) de cem", cem);
        if (cinquenta > 0)
            printf("\n%i nota(s) de cinquenta", cinquenta);
        if (dez > 0)
            printf("\n%i nota(s) de dez", dez);
        if (cinco > 0)
            printf("\n%i nota(s) de cinco", cinco);
        if (um > 0)
            printf("\n%i nota(s) de um", um);
    }
    return 0;
}
