#include <stdio.h>
#include <string.h>

int main() {
    int quantidadeCidades;
    int contador = 1;

    char nomeCidade[50];
    char cidadeMenor[50];
    char cidadeMaior[50];

    int populacao;
    int menorPopulacao;
    int maiorPopulacao;

    int totalPopulacao = 0;
    float mediaPopulacao;

    printf("Informe a quantidade de cidades que deseja cadastrar: ");
    scanf("%d", &quantidadeCidades);

    if (quantidadeCidades <= 0) {
        printf("\nQuantidade de cidades invalida.\n");
    } else {

        while (contador <= quantidadeCidades) {
            printf("\n--- Cidade %d ---\n", contador);

            printf("Informe o nome da cidade: ");
            scanf(" %[^\n]", nomeCidade);

            printf("Informe a populacao da cidade: ");
            scanf("%d", &populacao);

            totalPopulacao = totalPopulacao + populacao;

            if (contador == 1) {
                menorPopulacao = populacao;
                maiorPopulacao = populacao;

                strcpy(cidadeMenor, nomeCidade);
                strcpy(cidadeMaior, nomeCidade);
            } else {
                if (populacao < menorPopulacao) {
                    menorPopulacao = populacao;
                    strcpy(cidadeMenor, nomeCidade);
                }

                if (populacao > maiorPopulacao) {
                    maiorPopulacao = populacao;
                    strcpy(cidadeMaior, nomeCidade);
                }
            }

            contador++;
        }

        mediaPopulacao = totalPopulacao / (float) quantidadeCidades;

        printf("\n--- Resultado do Censo ---\n");
        printf("Cidade com menor populacao: %s - %d habitantes\n", cidadeMenor, menorPopulacao);
        printf("Cidade com maior populacao: %s - %d habitantes\n", cidadeMaior, maiorPopulacao);
        printf("Populacao media: %.2f habitantes\n", mediaPopulacao);
    }

    return 0;
}
