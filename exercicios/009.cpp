/*
Faça um Programa que peça a temperatura em graus Farenheit, transforme e mostre
a temperatura em graus Celsius.
C = (5 * (F-32) / 9).
*/
#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
int main()
{
    float grausC, grausF;
    printf("Digite a temperatura em graus Farenheit: ");
    scanf("%f", &grausF);
    grausC = (5 * (grausF - 32) / 9);
    printf("%.2f graus Farenheit correspondem a %.2f graus Celsius", grausF, grausC);
    return 0;
}
