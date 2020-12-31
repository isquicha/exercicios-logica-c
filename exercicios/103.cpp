/*
Foram anotadas as idades e alturas de 30 alunos.
Faça um Programa que determine quantos alunos com mais de 13 anos possuem
altura inferior à média de altura desses alunos.
*/
#include <stdio.h>
#define ALUNOS 5
int main()
{
    int idades[ALUNOS];
    int alturas[ALUNOS];
    int media_de_altura = 0;
    int abaixo_da_media = 0;

    for (int i = 0; i < ALUNOS; i++)
    {
        printf("Digite a idade do aluno %d: ", i + 1);
        scanf("%d", &idades[i]);
        printf("Digite a altura em cm do aluno %d: ", i + 1);
        scanf("%d", &alturas[i]);
        media_de_altura += alturas[i];
    }
    media_de_altura /= ALUNOS;
    for (int i = 0; i < ALUNOS; i++)
    {
        if (idades[i] > 13)
        {
            if (alturas[i] < media_de_altura)
                abaixo_da_media++;
        }
    }

    printf("\n%d alunos com mais de 13 anos tem altura abaixo da media",
           abaixo_da_media);
    return 0;
}
