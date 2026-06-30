#include <stdio.h>

struct Jogo {
    char nome[30];
    char tipo[30];
    int estoque;
};

int main() {
    struct Jogo jogos[3];
    int i, achou = 0;

    setbuf(stdout, NULL);

    for (i = 0; i < 3; i++) {
        printf("\nCadastro do jogo %d\n", i + 1);

        printf("Nome do jogo: ");
        scanf(" %29[^\n]", jogos[i].nome);

        printf("Plataforma/Tipo: ");
        scanf(" %29[^\n]", jogos[i].tipo);

        printf("Quantidade em estoque: ");
        scanf("%d", &jogos[i].estoque);
    }

    printf("\n=== ALERTA DE ESTOQUE ZERADO ===\n");

    for (i = 0; i < 3; i++) {
        if (jogos[i].estoque == 0) {
            printf("Nome: %s | Tipo: %s\n", jogos[i].nome, jogos[i].tipo);
            achou = 1;
        }
    }

    if (achou == 0) {
        printf("Nenhum jogo com estoque zerado.\n");
    }

    return 0;
}
