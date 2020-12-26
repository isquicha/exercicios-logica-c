/*
Faça um Programa que peça as quatro notas de 10 alunos, calcule e armazene num
vetor a média de cada aluno, imprima o número de alunos com média maior ou
igual a 7.0.
*/
#include <stdio.h>
#define ALUNOS 10
#define NOTAS 4
int main()
{

    float medias[ALUNOS];
    float media = 0, nota;
    int media_sete = 0;
    int i, j;

    for (i = 0; i < ALUNOS; i++)
    {
        media = 0;
        for (j = 0; j < NOTAS; j++)
        {
            printf("Digite a nota %d do aluno %d: ", j + 1, i + 1);
            scanf("%f", &nota);
            media += nota;
        }
        medias[i] = media / (float)NOTAS;

        if (medias[i] >= 7)
            media_sete++;
    }
    printf("\nA media dos alunos foi:");
    for (i = 0; i < ALUNOS; i++)
        printf("\nAluno %d: %.2f", i + 1, medias[i]);

    printf("\n%d alunos tiveram media maior ou igual a 7.", media_sete);
    return 0;
}
