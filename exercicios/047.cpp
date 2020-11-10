/*
Faça um programa que leia um nome de usuário e a sua senha e não aceite a senha
igual ao nome do usuário, mostrando uma mensagem de erro e voltando a
pedir as informações.
*/
#include <cmath>
#include <cstring>
#include <ctype.h>
#include <stdio.h>
int main()
{
    char usuario[50], senha[50];
    printf("Digite o nome de usuario: ");
    scanf("%s", usuario);
    printf("Digite a senha: ");
    scanf("%s", senha);
    while (!strcmp(usuario, senha))
    {
        printf("Nome de usuario nao pode ser igual a senha!\n");
        printf("Digite o nome de usuario: ");
        scanf("%s", usuario);
        printf("Digite a senha: ");
        scanf("%s", senha);
    }
    return 0;
}
