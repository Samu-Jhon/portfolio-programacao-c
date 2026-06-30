#include <stdio.h>

int main() {
    int quantidadeTermos;
    int primeiro = 0;
    int segundo = 1;
    int proximo;
    int i;

    printf("Informe a quantidade de termos da sequencia de Fibonacci: ");
    scanf("%d", &quantidadeTermos);

    if (quantidadeTermos <= 0) {
        printf("\nQuantidade invalida.\n");
    } else {
        printf("\nSequencia de Fibonacci:\n");

        for (i = 1; i <= quantidadeTermos; i++) {
            if (i == 1) {
                printf("%d ", primeiro);
            } else if (i == 2) {
                printf("%d ", segundo);
            } else {
                proximo = primeiro + segundo;

                printf("%d ", proximo);

                primeiro = segundo;
                segundo = proximo;
            }
        }

        printf("\n");
    }

    return 0;
}
