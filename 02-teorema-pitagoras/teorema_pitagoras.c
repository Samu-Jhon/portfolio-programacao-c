#include <stdio.h>
#include <math.h>

int main() {
    double catetoA, catetoB, hipotenusa;

    setbuf(stdout, NULL);

    printf("=== Calculo da Hipotenusa ===\n\n");

    printf("Digite o valor do cateto A: ");
    scanf("%lf", &catetoA);

    printf("Digite o valor do cateto B: ");
    scanf("%lf", &catetoB);

    hipotenusa = sqrt(pow(catetoA, 2) + pow(catetoB, 2));

    printf("\n--- Resultado ---\n");
    printf("Cateto A: %.2lf\n", catetoA);
    printf("Cateto B: %.2lf\n", catetoB);
    printf("Hipotenusa: %.2lf\n", hipotenusa);

    return 0;
}
