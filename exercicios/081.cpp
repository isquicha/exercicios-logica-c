/*
Foi feita uma estatística em cinco cidades brasileiras para coletar dados sobre
acidentes de trânsito.

Foram obtidos os seguintes dados:
    Código da cidade;
    Número de veículos de passeio (em 1999);
    Número de acidentes de trânsito com vítimas (em 1999).

Deseja-se saber:
    Qual o maior e menor índice de acidentes de transito
        e a que cidade pertence;
    Qual a média de veículos nas cinco cidades juntas;
    Qual a média de acidentes de trânsito nas cidades com menos de
        2.000 veículos de passeio.
*/
#include <stdio.h>
int main()
{
    int maior_indice = 0, codigo_maior_indice = 0, menor_indice = 10000000,
        codigo_menor_indice = 0, total_de_veiculos = 0,
        cidades_menos_de_2000 = 0, acidentes_cidades_menos_de_2000 = 0, codigo,
        veiculos, acidentes;

    for (int i = 1; i <= 5; i++)
    {
        printf("Digite o codigo da cidade: ");
        scanf("%d", &codigo);
        printf("Digite o número de veículos de passeio: ");
        scanf("%d", &veiculos);
        printf("Digite o número de acidentes: ");
        scanf("%d", &acidentes);

        if (acidentes > maior_indice)
        {
            maior_indice = acidentes;
            codigo_maior_indice = codigo;
        }
        if (acidentes < menor_indice)
        {
            menor_indice = acidentes;
            codigo_menor_indice = codigo;
        }

        total_de_veiculos += veiculos;

        if (veiculos < 2000)
        {
            cidades_menos_de_2000++;
            acidentes_cidades_menos_de_2000 += acidentes;
        }
    }
    printf("A cidade com maior índice de acidentes é a %d", codigo_maior_indice

    );
    printf(" com %d acidentes", maior_indice);
    printf("\nA cidade com menor índice de acidentes é a %d",
           codigo_menor_indice);
    printf(" com %d acidentes", menor_indice);
    printf("\nA média de veículos é de %.2f", (float)total_de_veiculos / 5.0);
    printf("\nA média de acidentes em cidades com menos de 2000 veículos é de "

    );
    printf("%.2f", (float)acidentes_cidades_menos_de_2000 /
                       (float)cidades_menos_de_2000);
    return 0;
}
