/*
Faça um programa para a leitura de duas notas parciais de um aluno.
O programa deve calcular a média alcançada por aluno e apresentar:
    A mensagem "Aprovado", se a média alcançada for maior ou igual a sete;
    A mensagem "Reprovado", se a média for menor do que sete;
    A mensagem "Aprovado com Distinção", se a média for igual a dez.
*/
#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
int main()
{
    float nota1, nota2, media;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    getchar();
    scanf("%f", &nota2);
    media = (nota1 + nota2) / 2.0;
    if (media == 10)
        printf("Aprovado com Distinção");
    else if (media >= 7)
        printf("Aprovado");
    else
        printf("Reprovado");
    //Se o if (ou else if ou else) tem SOMENTE UM COMANDO
    //terminado por ponto e vírgula (;) não é necessário criar
    //um bloco (colocar as chaves {})
    return 0;
}
