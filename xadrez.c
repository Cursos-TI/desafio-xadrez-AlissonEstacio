#include <stdio.h>

#define MOVIMENTO_BISPO 5
#define MOVIMENTO_TORRE 5
#define MOVIMENTO_RAINHA 8

int main() {

    printf("Movimentação do Bispo:\n");
    for (int i = 0; i < MOVIMENTO_BISPO; i++) {
        printf("Cima e Direita\n");
    }

    return 0;
}
