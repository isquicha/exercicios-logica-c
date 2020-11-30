/*
O Departamento Estadual de Meteorologia lhe contratou para desenvolver um
programa que leia as um conjunto indeterminado de temperaturas,
e informe ao final a menor e a maior temperaturas informadas,
bem como a média das temperaturas.
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>
int main()
{
    float maior = -INFINITY, menor = INFINITY, temperatura, soma = 0;
    int contador = 0;
    while (true)
    {
        printf("Digite a temperatura em Kelvin. Negativa para parar: ");
        scanf("%f", &temperatura);
        if (temperatura < 0)
            break;

        contador++;
        soma += temperatura;
        if (temperatura < menor)
            menor = temperatura;
        if (temperatura > maior)
            maior = temperatura;
    }
    printf("A menor temperatura foi %fK", menor);
    printf("\nA maior temperatura foi %fK", maior);
    printf("\nA média das temperaturas foi %.3f}K", soma / contador);
    return 0;
}
