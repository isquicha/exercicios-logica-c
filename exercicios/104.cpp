/*
Faça um programa que receba a temperatura média de cada mês do ano e
armazene-as em uma lista.
Após isto, calcule a média anual das temperaturas e mostre todas as
temperaturas acima da média anual, e em que mês elas ocorreram
(mostrar o mês por extenso: 1 – Janeiro, 2 – Fevereiro, . . . ).
*/
#include <stdio.h>

int main()
{

    char meses[12][10] = {"janeiro",  "fevereiro", "março",    "abril",
                          "maio",     "junho",     "julho",    "agosto",
                          "setembro", "outubro",   "novembro", "dezembro"};
    float temperaturas[12];
    float media = 0;
    for (int i = 0; i < 12; i++)
    {
        printf("Digite a temperatura de %s em ºC: ", meses[i]);
        scanf("%f", &temperaturas[i]);
        media += temperaturas[i];
    }
    media = media / 12.0;
    printf("\n\nA media das temperaturas foi %.2fºC", media);
    printf("\nMeses com temperaturas acima da media: ");
    for (int i = 0; i < 12; i++)
    {
        if (temperaturas[i] > media)
            printf("\n%d - %s com %.2fºC", i + 1, meses[i], temperaturas[i]);
    }
    return 0;
}