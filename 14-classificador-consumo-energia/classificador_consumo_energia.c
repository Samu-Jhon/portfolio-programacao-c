#include <stdio.h>

int main()
{
    // DECLARAR VARIAVEIS:
    float consumoMensal;

    // ENTRADA DE DADOS:
    printf("Digite o consumo mensal em kWh: ");
    scanf("%f", &consumoMensal);

    // PROCESSAMENTO E SAIDA:
    if (consumoMensal <= 150) {
        printf("Perfil: ECONOMICO. Parabens! Mantenha seus habitos.\n");
    }
    else if (consumoMensal <= 300) {
        printf("Perfil: MODERADO. Considere desligar aparelhos em standby.\n");
    }
    else if (consumoMensal <= 500) {
        printf("Perfil: ALTO. Cuidado com o uso excessivo de ar-condicionado e chuveiro.\n");
    }
    else {
        printf("Perfil: CRITICO. Risco de sobrecarga e conta de luz elevada. Revise sua instalacao.\n");
    }

    return 0;
}
