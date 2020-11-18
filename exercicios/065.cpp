/*
Faça um programa que peça um número inteiro e determine se ele é ou não um
número primo. Um número primo é aquele que é divisível somente por ele mesmo
e por 1.
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
            printf("%d não é primo!", numero);
            break;
        }
    }
    if (primo)
        printf("%d é primo!", numero);
    return 0;
}
