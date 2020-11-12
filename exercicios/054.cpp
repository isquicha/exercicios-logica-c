/*
Faça um programa que imprima na tela apenas os números ímpares entre 1 e 50.
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>
int main()
{
    for (int i = 1; i < 50; i += 2)
        printf("%d\n", i);
    return 0;
}
