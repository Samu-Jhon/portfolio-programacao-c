#include <stdio.h>
#include <math.h>

// ENTRADA: salario
// PROCESSAMENTO: salario * 1.15
// SAIDA: salario atualizado

int main()
{
    float salario, aumento, salarioFinal;

    printf("Digite o salario atual: ");
    scanf("%f", &salario);

    aumento = salario * 0.15;
    salarioFinal = salario * 1.15;

    printf("\nValor do aumento: R$ %.2f\n", aumento);
    printf("Novo salario final: R$ %.2f\n", salarioFinal);

    return 0;
}
