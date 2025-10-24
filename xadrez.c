#include <stdio.h>

int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;
    int casasBaixo = 2;
    int casasEsquerda = 1;

    printf("Movimento da Torre:\n");
    for (int i = 1; i <= casasTorre; i++) {
        printf("Direita\n");
    }

    printf("\n");

    printf("Movimento do Bispo:\n");
    int i = 1;
    while (i <= casasBispo) {
        printf("Cima, Direita\n");
        i++;
    }

    printf("\n");

    printf("Movimento da Rainha:\n");
    int j = 1;
    do {
        printf("Esquerda\n");
        j++;
    } while (j <= casasRainha);

    printf("\n");

    printf("Movimento do Cavalo:\n");
    for (int x = 1; x <= casasBaixo; x++) {
        printf("Baixo\n");
        int y = 0;
        while (y < casasEsquerda && x == casasBaixo) {
            printf("Esquerda\n");
            y++;
        }
    }

    printf("\n--- Fim da simulacao ---\n");

    return 0;
}