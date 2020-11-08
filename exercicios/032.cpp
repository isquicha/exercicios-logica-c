/*
Faça um programa que lê as duas notas parciais obtidas por um aluno numa
disciplina ao longo de um semestre, e calcule a sua média.

A atribuição de conceitos obedece à tabela abaixo:
    Média de Aproveitamento  Conceito
    Entre 9.0 e 10.0         A
    Entre 7.5 e 9.0          B
    Entre 6.0 e 7.5          C
    Entre 4.0 e 6.0          D
    Entre 4.0 e zero         E

O algoritmo deve mostrar na tela as notas, a média,
o conceito correspondente e a mensagem “APROVADO” se o conceito for A, B ou C
ou “REPROVADO” se o conceito for D ou E.
*/
#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
int main()
{
    char aproveitamento;
    float nota1, nota2, media;

    printf("Digite a primeira nota do semestre: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota do semestre: ");
    scanf("%f", &nota2);

    media = (nota1 + nota2) / 2;

    if (media >= 9)
        aproveitamento = 'A';
    else if (media >= 7.5)
        aproveitamento = 'B';
    else if (media >= 6)
        aproveitamento = 'C';
    else if (media >= 4)
        aproveitamento = 'D';
    else
        aproveitamento = 'E';

    if (aproveitamento == 'D' || aproveitamento == 'E')
        printf("REPROVADO\nAproveitamento: %c", aproveitamento);
    else
        printf("APROVADO\nAproveitamento: %c", aproveitamento);
    return 0;
}
