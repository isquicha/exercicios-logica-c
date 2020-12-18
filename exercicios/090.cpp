/*
Faça um programa que mostre os n termos da Série a seguir:
  S = 1/1 + 2/3 + 3/5 + 4/7 + 5/9 + ... + n/m.
Imprima no final a soma da série.
*/
#include <stdio.h>
int main()
{
    float soma = 0;
    int n, m = 1;
    printf("Digite n: ");
    scanf("%d", &n);
    printf("S = ");
    for (int i = 1; i <= n; i++)
    {
        printf("%d/%d", i, m);
        if (i < n && n > 1)
            printf(" + ");
        else
            printf(".");

        soma += (float)i / (float)m;
        m += 2;
    }
    printf("\nA soma da serie deu %.2f", soma);
    return 0;
}
