#include <stdio.h>
#include <stdlib.h>

void imprime_histograma(int* vetor[], int categorias) {
    for (int i = 0; i < categorias; i++) {
        if (vetor[i] == NULL) {
            printf("0\n");
        } else {
            printf("%d ", *vetor[i]);
            for (int j = 0; j < *vetor[i]; j++) {
                printf("*");
            }
            printf("\n");
        }
    }
}

int main() {
    int categorias;

    scanf("%d", &categorias);

    int* vendas[categorias];

    for (int i = 0; i < categorias; i++) {
        int quantidade;
        scanf("%d", &quantidade);

        if (quantidade == 0) {
            vendas[i] = NULL;
        } else {
            vendas[i] = (int*)malloc(sizeof(int));
            *vendas[i] = quantidade;
        }
    }

    imprime_histograma(vendas, categorias);

    for (int i = 0; i < categorias; i++) {
        free(vendas[i]);
    }

    return 0;
}
