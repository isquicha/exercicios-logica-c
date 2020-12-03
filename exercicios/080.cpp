/*
Faça um programa que leia dez conjuntos de dois valores,
o primeiro representando o número do aluno e o segundo representando
a sua altura em centímetros.

Encontre o aluno mais alto e o mais baixo.

Mostre o número do aluno mais alto e o número do aluno mais baixo,
junto com suas alturas.
*/
#include <stdio.h>
int main()
{
    int altura_mais_alto = 0, aluno_mais_alto = 0, altura_mais_baixo = 200,
        aluno_mais_baixo = 0, altura;
    for (int i = 1; i <= 10; i++)
    {
        printf("Digite a altura do aluno %d em cm: ", i);
        scanf("%d", &altura);
        if (altura > altura_mais_alto)
        {
            aluno_mais_alto = i;
            altura_mais_alto = altura;
        }
        if (altura < altura_mais_baixo)
        {
            aluno_mais_baixo = i;
            altura_mais_baixo = altura;
        }
    }
    printf("O mais alto é o aluno %d com %dcm", aluno_mais_alto,
           altura_mais_alto);
    printf("\nO mais baixo é o aluno %d com %dcm", aluno_mais_baixo,
           altura_mais_baixo);
    return 0;
}
