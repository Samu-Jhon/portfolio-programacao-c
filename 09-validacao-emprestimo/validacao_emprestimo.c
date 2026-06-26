#include <stdio.h>

int main()
{
    float salario, prestacao, limite;

    printf("Digite o salario bruto: ");
    scanf("%f", &salario);

    printf("Digite o valor da prestacao desejada: ");
    scanf("%f", &prestacao);

    limite = salario * 0.30;

    if (prestacao > limite) {
        printf("Emprestimo negado por comprometimento de renda.\n");
    } else {
        printf("Emprestimo aprovado com sucesso!\n");
    }

    return 0;
}
