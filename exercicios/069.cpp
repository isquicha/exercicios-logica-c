/*
Faça um programa que peça para n pessoas a sua idade, ao final o programa
deverá verificar se a média de idade da turma varia entre 0 e 25,26 e 60 e
maior que 60; e então, dizer se a turma é jovem, adulta ou idosa, conforme a
média calculada.
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>
int main()
{
    int numero_de_pessoas, idade;
    float media = 0.0;
    printf("Digite o numero de pessoas: ");
    scanf("%d", &numero_de_pessoas);

    for (int i = 1; i <= numero_de_pessoas; i++)
    {
        printf("Digite a idade da pessoa %d: ", i);
        scanf("%d", &idade);
        media = ((media * (i - 1)) + idade) / (float)i;
    }
    if (media < 26)
        printf("A turma é jovem");
    else if (media < 60)
        printf("A turma é adulta");
    else
        printf("A turma é idosa");

    return 0;
}
