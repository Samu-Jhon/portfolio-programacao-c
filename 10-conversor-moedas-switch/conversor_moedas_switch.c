#include <stdio.h>

int main()
{
    float reais, convertido;
    int opcao;

    printf("Digite o valor em Reais: R$ ");
    scanf("%f", &reais);

    printf("\n=== Conversor de Moedas ===\n");
    printf("1 - Dolar\n");
    printf("2 - Euro\n");
    printf("3 - Sair\n");
    printf("Escolha uma opcao: ");
    scanf("%d", &opcao);

    switch (opcao) {
        case 1:
            convertido = reais / 5.00;
            printf("\nValor em Dolar: US$ %.2f\n", convertido);
            break;

        case 2:
            convertido = reais / 5.50;
            printf("\nValor em Euro: %.2f\n", convertido);
            break;

        case 3:
            printf("\nPrograma encerrado.\n");
            break;

        default:
            printf("\nOpcao invalida.\n");
            break;
    }

    return 0;
}
