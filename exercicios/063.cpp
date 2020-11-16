/*
Altere o programa anterior para que ele aceite apenas números entre 0 e 1000.
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>
int main()
{
    // Para resolver com um laço é necessário utilizar uma lista de numeros
    float numeros[1000], menor_numero, maior_numero, soma;
    int contador = 0;
    while (1)
    {
        printf("\nDigite um número qualquer ou 0 para parar e exibir os "
               "resultados: ");
        contador++;
        scanf("%f", &numeros[contador]);
        if (numeros[contador] == 0)
        {
            contador--;
            break;
        }
        if (numeros[contador] > 1000 || numeros[contador] < 0)
            contador--;
    }

    menor_numero = INFINITY;
    for (int i = 1; i <= contador; i++)
    {
        if (numeros[i] < menor_numero)
            menor_numero = numeros[i];
    }
    printf("\nO menor número é %f", menor_numero);

    maior_numero = -INFINITY;
    for (int i = 1; i <= contador; i++)
    {
        if (numeros[i] > maior_numero)
            maior_numero = numeros[i];
    }
    printf("\nO maior número é %f", maior_numero);

    soma = 0;
    for (int i = 1; i <= contador; i++)
        soma += numeros[i];

    printf("\nA soma dos numeros é %f", soma);
    return 0;
}
