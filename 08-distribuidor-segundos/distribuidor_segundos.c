#include <stdio.h>
#include <math.h>

// ENTRADA: segundos
// PROCESSAMENTO: segundos / 60 e segundos % 60
// SAIDA: minutos e segundos restantes

int main()
{
    int segundos, minutos, restoSegundos;

    printf("Digite o total de segundos: ");
    scanf("%d", &segundos);

    minutos = segundos / 60;
    restoSegundos = segundos % 60;

    printf("\nResultado: %d minutos e %d segundos\n", minutos, restoSegundos);

    return 0;
}
