#include <stdio.h>

void criar_matriz(int matriz[2][2]) {
    int i, j;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            matriz[i][j] = 2;
        }
    }
}

int main() {
    int minha_matriz[2][2];
    criar_matriz(minha_matriz);

    // Exemplo: Imprimir a matriz
    printf("Matriz 2x2:\n");
    int i, j;
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            printf("%d ", minha_matriz[i][j]);
        }
        printf("\n");
    }

    return 0;
}
