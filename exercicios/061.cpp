/*
Faça um programa que calcule o fatorial de um número inteiro fornecido pelo
usuário. Ex.: 5!=5.4.3.2.1=120
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>
int main()
{
    int fatorial = 1, numero;
    printf("Digite um numero: ");
    scanf("%d", &numero);

    for (int i = numero; i >= 1; i--)
    {
        fatorial *= i;
    }
    printf("O fatorial de %d é %d", numero, fatorial);
    return 0;
}
