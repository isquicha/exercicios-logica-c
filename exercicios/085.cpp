/*
Em uma eleição presidencial existem quatro candidatos.
Os votos são informados por meio de código.
Os códigos utilizados são:
    1, 2, 3, 4  - Votos para os respectivos candidatos
    (você deve montar a tabela ex: 1 - Jose/ 2- João/etc)
    5 - Voto Nulo
    6 - Voto em Branco

Faça um programa que calcule e mostre:
    O total de votos para cada candidato;
    O total de votos nulos;
    O total de votos em branco;
    A percentagem de votos nulos sobre o total de votos;
    A percentagem de votos em branco sobre o total de votos.

Para finalizar o conjunto de votos tem-se o valor zero.
*/
#include <stdio.h>
int main()
{
    printf("Candidatos: \n1 - José\n2 - João\n3 - Maria\n4 - Clara");
    printf("\nDigite 0 para sair, 5 para votar nulo ou 6 para votar em "
           "branco.\n");
    int votos = 0;
    int candidato_1 = 0;
    int candidato_2 = 0;
    int candidato_3 = 0;
    int candidato_4 = 0;
    int nulos = 0;
    int brancos = 0;
    int voto;
    while (true)
    {
        printf("Digite o voto numero %d: ", votos + 1);
        scanf("%d", &voto);
        if (voto == 0)
            break;
        votos++;
        if (voto == 1)
            candidato_1++;
        else if (voto == 2)
            candidato_2++;
        else if (voto == 3)
            candidato_3++;
        else if (voto == 4)
            candidato_4++;
        else if (voto == 5)
            nulos++;
        else if (voto == 6)
            brancos++;
        else
        {
            printf("Voto inválido!\n");
            votos = votos - 1;
        }
    }
    printf("\nResultado da eleição:");
    printf("\nJosé teve %d votos", candidato_1);
    printf("\nJoão teve %d votos", candidato_2);
    printf("\nMaria teve %d votos", candidato_3);
    printf("\nClara teve %d votos", candidato_4);
    printf("\n%d votos foram anulados, ", nulos);
    printf("um total de %.2f%%", 100.0 * (float)nulos / (float)votos);
    printf("\n%d votos foram em branco, ", brancos);
    printf("um total de %.2f%%", 100.0 * (float)brancos / (float)votos);
    return 0;
}
