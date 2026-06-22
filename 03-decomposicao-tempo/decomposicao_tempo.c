#include <stdio.h>

int main() {
    int totalMinutos, horas, minutosRestantes;

    setbuf(stdout, NULL);

    printf("=== Decomposicao de Tempo ===\n\n");

    printf("Digite o total de minutos: ");
    scanf("%d", &totalMinutos);

    horas = totalMinutos / 60;
    minutosRestantes = totalMinutos % 60;

    printf("\n--- Resultado ---\n");
    printf("Total informado: %d minutos\n", totalMinutos);
    printf("Tempo convertido: %d horas e %d minutos\n", horas, minutosRestantes);

    return 0;
}
