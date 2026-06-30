#include <stdio.h>

int main() {
    int matriz[3][3];
    int linha;
    int coluna;
    int soma = 0;

    printf("--- Leitura da Matriz 3x3 ---\n");

    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {
            printf("Digite o valor da linha %d, coluna %d: ", linha, coluna);
            scanf("%d", &matriz[linha][coluna]);

            soma = soma + matriz[linha][coluna];
        }
    }

    printf("\n--- Matriz Informada ---\n");

    for (linha = 0; linha < 3; linha++) {
        for (coluna = 0; coluna < 3; coluna++) {
            printf("%d\t", matriz[linha][coluna]);
        }

        printf("\n");
    }

    printf("\nSoma de todos os elementos: %d\n", soma);

    return 0;
}
