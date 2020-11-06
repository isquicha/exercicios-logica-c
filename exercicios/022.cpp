/*
Faça um Programa que verifique se uma letra digitada é vogal ou consoante.
*/
#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>

void forma1()
{
    char letra;
    printf("Digite uma letra: ");
    scanf("%c", &letra);
    if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U' || letra == 'a' || letra == 'e' || letra == 'i' || letra == 'o' || letra == 'u')
    {
        printf("Vogal");
    }
    else
    {
        printf("Consoante");
    }
}

void forma2()
{
    char letra;
    printf("Digite uma letra: ");
    scanf("%c", &letra);

    // toupper está na biblioteca ctype
    //Agora a letra é maiúscula, e assim reduzimos as comparações
    letra = toupper(letra);

    if (letra == 'A' || letra == 'E' || letra == 'I' || letra == 'O' || letra == 'U')
    {
        printf("Vogal");
    }
    else
    {
        printf("Consoante");
    }
}

void forma3()
{
    char letra;
    printf("Digite uma letra: ");
    scanf("%c", &letra);
    switch (letra)
    {
    case 'A':
    case 'E':
    case 'I':
    case 'O':
    case 'U':
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
        printf("Vogal");
        break;
    default:
        printf("Consoante");
        break;
    }
}

int main()
{
    forma1();
    // forma2();
    // forma3();
    return 0;
}
