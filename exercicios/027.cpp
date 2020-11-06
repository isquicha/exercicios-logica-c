/*
Faça um Programa que leia três números e mostre-os em ordem decrescente.
*/
#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
int main()
{
    float numero1, numero2, numero3;
    printf("Digite um numero: ");
    scanf("%f", &numero1);
    printf("Digite outro numero: ");
    scanf("%f", &numero2);
    printf("Digite mais um numero: ");
    scanf("%f", &numero3);
    if (numero1 > numero2 && numero2 > numero3)
        printf("%f %f %f", numero1, numero2, numero3);
    else if (numero1 > numero3 && numero3 > numero2)
        printf("%f %f %f", numero1, numero3, numero2);
    else if (numero2 > numero1 && numero1 > numero3)
        printf("%f %f %f", numero2, numero1, numero3);
    else if (numero2 > numero3 && numero3 > numero1)
        printf("%f %f %f", numero2, numero3, numero1);
    else if (numero3 > numero1 && numero1 > numero2)
        printf("%f %f %f", numero3, numero1, numero2);
    else
        printf("%f %f %f", numero3, numero2, numero1);
    return 0;
}
