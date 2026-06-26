#include <stdio.h>

int main()
{
    int codigo;

    printf("=== Sistema de Reciclagem ===\n\n");

    printf("Digite o codigo do material:\n");
    printf("1 - Papel\n");
    printf("2 - Plastico\n");
    printf("3 - Vidro\n");
    printf("4 - Metal\n");
    printf("5 - Organico\n");
    printf("Opcao: ");
    scanf("%d", &codigo);

    switch (codigo) {
        case 1:
            printf("Coletor AZUL. Certifique-se de que o papel esteja seco.\n");
            break;

        case 2:
            printf("Coletor VERMELHO. Retire restos de comida da embalagem.\n");
            break;

        case 3:
            printf("Coletor VERDE. Cuidado com bordas cortantes!\n");
            break;

        case 4:
            printf("Coletor AMARELO. Amasse as latas para economizar espaco.\n");
            break;

        case 5:
            printf("Coletor MARROM. Destinado a restos de alimentos e cascas.\n");
            break;

        default:
            printf("Codigo invalido! Por favor, consulte a tabela de materiais.\n");
            break;
    }

    return 0;
}
