/*
Faça um Programa que pergunte em que turno você estuda.
Peça para digitar M-matutino ou V-Vespertino ou N- Noturno.

Imprima a mensagem "Bom Dia!", "Boa Tarde!" ou "Boa Noite!" ou
"Valor Inválido!", conforme o caso.
*/
#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
int main()
{
    char turno;
    printf("Digite seu turno, M - matutino, V - vespertino, N - noturno: ");
    scanf("%c", &turno);
    turno = toupper(turno);
    if (turno == 'M')
        printf("Bom dia!");
    else if (turno == 'V')
        printf("Boa tarde!");
    else if (turno == 'N')
        printf("Boa noite!");
    else
        printf("Valor inválido!");
    return 0;
}
