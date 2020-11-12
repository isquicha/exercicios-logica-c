/*
Altere o programa anterior para mostrar no final a soma dos números.
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>
int main()
{
    int primeiro_numero, segundo_numero, somatorio = 0;
    printf("\nDigite um numero: ");
    scanf("%d", &primeiro_numero);
    getchar();
    printf("\nDigite um numero: ");
    scanf("%d", &segundo_numero);
    for (int i = primeiro_numero + 1; i < segundo_numero; i++)
    {
        printf("\n%d", i);
        somatorio += i;
    }
    printf("\nSomatorio: %d", somatorio);
    return 0;
}
