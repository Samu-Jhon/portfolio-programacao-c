#include <stdio.h>

int main()
{
    float valorCompra, desconto, valorFinal;

    printf("Digite o valor total da compra: R$ ");
    scanf("%f", &valorCompra);

    if (valorCompra <= 100) {
        desconto = 0;
    }
    else if (valorCompra <= 500) {
        desconto = valorCompra * 0.05;
    }
    else if (valorCompra <= 1000) {
        desconto = valorCompra * 0.10;
    }
    else {
        desconto = valorCompra * 0.15;
    }

    valorFinal = valorCompra - desconto;

    printf("\nValor do desconto: R$ %.2f\n", desconto);
    printf("Valor final a pagar: R$ %.2f\n", valorFinal);

    return 0;
}
