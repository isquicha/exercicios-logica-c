/*
Faça um Programa que peça a idade e a altura de 5 pessoas, armazene cada
informação no seu respectivo vetor. Imprima a idade e a altura na ordem
inversa a ordem lida.
*/
#include <stdio.h>
#define PESSOAS 5

int main()
{
    int idades[PESSOAS];
    float alturas[PESSOAS];
    for (int i = 0; i < PESSOAS; i++)
    {
        printf("Digite a idade da pessoa %d: ", i + 1);
        scanf("%d", &idades[i]);
        printf("Digite a altura da pessoa %d em cm: ", i + 1);
        scanf("%f", &alturas[i]);
    }
    for (int i = PESSOAS - 1; i >= 0; i--)
        printf("\nA pessoa %d mede %.2fcm e tem %d ano(s)", i + 1, alturas[i],
               idades[i]);
    return 0;
}
