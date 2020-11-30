/*
Desenvolva um programa que faça a tabuada de um número qualquer inteiro que
será digitado pelo usuário, mas a tabuada não deve necessariamente iniciar em 1
e terminar em 10, o valor inicial e final devem ser informados também pelo
usuário, conforme exemplo abaixo:

    Montar a tabuada de: 5
    Começar por: 4
    Terminar em: 7

    Vou montar a tabuada de 5 começando em 4 e terminando em 7:
    5 X 4 = 20
    5 X 5 = 25
    5 X 6 = 30
    5 X 7 = 35

Obs: Você deve verificar se o usuário não digitou o final menor que o inicial.
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>
int main()
{
    int de, comeco, fim;
    printf("Montar a tabuada de: ");
    scanf("%d", &de);
    printf("Começar por: ");
    scanf("%d", &comeco);
    printf("Terminar em: ");
    scanf("%d", &fim);

    for (int i = comeco; i <= fim; i++)
        printf("\n%d X %d = %d", de, i, de * i);

    return 0;
}
