/*
Faça um Programa que leia um número inteiro maior que 0 e menor que 1000 e
imprima a quantidade de centenas, dezenas e unidades do mesmo.

Observando os termos no plural a colocação do "e", da vírgula entre outros.

Exemplo:
326 = 3 centenas, 2 dezenas e 6 unidades
12 = 1 dezena e 2 unidades

Testar com:
326, 300, 100, 320, 310,305, 301, 101, 311, 111, 25, 20, 10, 21, 11, 1, 7 e 16
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>
int main()
{
    int vetor[] = {326, 300, 100, 320, 310, 305, 301, 101, 311,
                   111, 25,  20,  10,  21,  11,  1,   7,   16};
    int numero, unidade, dezena, centena;
    // Vou utilizar vetores de caracteres pois já falei um pouco de strings em
    // outras resoluções Lembrando que vamos precisar incluir a biblioteca de
    // string
    char separador1[5], separador2[5], unidadeStr[20], dezenaStr[20],
        centenaStr[20];
    for (int i = 0, numero = vetor[i]; i < 18; i++, numero = vetor[i])
    {
        // O laço for e a vetor foram utilizados apenas para o teste automático
        // dos valores você pode fazer os testes manualmente. Basta retirar
        // tudo de dentro do laço e descomentar as 2 linhas abaixo!
        // printf("Digite um inteiro menor que 1000: ");
        // scanf("%i", &numero);
        printf("\nNumero: %i", numero);
        unidade = numero % 10;
        dezena = (numero % 100) / 10;
        centena = numero / 100;
        strcpy(separador1, "");
        strcpy(separador2, "");
        // Se tivermos ambos unidade, dezena e centena
        if (centena > 0 && dezena > 0 && unidade > 0)
        {
            strcpy(separador1, " , "); // Precisamos de uma vírgula
            // Os espaços entre as aspas são importantes
            strcpy(separador2, " e "); // E de um e
        }
        // Senão, se tivermos uma centena e uma dezena
        else if (centena > 0 && dezena > 0)
        {
            strcpy(separador1, " e "); // Precisamos só do e, na frente
            strcpy(separador2, "");
        }
        // Já se tivermos só a centena e a unidade, ou só a dezena e a unidade
        else if ((centena > 0 && unidade > 0) || (dezena > 0 && unidade > 0))
        {
            strcpy(separador1,
                   ""); // Não haverá separador entre centena e dezena
            strcpy(separador2,
                   " e "); // Mas sim entre centena/dezena e unidade
        }
        // Nos outros casos só temos um dos três valores, e os separadores
        // podem continuar sendo vazios ("")

        // Se a centena não estiver zerada
        if (centena > 0)
        {
            if (centena == 1)
                // Se ela for igual a 1, colocamos nela por extenso no singular
                strcpy(centenaStr, "1 centena");
            else
                // Senão, colocamos ela por extenso no plural
                sprintf(centenaStr, "%i centenas", centena);
            // O sprintf é tipo o printf, mas te permite escolher onde vai
            // printar visto que o printf printa sempre na saída padrão, que
            // geralmente é o monitor Com o sprintf você pode printar inclusive
            // em uma variável do tipo string =D
        }
        else
            // Se estiver zerada, colocamos nela uma string vazia para nada ser
            // impresso
            strcpy(centenaStr, "");
        // Mesa coisa para a dezena
        if (dezena > 0)
        {
            if (dezena == 1)
                strcpy(dezenaStr, "1 dezena");
            else
                sprintf(dezenaStr, "%i dezenas", dezena);
        }
        else
            strcpy(dezenaStr, "");
        // Mesa coisa para a unidade
        if (unidade > 0)
        {
            if (unidade == 1)
                strcpy(unidadeStr, "1 unidade");
            else
                sprintf(unidadeStr, "%i unidades", unidade);
        }
        else
            strcpy(unidadeStr, "");

        // Por fim printamos o resultado
        printf("\n%s%s%s%s%s", centenaStr, separador1, dezenaStr, separador2,
               unidadeStr);
    }
    return 0;
}
