#include <stdio.h>

void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

void moverBispoRecursivo(int vertical, int horizontal) {
    if (vertical == 0) return;
    for (int i = 0; i < horizontal; i++) {
        printf("Cima, Direita\n");
    }
    moverBispoRecursivo(vertical - 1, horizontal);
}

void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

void moverCavalo() {
    int movVertical = 2;
    int movHorizontal = 1;

    for (int i = 1, j = 0; i <= movVertical || j < movHorizontal; i++, j++) {
        if (i <= movVertical) {
            printf("Cima\n");
            if (i == movVertical && j < movHorizontal) {
                j = 0;
                while (j < movHorizontal) {
                    printf("Direita\n");
                    j++;
                    if (j >= movHorizontal) break;
                }
            }
        } else {
            continue;
        }
    }
}

int main() {
    int casasTorre = 5;
    int casasBispo = 5;
    int casasRainha = 8;

    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    printf("\n");

    printf("Movimento do Bispo:\n");
    moverBispoRecursivo(1, casasBispo);

    printf("\n");

    printf("Movimento da Rainha:\n");
    moverRainha(casasRainha);

    printf("\n");

    printf("Movimento do Cavalo:\n");
    moverCavalo();

    printf("\n--- Fim da simulacao ---\n");
    return 0;
}
