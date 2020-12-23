/*
Faça um Programa que leia 4 notas, mostre as notas e a média na tela.
*/
#include <stdio.h>
int main()
{
    float notas[4];
    float soma = 0.0;
    for (int i = 0; i < 4; i++)
    {
        printf("Digite a %da nota: ", i + 1);
        scanf("%f", &notas[i]);
    }
    printf("\nNotas digitadas: ");
    for (int i = 0; i < 4; i++)
    {
        printf("\n%f", notas[i]);
        soma += notas[i];
    }
    printf("\nA media das notas e %.2f.", soma / 4.0);
    return 0;
}
