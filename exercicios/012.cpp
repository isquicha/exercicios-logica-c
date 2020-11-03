/*
Tendo como dados de entrada a altura de uma pessoa,
construa um algoritmo que calcule seu peso ideal,
usando a seguinte fórmula: (72.7*altura) - 58
*/
#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
int main()
{
    float altura, pesoIdeal;
    printf("Digite sua altura: ");
    scanf("%f", &altura);
    pesoIdeal = (72.7 * altura) - 58;
    printf("Seu peso ideal eh: %.2fkg", pesoIdeal);
    return 0;
}
