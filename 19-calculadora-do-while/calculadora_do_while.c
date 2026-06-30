#include <stdio.h>

int main() {
    int opcao;
    int numero1, numero2;
    int resultado;
    int resto;

    do {
        printf("\n--- Calculadora ---\n");
        printf("1 - Adicao\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("5 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("\nInforme o primeiro numero: ");
                scanf("%d", &numero1);

                printf("Informe o segundo numero: ");
                scanf("%d", &numero2);

                resultado = numero1 + numero2;

                printf("Resultado da adicao: %d\n", resultado);
                break;

            case 2:
                printf("\nInforme o primeiro numero: ");
                scanf("%d", &numero1);

                printf("Informe o segundo numero: ");
                scanf("%d", &numero2);

                resultado = numero1 - numero2;

                printf("Resultado da subtracao: %d\n", resultado);
                break;

            case 3:
                printf("\nInforme o primeiro numero: ");
                scanf("%d", &numero1);

                printf("Informe o segundo numero: ");
                scanf("%d", &numero2);

                resultado = numero1 * numero2;

                printf("Resultado da multiplicacao: %d\n", resultado);
                break;

            case 4:
                printf("\nInforme o primeiro numero: ");
                scanf("%d", &numero1);

                printf("Informe o segundo numero: ");
                scanf("%d", &numero2);

                if (numero2 == 0) {
                    printf("Denominador nao pode ser zero\n");
                } else {
                    resultado = numero1 / numero2;
                    resto = numero1 % numero2;

                    printf("Resultado da divisao: %d\n", resultado);

                    if (resto != 0) {
                        printf("Resto: %d\n", resto);
                    } else {
                        printf("Nao houve resto.\n");
                    }
                }
                break;

            case 5:
                printf("\nAte logo!\n");
                break;

            default:
                printf("\nOpcao invalida\n");
                break;
        }

    } while (opcao != 5);

    return 0;
}
