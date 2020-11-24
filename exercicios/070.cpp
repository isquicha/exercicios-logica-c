/*
Numa eleição existem três candidatos.
Faça um programa que peça o número total de eleitores.
Peça para cada eleitor votar e ao final mostrar o número de votos
de cada candidato.
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>
int main()
{
    int votos_candidato_1 = 0, votos_candidato_2 = 0, votos_candidato_3 = 0,
        eleitores;
    char voto;
    printf("Digite o numero de eleitores: ");
    scanf("%d", &eleitores);
    getchar();
    for (int i = 1; i <= eleitores; i++)
    {
        printf("Digite o numero (1/2/3) do candidato em quem o eleitor %d "
               "quer votar: ",
               i);
        scanf("%c", &voto);
        getchar();
        if (voto == '1')
            votos_candidato_1++;
        if (voto == '2')
            votos_candidato_2++;
        if (voto == '3')
            votos_candidato_3++;
    }
    printf("Votação encerrada"
           "\nCandidato 1: %d voto(s)"
           "\nCandidato 2: %d voto(s)"
           "\nCandidato 3: %d voto(s)",
           votos_candidato_1, votos_candidato_2, votos_candidato_3);
    return 0;
}
