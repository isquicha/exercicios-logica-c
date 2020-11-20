/*
Faça um programa que mostre todos os primos entre 1 e N sendo N um número
inteiro fornecido pelo usuário.

O programa deverá mostrar também o número de divisões que ele executou para
encontrar os números primos.

Serão avaliados o funcionamento, o estilo e o número de testes (divisões)
executados.
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>
int main()
{
    int numero;
    printf("\nDigite um numero inteiro: ");
    scanf("%d", &numero);

    if (numero == 1 || numero == 2)
        printf(
            "\n%d é primo e foram executadas 0 divisões para descobrir isso",
            numero);

    else if (numero % 2 == 0)
        printf(
            "\n%d não é primo e foi executada uma divisão para descobrir isso",
            numero);

    else
    {
        int contador = 1;
        bool primo = true;
        for (int i = 3; i < numero; i += 2)
        {
            contador++;
            if (numero % i == 0)
            {
                primo = false;
                break;
            }
        }
        if (primo)
            printf("\n%d é primo e foram executadas %d divisões para "
                   "descobrir isso",
                   numero, contador);

        else
            printf("\n%d não é primo e foram executadas %d divisões para "
                   "descobrir isso",
                   numero, contador);
    }

    return 0;
}
