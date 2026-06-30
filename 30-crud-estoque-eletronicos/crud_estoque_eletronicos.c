#include <stdio.h>
#include <string.h>

#define MAX_PRODUTOS   100
#define LIMITE_ESTOQUE 5

struct Produto {
    int id, estoque, ativo;
    char nome[60], categoria[30];
    float preco;
};

// -- Auxiliares de Interface --
void limparBuffer() {
    while (getchar() != '\n');
}

void separador() {
    printf("--------------------------------------------------------------------------------\n");
}

int encontrarIndiceGeral(struct Produto produtos[], int totalProdutos, int id) {
    int i;

    for (i = 0; i < totalProdutos; i++) {
        if (produtos[i].id == id) {
            return i;
        }
    }

    return -1;
}

int encontrarIndicePorId(struct Produto produtos[], int totalProdutos, int id) {
    int i;

    for (i = 0; i < totalProdutos; i++) {
        if (produtos[i].id == id && produtos[i].ativo) {
            return i;
        }
    }

    return -1;
}

void exibirProduto(struct Produto p) {
    printf("ID: %d\n", p.id);
    printf("  Nome      : %s\n", p.nome);
    printf("  Categoria : %s\n", p.categoria);
    printf("  Preco     : R$ %.2f\n", p.preco);
    printf("  Estoque   : %d unidade(s)\n", p.estoque);
    separador();
}

void preencherDadosIniciais(struct Produto produtos[], int *totalProdutos, int *proximoId) {
    int i;

    struct Produto iniciais[] = {
        {0, 10, 1, "Mouse Logitech M90", "Periferico", 49.90f},
        {0, 5, 1, "Teclado Logitech K120", "Periferico", 79.90f},
        {0, 2, 1, "Monitor LG 24 pol. Full HD", "Monitor", 799.90f},
        {0, 8, 1, "Headset Redragon Zeus X", "Audio", 249.90f},
        {0, 15, 1, "Pendrive SanDisk 64GB", "Armazenamento", 39.90f}
    };

    for (i = 0; i < 5; i++) {
        iniciais[i].id = (*proximoId)++;
        produtos[(*totalProdutos)++] = iniciais[i];
    }
}

// -- CRUD --
void cadastrar(struct Produto produtos[], int *totalProdutos, int *proximoId) {
    struct Produto n;

    if (*totalProdutos >= MAX_PRODUTOS) {
        printf("\n[!] Limite atingido.\n");
        return;
    }

    n.id = (*proximoId)++;
    n.ativo = 1;

    printf("\n--- Cadastrar Novo Produto ---\n");

    printf("Nome: ");
    fgets(n.nome, 60, stdin);
    n.nome[strcspn(n.nome, "\n")] = '\0';

    printf("Categoria: ");
    fgets(n.categoria, 30, stdin);
    n.categoria[strcspn(n.categoria, "\n")] = '\0';

    printf("Preco (R$): ");
    scanf("%f", &n.preco);

    printf("Qtd. Estoque: ");
    scanf("%d", &n.estoque);
    limparBuffer();

    produtos[(*totalProdutos)++] = n;

    printf("\n[OK] Produto #%d cadastrado!\n", n.id);
}

void listarTodos(struct Produto produtos[], int totalProdutos) {
    int i;
    int encontrados = 0;

    printf("\n--- Lista de Produtos Cadastrados ---\n");
    separador();

    for (i = 0; i < totalProdutos; i++) {
        if (produtos[i].ativo) {
            exibirProduto(produtos[i]);
            encontrados++;
        }
    }

    if (encontrados == 0) {
        printf("Nenhum produto ativo cadastrado.\n");
    }
}

void buscarPorId(struct Produto produtos[], int totalProdutos) {
    int id;
    int idx;

    printf("\n--- Buscar ID: ");
    scanf("%d", &id);
    limparBuffer();

    idx = encontrarIndicePorId(produtos, totalProdutos, id);

    if (idx == -1) {
        printf("\n[!] Nao encontrado.\n");
    } else {
        printf("\n");
        separador();
        exibirProduto(produtos[idx]);
    }
}

void atualizar(struct Produto produtos[], int totalProdutos) {
    int id, op;
    int idx;

    printf("\n--- Atualizar Produto ---\n");
    printf("ID: ");
    scanf("%d", &id);
    limparBuffer();

    idx = encontrarIndicePorId(produtos, totalProdutos, id);

    if (idx == -1) {
        printf("\n[!] Nao encontrado.\n");
        return;
    }

    printf("\nProduto: %s\n", produtos[idx].nome);
    printf("1. Preco | 2. Estoque | 3. Ambos: ");
    scanf("%d", &op);
    limparBuffer();

    if (op == 1 || op == 3) {
        printf("Novo Preco: ");
        scanf("%f", &produtos[idx].preco);
        limparBuffer();
    }

    if (op == 2 || op == 3) {
        printf("Novo Estoque: ");
        scanf("%d", &produtos[idx].estoque);
        limparBuffer();
    }

    printf("\n[OK] Atualizado!\n");
}

void desativar(struct Produto produtos[], int totalProdutos) {
    int id;
    int idx;
    char conf;

    printf("\n--- Desativar ID: ");
    scanf("%d", &id);
    limparBuffer();

    idx = encontrarIndicePorId(produtos, totalProdutos, id);

    if (idx == -1) {
        printf("\n[!] Nao encontrado ou ja desativado.\n");
        return;
    }

    printf("Confirmar desativacao de '%s'? (s/n): ", produtos[idx].nome);
    scanf("%c", &conf);
    limparBuffer();

    if (conf == 's' || conf == 'S') {
        produtos[idx].ativo = 0;
        printf("\n[OK] Desativado!\n");
    }
}

void reativar(struct Produto produtos[], int totalProdutos) {
    int id;
    int idx;
    char conf;

    printf("\n--- Reativar ID: ");
    scanf("%d", &id);
    limparBuffer();

    idx = encontrarIndiceGeral(produtos, totalProdutos, id);

    if (idx == -1) {
        printf("\n[!] ID nao encontrado no sistema.\n");
        return;
    }

    if (produtos[idx].ativo == 1) {
        printf("\n[!] Este produto ja esta ativo.\n");
        return;
    }

    printf("Produto encontrado: '%s' (Desativado)\n", produtos[idx].nome);
    printf("Deseja reativar este produto? (s/n): ");
    scanf("%c", &conf);
    limparBuffer();

    if (conf == 's' || conf == 'S') {
        produtos[idx].ativo = 1;
        printf("\n[OK] Produto #%d reativado com sucesso!\n", produtos[idx].id);
    }
}

// -- PROCESSAMENTOS E RELATORIOS --
int calcularMetricas(
    struct Produto produtos[],
    int totalProdutos,
    float *totEst,
    float *somaP,
    int *maior,
    int *menor,
    int modoTabela
) {
    int i;
    int qtd = 0;

    for (i = 0; i < totalProdutos; i++) {
        if (produtos[i].ativo) {
            if (modoTabela) {
                printf("%d\t%-25s\t%-15s\t%.2f\t%d\n",
                       produtos[i].id,
                       produtos[i].nome,
                       produtos[i].categoria,
                       produtos[i].preco,
                       produtos[i].estoque);
            }

            *totEst = *totEst + produtos[i].preco * produtos[i].estoque;
            *somaP = *somaP + produtos[i].preco;

            if (qtd == 0 || produtos[i].preco > produtos[*maior].preco) {
                *maior = i;
            }

            if (qtd == 0 || produtos[i].preco < produtos[*menor].preco) {
                *menor = i;
            }

            qtd++;
        }
    }

    return qtd;
}

void relatorioGeral(struct Produto produtos[], int totalProdutos, int resumido) {
    float totEst = 0;
    float somaP = 0;
    int maior = 0;
    int menor = 0;
    int qtd;

    if (resumido) {
        printf("\n--- Processamentos Automaticos ---\n");
    } else {
        printf("\n--- Relatorio: Tabela Geral ---\n");
        printf("ID\tNome\t\t\t\tCategoria\tPreco(R$)\tEstoque\n");
    }

    separador();

    qtd = calcularMetricas(produtos, totalProdutos, &totEst, &somaP, &maior, &menor, !resumido);

    if (!resumido) {
        separador();
    }

    if (qtd == 0) {
        printf("Nenhum produto ativo.\n");
        return;
    }

    printf("Produtos ativos           : %d\n", qtd);
    printf("Valor total do estoque    : R$ %.2f\n", totEst);
    printf("Preco medio               : R$ %.2f\n", somaP / qtd);
    printf("Produto mais caro         : %s (R$ %.2f)\n", produtos[maior].nome, produtos[maior].preco);
    printf("Produto mais barato       : %s (R$ %.2f)\n", produtos[menor].nome, produtos[menor].preco);
    separador();
}

void relatorioEstoqueBaixo(struct Produto produtos[], int totalProdutos) {
    int i;
    int encontrados = 0;

    printf("\n--- Relatorio: Estoque Baixo (< %d unidades) ---\n", LIMITE_ESTOQUE);
    separador();

    for (i = 0; i < totalProdutos; i++) {
        if (produtos[i].ativo && produtos[i].estoque < LIMITE_ESTOQUE) {
            printf("ID: %d\t| %-30s\t| Estoque: %d\n",
                   produtos[i].id,
                   produtos[i].nome,
                   produtos[i].estoque);

            encontrados++;
        }
    }

    if (encontrados == 0) {
        printf("Nenhum produto com estoque baixo.\n");
    }

    separador();
}

int main() {
    struct Produto produtos[MAX_PRODUTOS];
    int totalProdutos = 0;
    int proximoId = 1;
    int op;

    preencherDadosIniciais(produtos, &totalProdutos, &proximoId);

    do {
        printf("\n============================================================\n");
        printf("  SISTEMA DE ESTOQUE - LOJA DE ELETRONICOS\n");
        printf("============================================================\n");
        printf("  1. Cadastrar (Create)      |  6. Reativar Produto\n");
        printf("  2. Listar Todos (Read)     |  7. Processamentos\n");
        printf("  3. Buscar por ID (Read)    |  8. Relatorio Estoque Baixo\n");
        printf("  4. Atualizar (Update)      |  9. Relatorio Tabela Geral\n");
        printf("  5. Desativar (Delete)      |  0. Sair\n");
        printf("============================================================\n");
        printf("Opcao: ");

        if (scanf("%d", &op) != 1) {
            printf("\n[!] Entrada invalida. Encerrando para seguranca.\n");
            break;
        }

        limparBuffer();

        switch (op) {
            case 1:
                cadastrar(produtos, &totalProdutos, &proximoId);
                break;

            case 2:
                listarTodos(produtos, totalProdutos);
                break;

            case 3:
                buscarPorId(produtos, totalProdutos);
                break;

            case 4:
                atualizar(produtos, totalProdutos);
                break;

            case 5:
                desativar(produtos, totalProdutos);
                break;

            case 6:
                reativar(produtos, totalProdutos);
                break;

            case 7:
                relatorioGeral(produtos, totalProdutos, 1);
                break;

            case 8:
                relatorioEstoqueBaixo(produtos, totalProdutos);
                break;

            case 9:
                relatorioGeral(produtos, totalProdutos, 0);
                break;

            case 0:
                printf("\nEncerrando o sistema. Ate logo!\n\n");
                break;

            default:
                printf("\n[!] Opcao invalida.\n");
                break;
        }

    } while (op != 0);

    return 0;
}

