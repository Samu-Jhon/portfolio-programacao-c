#include <stdio.h>

int main() {
    int vendas[3][4];
    int totais[3];
    int produto;
    int mes;

    printf("--- Relatorio de Vendas ---\n");

    for (produto = 0; produto < 3; produto++) {
        printf("\nProduto %d\n", produto);

        for (mes = 0; mes < 4; mes++) {
            printf("Digite as vendas do mes %d: ", mes + 1);
            scanf("%d", &vendas[produto][mes]);
        }
    }

    for (produto = 0; produto < 3; produto++) {
        totais[produto] = 0;

        for (mes = 0; mes < 4; mes++) {
            totais[produto] = totais[produto] + vendas[produto][mes];
        }
    }

    printf("\n--- Total vendido por produto ---\n");

    for (produto = 0; produto < 3; produto++) {
        printf("Produto %d: %d vendas no total\n", produto, totais[produto]);
    }

    return 0;
}
