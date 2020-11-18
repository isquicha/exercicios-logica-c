/*
Altere o programa de cálculo dos números primos, informando, caso o número não
seja primo, por quais número ele é divisível.
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>
int main()
{
    int numero;
    bool primo;
    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);
    primo = true;
    for (int i = 2; i < numero; i++)
    {
        if (numero % i == 0)
        {
            primo = false;
            printf("\n%d não é primo! É divisível por %d.", numero, i);
        }
    }
    if (primo)
        printf("\n%d é primo!", numero);
    return 0;
}
