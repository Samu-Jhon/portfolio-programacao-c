#include <stdio.h>
#include <math.h>

#define PI 3.14159

int main() {
    double raio, volume;

    setbuf(stdout, NULL);

    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);

    volume = PI * (4.0 / 3.0) * pow(raio, 3);

    printf("Volume da esfera: %.3lf\n", volume);

    return 0;
}
