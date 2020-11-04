/*
Tendo como dado de entrada a altura (h) de uma pessoa,
construa um algoritmo que calcule seu peso ideal,
utilizando as seguintes fórmulas:
    Para homens: (72.7*h) - 58
    Para mulheres: (62.1*h) - 44.7
*/
#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
int main()
{
    float altura, pesoIdealH, pesoIdealM;
    printf("Digite sua altura em m: ");
    scanf("%f", &altura);
    pesoIdealH = (72.7 * altura) - 58;
    pesoIdealM = (62.1 * altura) - 44.7;
    printf(
        "O seu peso ideal eh:\n%.2fkg se voce for homem\n%.2fkg se voce for mulher",
        pesoIdealH, pesoIdealM);
    return 0;
}
