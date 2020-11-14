/*
Faça um programa que peça dois números, base e expoente,
calcule e mostre o primeiro número elevado ao segundo número.
Não utilize a função de potência da linguagem.
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>
int main()
{
    float base, numero;
    int expoente;
    printf("Digite a base: ");
    scanf("%f", &base);
    printf("\nDigite o expoente: ");
    getchar();
    scanf("%d", &expoente);
    numero = 1;
    for (int i = 1; i <= expoente; i++)
    {
        numero *= base;
    }
    printf("%f elevado a %d é %f", base, expoente, numero);
    return 0;
}
