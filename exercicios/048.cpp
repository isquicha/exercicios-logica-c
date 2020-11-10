/*
Faça um programa que leia e valide as seguintes informações:
    Nome: maior que 3 caracteres;
    Idade: entre 0 e 150;
    Salário: maior que zero;
    Sexo: 'f' ou 'm';
    Estado Civil: 's', 'c', 'v', 'd';
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>
int main()
{
    char nome[100], sexo, estadoCivil;
    int idade;
    float salario;

    printf("Digite o nome: ");
    scanf("%s", nome);
    while (strlen(nome) < 4)
    {
        printf("\nNome inválido!");
        printf("\nDigite o nome: ");
        scanf("%s", nome);
    }
    printf("\nDigite a idade: ");
    scanf("%i", &idade);
    while ((idade < 0) || (idade > 150))
    {
        printf("\nIdade inválida!");
        printf("\nDigite a idade: ");
        scanf("%i", &idade);
    }
    printf("\nDigite o salário: ");
    scanf("%f", &salario);
    while (salario <= 0)
    {
        printf("\nSalario inválido!");
        printf("\nDigite o salário: ");
        scanf("%f", &salario);
    }
    printf("\nDigite o sexo (f ou m): ");
    getchar();
    scanf("%c", &sexo);
    while ((sexo != 'f') && (sexo != 'm'))
    {
        printf("\nSexo inválido!");
        printf("\nDigite o sexo (f ou m): ");
        getchar();
        scanf("%c", &sexo);
    }
    printf("\nDigite o estado civil (s, c, v, d): ");
    getchar();
    scanf("%c", &estadoCivil);
    while ((estadoCivil != 's') && (estadoCivil != 'c') &&
           (estadoCivil != 'v') && (estadoCivil != 'd'))
    {
        printf("\nEstado civil inválido!");
        printf("\nDigite o estado civil (s, c, v, d): ");
        getchar();
        scanf("%c", &estadoCivil);
    }
    return 0;
}
