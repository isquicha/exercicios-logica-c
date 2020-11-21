/*
Faça um programa que calcule o mostre a média aritmética de N notas.
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>
int main()
{
    float notas = 0, nota;
    int contador = 0;
    char continuar = 'S';
    while (continuar == 'S' || continuar == 's')
    {
        printf("\nDigite uma nota: ");
        scanf("%f", &nota);
        getchar();

        notas += nota;
        contador++;

        printf("\nDeseja continuar? (S/N): ");
        scanf("%c", &continuar);
        getchar();
    }
    printf("A média das notas é %.2f.", notas / contador);
    return 0;
}
