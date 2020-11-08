/*
Faça um Programa que peça uma data no formato dd/mm/aaaa e determine se a mesma
é uma data válida.
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>
int main()
{
    int dia, mes, ano;
    printf("Digite uma data no formato dd/mm/aaaa: ");
    // Isso separa o scan em 3 entradas separadas por uma barra
    scanf("%i/%i/%i", &dia, &mes, &ano);

    if (ano < 0) // Isso não é realmente necessário...
        printf("Ano inválido!");
    else
    {
        if (mes < 1 || mes > 12)
            printf("Mês inválido!");
        // Poderia ser feito um switch case aqui em baixo
        else if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 ||
                 mes == 10 || mes == 12)
        {
            // meses com 31 dias
            if (dia > 0 && dia < 32)
                printf("Data válida!");
            else
                printf("Dia inválido!");
        }
        else if (mes == 4 || mes == 6 || mes == 9 || mes == 11)
        {
            // meses com 30 dias
            if (dia > 0 && dia < 31)
                printf("Data válida!");
            else
                printf("Dia inválido!");
        }
        else // fevereiro
        {
            if (ano % 4 == 0) // Ano bissexto
            {
                if (dia > 0 && dia < 30)
                    printf("Data válida!");
                else
                    printf("Dia inválido!");
            }
            else // Ano não bissexto
            {
                if (dia > 0 && dia < 29)
                    printf("Data válida!");
                else
                    printf("Dia inválido!");
            }
        }
    }
    return 0;
}
