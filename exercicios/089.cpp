/*
Faça um programa que peça um numero inteiro positivo e em seguida mostre este
numero invertido.
Exemplo:
  12376489
  => 98467321
*/
#include <stdio.h>
int main()
{
    unsigned int numero;
    printf("Digite um inteiro positivo: ");
    scanf("%u", &numero);
    printf("=> ");
    while (numero > 0)
    {
        printf("%d", numero % 10);
        numero -= numero % 10;
        numero /= 10;
    }
    return 0;
}
