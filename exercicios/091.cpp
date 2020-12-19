/*
Sendo H= 1 + 1/2 + 1/3 + 1/4 + ... + 1/N,
Faça um programa que calcule o valor de H com N termos.
*/
#include <stdio.h>
int main()
{
    float h = 0;
    int n;
    printf("Digite o numero de termos: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
        h += 1.0 / (float)i;
    printf("H = %f", h);
    return 0;
}
