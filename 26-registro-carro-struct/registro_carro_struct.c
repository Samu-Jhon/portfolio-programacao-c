#include <stdio.h>

struct Carro {
    char marca[30];
    int ano;
    float preco;
};

int main() {
    struct Carro carro;
    char precoTexto[40];
    long reais = 0, totalCentavos, precoComDesconto;
    int centavos = 0, i, decimal = 0, qtdDecimal = 0;
    long parteReais;
    int parteCentavos;

    setbuf(stdout, NULL);

    printf("Marca do carro: ");
    scanf(" %29[^\n]", carro.marca);

    printf("Ano de fabricacao: ");
    scanf("%d", &carro.ano);

    printf("Preco base: R$ ");
    scanf(" %39[^\n]", precoTexto);

    for (i = 0; precoTexto[i] != '\0'; i++) {
        if (precoTexto[i] == ',') {
            decimal = 1;
        } else if (precoTexto[i] >= '0' && precoTexto[i] <= '9') {
            if (decimal == 0) {
                reais = reais * 10 + (precoTexto[i] - '0');
            } else if (qtdDecimal < 2) {
                centavos = centavos * 10 + (precoTexto[i] - '0');
                qtdDecimal++;
            }
        }
    }

    if (qtdDecimal == 1) {
        centavos = centavos * 10;
    }

    totalCentavos = reais * 100 + centavos;
    precoComDesconto = (totalCentavos * 90 + 50) / 100;
    carro.preco = precoComDesconto / 100.0;

    parteReais = precoComDesconto / 100;
    parteCentavos = precoComDesconto % 100;

    printf("\n=== FICHA DO CARRO ===\n");
    printf("Marca: %s\n", carro.marca);
    printf("Ano: %d\n", carro.ano);
    printf("Preco com desconto: R$ ");

    if (parteReais >= 1000000) {
        printf("%ld.%03ld.%03ld,%02d\n", parteReais / 1000000, (parteReais / 1000) % 1000, parteReais % 1000, parteCentavos);
    } else if (parteReais >= 1000) {
        printf("%ld.%03ld,%02d\n", parteReais / 1000, parteReais % 1000, parteCentavos);
    } else {
        printf("%ld,%02d\n", parteReais, parteCentavos);
    }

    return 0;
}
