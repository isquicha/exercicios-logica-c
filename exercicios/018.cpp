/*
Faça um programa que peça o tamanho de um arquivo para download (em MB) e a
velocidade de um link de Internet (em Mbps), calcule e informe o tempo
aproximado de download do arquivo usando este link (em minutos).
*/
#include <stdio.h>
#include <ctype.h>
#include <cmath>
#include <cstring>
int main()
{
    float tamanhoDoArquivo,
        velocidadeDaInternet,
        tamanhoDoArquivoEmMegaBits,
        tempoDeDownload;
    printf("Digite o tamanho do arquivo em MB (Mega Bytes): ");
    scanf("%f", &tamanhoDoArquivo);
    printf("Digite a velocidade da internet em Mbps (Mega bits por segundo): ");
    scanf("%f", &velocidadeDaInternet);
    // Eu criei a variável abaixo apenas para deixar claro que 1MB são 8Mb.
    // Ela não é totalmente necessária
    tamanhoDoArquivoEmMegaBits = tamanhoDoArquivo * 8;
    tempoDeDownload = tamanhoDoArquivoEmMegaBits / velocidadeDaInternet;
    printf("O tempo aproximado para o download do arquivo é de %.0f segundos",
           tempoDeDownload);
    return 0;
}
