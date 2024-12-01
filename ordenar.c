#include <stdio.h>

void ordenador(int N[], int copia[]) {
    int aux;
    // Copia os elementos de N para copia
    for (int i = 0; i < 11; i++) {
        copia[i] = N[i];
    }

    // Ordena a cópia
    for (int i = 0; i < 11; i++) {
        for (int j = 0; j < 11-1-i; j++) {
            if (copia[j] > copia[j + 1]) {
                aux = copia[j];
                copia[j] = copia[j + 1];
                copia[j + 1] = aux;
            }
        }
    }
}

int main() {
    int N[11] = {5, 2, 3, 4, 10, 3, 8, 2, 5, 6,0};
    int copia[11];  // Cria o array para armazenar a cópia ordenada

    printf("Array original:\n");
    for (int i = 0; i < 11; i++) {
        printf("%d ", N[i]);
    }
    printf("\n");

    // Chama a função para ordenar e passa o array copia
    ordenador(N, copia);
    

    printf("Array ordenado (copia):\n");
    for (int i = 0; i < 11; i++) {
        printf("%d ", copia[i]);
    }
    printf("\n");

    return 0;
}
