/*
Faça um programa que faça 5 perguntas para uma pessoa sobre um crime.
As perguntas são:
    "Telefonou para a vítima?"
    "Esteve no local do crime?"
    "Mora perto da vítima?"
    "Devia para a vítima?"
    "Já trabalhou com a vítima?"

O programa deve no final emitir uma classificação sobre a participação
da pessoa no crime.

Se a pessoa responder positivamente a 2 questões ela deve ser classificada
como "Suspeita", entre 3 e 4 como "Cúmplice" e 5 como "Assassino".
Caso contrário, ele será classificado como "Inocente".
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>
int main()
{
    char resposta;
    int positivos = 0;

    printf("Telefonou para a vítima? (S ou N): ");
    scanf("%c", &resposta);
    if (resposta == 'S' || resposta == 's')
        positivos++;
    printf("Esteve no local do crime? (S ou N): ");
    getchar();
    scanf("%c", &resposta);
    if (resposta == 'S' || resposta == 's')
        positivos++;
    printf("Mora perto da vítima? (S ou N): ");
    getchar();
    scanf("%c", &resposta);
    if (resposta == 'S' || resposta == 's')
        positivos++;
    printf("Devia para a vítima? (S ou N): ");
    getchar();
    scanf("%c", &resposta);
    if (resposta == 'S' || resposta == 's')
        positivos++;
    printf("Já trabalhou com a vítima? (S ou N): ");
    getchar();
    scanf("%c", &resposta);
    if (resposta == 'S' || resposta == 's')
        positivos++;

    if (positivos < 2)
        printf("Inocente");
    else if (positivos == 2)
        printf("Suspeita");
    else if (positivos < 5)
        printf("Cúmplice");
    else
        printf("Assassino");
    return 0;
}
