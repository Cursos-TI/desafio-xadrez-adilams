#include <stdio.h>

int main() {
    // --- Torre
    int casasTorre = 5;
    printf("Movimento da Torre:\n");
    for (int i = 0; i < casasTorre; i++) {
        printf("Direita\n");
    }

    // --- Bispo
    int casasBispo = 5;
    printf("\nMovimento do Bispo:\n");
    int i = 0;
    while (i < casasBispo) {
        printf("Cima Direita\n");
        i++;
    }

    // --- Rainha
    int casasRainha = 8;
    printf("\nMovimento da Rainha:\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < casasRainha);

    // --- Cavalo (movimento em "L": 2 para baixo + 1 para esquerda)
    // Usamos um loop for externo para iterar sobre os dois segmentos
    // (vertical e horizontal) e um while interno para imprimir cada passo.
    const int casasBaixo = 2;
    const int casasEsquerda = 1;

    printf("\nMovimento do Cavalo:\n");
    for (int segmento = 0; segmento < 2; segmento++) {
        // Determina quantos passos faz neste segmento:
        // segmento 0 → movimento vertical; segmento 1 → horizontal.
        int passos = (segmento == 0) ? casasBaixo : casasEsquerda;
        int j = 0;

        // Imprime cada passo conforme o segmento
        while (j < passos) {
            if (segmento == 0) {
                printf("Baixo\n");
            } else {
                printf("Esquerda\n");
            }
            j++;
        }
    }

    return 0;
}
