/*
Faça um Programa que peça um número correspondente a um determinado ano e em
seguida informe se este ano é ou não bissexto.
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>
int main()
{
    int ano;
    printf("Digite um ano: ");
    scanf("%i", &ano);
    if (ano % 4 == 0)
        printf("%i é bissexto!", ano);
    else
        printf("%i não é bissexto!", ano);
    return 0;
}
