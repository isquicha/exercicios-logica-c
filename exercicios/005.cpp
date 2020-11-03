/*
Faça um Programa que converta metros para centímetros.
*/
#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
int main()
{
    float metros, centimetros;
    printf("Digite a medida em metros: ");
    scanf("%f", &metros);
    centimetros = metros * 100;
    printf("%.2fm correspondem a %.2fcm", metros, centimetros);
    return 0;
}
