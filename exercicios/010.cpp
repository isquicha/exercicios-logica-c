/*
Faça um Programa que peça a temperatura em graus Celsius, transforme e mostre
em graus Farenheit.
*/
#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
int main()
{
    float grausC, grausF;
    printf("Digite a temperatura em graus Celsius: ");
    scanf("%f", &grausC);
    grausF = (grausC * 9 / 5) + 32;
    printf("%.2f graus Celsius correspondem a %.2f graus Farenheit", grausC, grausF);
    return 0;
}
