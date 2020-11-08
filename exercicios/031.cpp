/*
Faça um Programa que leia um número e exiba o dia correspondente da semana.
(1-Domingo, 2- Segunda, etc.),
se digitar outro valor deve aparecer valor inválido.
*/
#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
int main()
{
    //Para esse código funcionar precisamos incluir a biblioteca de string
    //O comando (fora da main) é #include <cstring>
    //Ou, em c, #include <string.h>
    int diaInt;
    //A linha abaixo cria uma string, que nada mais é do que um
    //vetor de caracteres
    //Uma variável char guarda 1 letra. Uma string guarda várias letras
    //O número de letras limite é o que está em colchetes, neste caso 40
    char diaStr[40] = "";
    printf("Digite o número do dia da semana: ");
    scanf("%i", &diaInt);

    if (diaInt == 1)
        //A strcpy copia uma string (neste caso domingo)
        //para uma variável do tipo string
        //Não dá para simplesmente fazer algo como diaStr = "Domingo";
        strcpy(diaStr, "Domingo");
    else if (diaInt == 2)
        strcpy(diaStr, "Segunda");
    else if (diaInt == 3)
        strcpy(diaStr, "Terça");
    else if (diaInt == 4)
        strcpy(diaStr, "Quarta");
    else if (diaInt == 5)
        strcpy(diaStr, "Quinta");
    else if (diaInt == 6)
        strcpy(diaStr, "Sexta");
    else if (diaInt == 7)
        strcpy(diaStr, "Sábado");

    //strcmp compara duas strings. Se forem iguais é retornado 0
    //Caso a string não esteja vazia, entramos no if
    if (strcmp(diaStr, ""))
        printf("O dia correspondente é %s", diaStr);
    else
        printf("Valor inválido");

    return 0;
}
