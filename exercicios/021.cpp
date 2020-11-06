/*
Faça um Programa que verifique se uma letra digitada é "F" ou "M".
Conforme a letra escrever: F - Feminino, M - Masculino, Sexo Inválido.
*/
#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
int main()
{
    char sexo;
    printf("Digite F para Feminino ou M para Masculino: ");
    scanf("%c", &sexo);
    if (sexo == 'F' || sexo == 'f')
    {
        printf("Feminino");
    }
    else if (sexo == 'M' || sexo == 'm')
    {
        printf("Masculino");
    }
    else
    {
        printf("Sexo inválido");
    }
    return 0;
}
