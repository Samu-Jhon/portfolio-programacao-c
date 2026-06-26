#include <stdio.h>

int main() {
    float celsius, fahrenheit;

   

    printf("=== Conversao de Celsius para Fahrenheit ===\n\n");

    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9.0 / 5.0) + 32;

    printf("\n--- Resultado ---\n");
    printf("Temperatura em Celsius: %.1f C\n", celsius);
    printf("Temperatura em Fahrenheit: %.1f F\n", fahrenheit);

    return 0;
}
