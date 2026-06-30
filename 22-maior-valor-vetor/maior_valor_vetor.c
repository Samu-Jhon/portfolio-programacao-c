#include <stdio.h>

int main() {
    int numeros[100];
    int quantidade;
    int maiorValor;
    int indiceMaior;
    int i;

    printf("--- Localizar o Maior Valor ---\n");

    printf("Informe quantos numeros deseja inserir, limite de 100: ");
    scanf("%d", &quantidade);

    if (quantidade <= 0 || quantidade > 100) {
        printf("\nQuantidade invalida. Informe um valor entre 1 e 100.\n");
    } else {

        for (i = 0; i < quantidade; i++) {
            printf("Digite o numero da posicao %d: ", i);
            scanf("%d", &numeros[i]);
        }

        maiorValor = numeros[0];
        indiceMaior = 0;

        for (i = 1; i < quantidade; i++) {
            if (numeros[i] > maiorValor) {
                maiorValor = numeros[i];
                indiceMaior = i;
            }
        }

        printf("\n--- Resultado ---\n");
        printf("Maior valor digitado: %d\n", maiorValor);
        printf("Indice do maior valor: %d\n", indiceMaior);
    }

    return 0;
}
