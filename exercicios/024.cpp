/*
Faça um Programa que leia três números e mostre o maior deles.
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
    getchar();
    scanf("%f", &numero2);
    printf("Digite mais um numero: ");
    getchar();
    scanf("%f", &numero3);
    if (numero1 > numero2 && numero1 > numero3)
    {
        printf("%f foi o maior numero digitado.", numero1);
    }
    else if (numero2 > numero1 && numero2 > numero3)
    {
        printf("%f foi o maior numero digitado.", numero2);
    }
    else
    {
        printf("%f foi o maior numero digitado.", numero3);
    }
    return 0;
}
