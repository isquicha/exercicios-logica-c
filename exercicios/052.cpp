/*
Faça um programa que leia 5 números e informe o maior número.
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>
int main()
{
    // Existem várias formas de se resolver este problema, e adotei aqui uma
    // forma
    // mais voltada a Lógica do quê a praticidade.
    // Vamos precisar da constante 'infinito' da biblioteca matemática

    // Neste não faz sentido usar estrutura de repetição sem utiliza listas
    float numeros[5]; // Uma lista de números vazia
    for (int i = 0; i < 5; i++)
    {
        printf("\nDigite um número (serão 5 ao todo): ");

        // Coloca o número digitado na lista de números
        scanf("%f", &numeros[i]);
    }
    // Iniciamos um número com o menor valor possível, neste caso, menos
    // infinito
    float maior_numero = -INFINITY;
    // Colocar um valor muito pequeno ao invés de infinito pode dar certo
    // também, desde que o usuário não digite todos os valores menores do que
    // este primeiro valor setado. Por isso usamos o -infinito, pois não tem
    // nada menor que isso.

    // Para cada número na lista de números
    for (int i = 0; i < 5; i++)
    {
        // Se o número atual for maior do que o maior número guardado
        if (numeros[i] > maior_numero)
        {
            // Então o número atual passa a ser o maior número
            maior_numero = numeros[i];
        }
    }

    printf("\n%f", maior_numero);
    return 0;
}
