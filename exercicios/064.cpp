/*
Altere o programa de cálculo do fatorial (61), permitindo ao usuário calcular o
fatorial várias vezes e limitando o fatorial a números inteiros positivos e
menores que 16.
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>
int main()
{
    int fatorial, numero;
    char continuar;
    while (true)
    {

        printf("Digite um numero: ");
        scanf("%d", &numero);
        fatorial = 1;
        if (numero > 0 && numero < 16)
        {
            for (int i = numero; i >= 1; i--)
                fatorial *= i;
            printf("O fatorial de %d é %d", numero, fatorial);
            printf("\nDeseja continuar? (S/N): ");
            getchar();
            scanf("%c", &continuar);
            if (continuar != 's' && continuar != 'S')
                break;
        }
    }
    return 0;
}
