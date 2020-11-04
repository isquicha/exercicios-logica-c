/*
Faça um programa para uma loja de tintas.
O programa deverá pedir o tamanho em metros quadrados da área a ser pintada.

Considere que a cobertura da tinta é de 1 litro para cada 3 metros
quadrados e que a tinta é vendida em latas de 18 litros, que custam R$ 80,00.

Informe ao usuário a quantidades de latas de tinta
a serem compradas e o preço total.
*/
#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
int main()
{
    float areaDaParede,
        rendimentoDoLitro = 3.0,
        litrosPorLata = 18.0,
        precoDaLata = 80.0,
        precoTotal;
    int latasAComprar;

    printf("Digite a area da parede em metros quadrados: ");
    scanf("%f", &areaDaParede);

    latasAComprar = ceil(areaDaParede / (rendimentoDoLitro * litrosPorLata));
    //ceil é uma função da biblioteca matemática
    precoTotal = latasAComprar * precoDaLata;
    printf("Voce deve comprar %i lata(s), custando R$%.2f",
           latasAComprar, precoTotal);
    return 0;
}
