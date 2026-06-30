#include <stdio.h>

struct OrdemServico {
    int id;
    char cliente[30];
    float valor;
    int status;
};

int main() {
    struct OrdemServico oficina[3];
    int op = -1, qtd = 0, i, id, achou;
    float total;

    while (op != 0) {
        printf("\n1-Cadastrar  2-Listar  3-Concluir  4-Faturamento  0-Sair\n");
        printf("Opcao: ");
        scanf("%d", &op);

        switch (op) {
            case 1:
                if (qtd == 3) {
                    printf("Limite atingido.\n");
                    break;
                }

                printf("ID: ");
                scanf("%d", &oficina[qtd].id);

                printf("Cliente: ");
                scanf("%s", oficina[qtd].cliente);

                printf("Valor: ");
                scanf("%f", &oficina[qtd].valor);

                oficina[qtd].status = 0;
                qtd++;

                printf("Cadastrado.\n");
                break;

            case 2:
                for (i = 0; i < qtd; i++) {
                    printf("\nID:%d Cliente:%s Valor:%.2f Status:%d",
                           oficina[i].id,
                           oficina[i].cliente,
                           oficina[i].valor,
                           oficina[i].status);
                }
                break;

            case 3:
                printf("ID para concluir: ");
                scanf("%d", &id);

                achou = 0;

                for (i = 0; i < qtd; i++) {
                    if (oficina[i].id == id) {
                        oficina[i].status = 1;
                        achou = 1;
                    }
                }

                if (achou == 1)
                    printf("Concluido.\n");
                else
                    printf("Nao encontrado.\n");

                break;

            case 4:
                total = 0;

                for (i = 0; i < qtd; i++) {
                    if (oficina[i].status == 1)
                        total = total + oficina[i].valor;
                }

                printf("Total faturado: R$ %.2f\n", total);
                break;

            case 0:
                printf("Fim.\n");
                break;

            default:
                printf("Opcao invalida.\n");
        }
    }

    return 0;
}
