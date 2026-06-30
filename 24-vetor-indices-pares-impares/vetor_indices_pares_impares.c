#include <stdio.h>

int main() {
    int original[10];
    int indicesPares[5];
    int indicesImpares[5];

    int i;
    int contadorPar = 0;
    int contadorImpar = 0;

    printf("--- Leitura dos numeros ---\n");

    for (i = 0; i < 10; i++) {
        printf("Digite o numero do indice %d: ", i);
        scanf("%d", &original[i]);
    }

    for (i = 0; i < 10; i++) {
        if (i % 2 == 0) {
            indicesPares[contadorPar] = original[i];
            contadorPar++;
        } else {
            indicesImpares[contadorImpar] = original[i];
            contadorImpar++;
        }
    }

    printf("\n--- Vetor Original ---\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", original[i]);
    }

    printf("\n\n--- Elementos dos indices pares ---\n");
    for (i = 0; i < contadorPar; i++) {
        printf("%d ", indicesPares[i]);
    }

    printf("\n\n--- Elementos dos indices impares ---\n");
    for (i = 0; i < contadorImpar; i++) {
        printf("%d ", indicesImpares[i]);
    }

    printf("\n");

    return 0;
}
