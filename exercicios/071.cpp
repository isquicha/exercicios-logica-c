/*
Faça um programa que calcule o número médio de alunos por turma.
Para isto, peça a quantidade de turmas e a quantidade de
alunos para cada turma.
As turmas não podem ter mais de 40 alunos.
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>
int main()
{
    int turmas, alunos;
    float media = 0;
    printf("Digite quantas turmas tem: ");
    scanf("%d", &turmas);

    for (int i = 0; i < turmas; i++)
    {
        while (true)
        {
            printf("Digite quantos alunos tem na turma %d: ", i + 1);
            scanf("%d", &alunos);
            if (alunos <= 40)
                break;
        }
        media = (float)((media * i) + alunos) / (float)(i + 1);
    }
    printf("A media de alunos por turma é %.2f", media);
    return 0;
}
