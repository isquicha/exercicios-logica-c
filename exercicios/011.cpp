/*
Faça um Programa que peça 2 números inteiros e um número real.
Calcule e mostre:
    o produto do dobro do primeiro com metade do segundo.
    a soma do triplo do primeiro com o terceiro.
    o terceiro elevado ao cubo.
*/
#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
int main()
{
    int num1, num2;
    float num3, a, b, c;
    printf("Digite um numero inteiro: ");
    scanf("%i", &num1);
    printf("Digite outro numero inteiro: ");
    getchar();
    scanf("%i", &num2);
    printf("Digite um numero real: ");
    getchar();
    scanf("%f", &num3);

    a = (num1 * 2) * (num2 / 2.0);
    b = (num1 * 3) + num3;
    c = pow(num3, 3);
    printf("a - %f\nb - %f\nc - %f", a, b, c);
    return 0;
}
