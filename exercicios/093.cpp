/*
Faça um Programa que leia um vetor de 10 números reais e mostre-os na ordem
inversa.
*/
#include <stdio.h>
int main()
{
    float numeros[10];
    for (int i = 0; i < 10; i++)
    {
        printf("Digite o %do numero real: ", i + 1);
        scanf("%f", &numeros[i]);
    }

    printf("Os numeros inversos sao: ");
    for (int i = 9; i >= 0; i--)
        printf(" %f", numeros[i]);

    return 0;
}
