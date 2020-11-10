/*
Altere o programa anterior permitindo ao usuário informar as populações e as
taxas de crescimento iniciais. Valide a entrada e permita repetir a operação.
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>
int main()
{
    // Podemos usar um tipo chamado bool, que na prática deve ser um char ou
    // int
    // true equivale a 1 (ou qualquer coisa diferente de 0) e false equivale a
    // 0
    bool continuar = true;
    char continuarstr;

    float populacao_A, populacao_B, crescimento_A, crescimento_B;
    int anos;

    while (continuar)
    {
        printf("Digite a população de A: ");
        scanf("%f", &populacao_A);
        printf("Digite a população de B: ");
        scanf("%f", &populacao_B);
        printf("Digite o crescimento percentual da população de A: ");
        scanf("%f", &crescimento_A);
        printf("Digite o crescimento percentual da população de B: ");
        scanf("%f", &crescimento_B);
        anos = 0;
        while (true)
        {
            anos++;
            populacao_A = populacao_A * (1 + (crescimento_A / 100));
            populacao_B = populacao_B * (1 + (crescimento_B / 100));
            if (populacao_A >= populacao_B)
            {

                printf("Demorou %d anos para a população de A passar ou "
                       "igualar a de B.",
                       anos);
                printf("A tem %.0f habitantes e B tem %.0f.", populacao_A,
                       populacao_B);
                break;
            }
        }
        printf("Deseja continuar (S/N)? > ");
        getchar();
        scanf("%c", &continuarstr);
        continuar = continuarstr == 'S' || continuarstr == 's' ? true : false;
    }
    return 0;
}
