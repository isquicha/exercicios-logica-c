/*
Faça um programa que calcule as raízes de uma equação do segundo grau,
na forma ax² + bx + c.

O programa deverá pedir os valores de a, b e c e fazer as consistências,
informando ao usuário nas seguintes situações:

    Se o usuário informar o valor de A igual a zero, a equação não é do segundo
        grau e o programa não deve fazer pedir os demais valores,
        sendo encerrado;
    Se o delta calculado for negativo, a equação não possui raízes reais.
        Informe ao usuário e encerre o programa;
    Se o delta calculado for igual a zero a equação possui apenas uma raiz
        real; informe-a ao usuário;
    Se o delta for positivo, a equação possui duas raiz reais;
        informe-as ao usuário;
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>
int main()
{
    float a, b, c, delta, raiz1, raiz2;
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    if (a == 0)
        printf("Não é uma equação do segundo grau");
    else
    {
        printf("Digite o valor de b: ");
        getchar();
        scanf("%f", &b);
        printf("Digite o valor de c: ");
        getchar();
        scanf("%f", &c);
        delta = pow(b, 2) - (4 * a * c);
        if (delta < 0)
            printf("Delta menor que 0. Não há raízes reais.");
        else if (delta == 0)
        {
            raiz1 = (-b) / (2 * a);
            printf("Delta é zero. A raíz é %f, raiz", raiz1);
        }
        else
        {
            raiz1 = (-b + sqrt(delta)) /
                    (2 * a); // sqrt é a função de raiz quadrada da biblioteca
                             // matemática
            raiz2 = (-b - sqrt(delta)) / (2 * a);
            printf("Delta maior que zero. A raíz 1 é %f, e a raiz 2 é %f",
                   raiz1, raiz2);
        }
    }
    return 0;
}
