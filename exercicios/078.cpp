/*
Uma academia deseja fazer um senso entre seus clientes para descobrir o mais
alto, o mais baixo, a mais gordo e o mais magro, para isto você deve fazer um
programa que pergunte a cada um dos clientes da academia seu código,
sua altura e seu peso.

O final da digitação de dados deve ser dada quando o usuário digitar 0 (zero)
no campo código.

Ao encerrar o programa também deve ser informados os códigos e valores do
clente mais alto, do mais baixo, do mais gordo e do mais magro, além da média
das alturas e dos pesos dos clientes.
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>
int main()
{
    // ! O ideal é que o código fosse uma string (vetor de char), mas para
    // ! deixar as coisas mais simples, vou usar um int
    int codigo;
    int codigo_mais_gordo;
    int codigo_mais_magro;
    int codigo_mais_alto;
    int codigo_mais_baixo;

    // ? No lugar de -math.huge e math.huge, vão os valores 0 e 1000 pois
    // ? Não dá pra alguém pesar menos que 0kg
    float peso_mais_gordo = 0;
    // ? Não deve ter alguém que pese mais que 1 tonelada
    float peso_mais_magro = 1000;
    // ? Mesma ideia pro peso serve para a altura
    int altura_mais_alto = 0;
    int altura_mais_baixo = 500; // * Altura vai ser em centímetros

    float peso;
    int altura;
    float media_dos_pesos;
    float media_das_alturas;

    float soma_dos_pesos = 0;
    float soma_das_alturas = 0;
    int quantidade_de_clientes = 0;

    while (true)
    {
        printf("Digite o codigo do cliente: ");
        scanf("%d", &codigo);
        if (codigo == 0)
            break;
        quantidade_de_clientes++;

        printf("Digite a altura do cliente (em centímetros): ");
        scanf("%d", &altura);
        printf("Digite o peso do cliente (em kg): ");
        scanf("%f", &peso);

        soma_dos_pesos += peso;
        soma_das_alturas += altura;

        if (altura > altura_mais_alto)
        {
            altura_mais_alto = altura;
            codigo_mais_alto = codigo;
        }

        if (altura < altura_mais_baixo)
        {
            altura_mais_baixo = altura;
            codigo_mais_baixo = codigo;
        }

        if (peso > peso_mais_gordo)
        {
            peso_mais_gordo = peso;
            codigo_mais_gordo = codigo;
        }

        if (peso < peso_mais_magro)
        {
            peso_mais_magro = peso;
            codigo_mais_magro = codigo;
        }
    }

    media_das_alturas = soma_das_alturas / (float)quantidade_de_clientes;
    media_dos_pesos = soma_dos_pesos / (float)quantidade_de_clientes;

    printf("O cliente mais alto é o que tem o código %d", codigo_mais_alto);
    printf(" e ele possui %dcm de altura\n", altura_mais_alto);
    printf("O cliente mais baixo é o que tem o código %d", codigo_mais_baixo);
    printf(" e ele possui %dcm de altura\n", altura_mais_baixo);
    printf("O cliente mais gordo é o que tem o código %d", codigo_mais_gordo);
    printf(" e ele pesa %.2fkg\n", peso_mais_gordo);
    printf("O cliente mais magro é o que tem o código %d", codigo_mais_magro);
    printf(" e ele pesa %.2fkg\n", peso_mais_magro);
    printf("A média de altura dos clientes é de %.2fcm\n", media_das_alturas);
    printf("A média de peso dos clientes é de %.2fkg", media_dos_pesos);

    return 0;
}
