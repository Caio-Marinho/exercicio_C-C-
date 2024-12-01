#include <stdio.h>
#include <locale.h>

int maior(int N[]) {
    int maior = N[0]; // Inicializado com o primeiro elemento
    for (int i = 0; i < 10; i++) {
        if (N[i] > maior) {
            maior = N[i];
        }
    }
    return maior;
}

int menor(int N[]) {
    int menor = N[0]; // Já estava correto
    for (int i = 0; i < 10; i++) {
        if (N[i] < menor) {
            menor = N[i];
        }
    }
    return menor;
}

int main() {
    int N[10] = {5, 2, 3, 4, 10, 3, 8, 2, 5, 6};
    setlocale(LC_ALL, "Portuguese");
    int max = maior(N);
    int min = menor(N);

    printf("O maior é: %d\n", max);
    printf("O menor é: %d\n", min);

    return 0;
}
