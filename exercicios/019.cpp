/*
Faça um Programa que peça dois números e imprima o maior deles.
*/
#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
int main()
{
    int num1, num2;
    printf("Digite um numero inteiro: ");
    scanf("%i", &num1);
    printf("Digite outro numero inteiro: ");
    getchar();
    scanf("%i", &num2);

    if (num1 > num2)
    {
        printf("%i", num1);
    }
    else
    {
        printf("%i", num2);
    }
    return 0;
}
