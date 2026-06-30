#include <stdio.h>

int main() {
	float temperaturas[7];
	float soma = 0;
	float media;
	int diasAcimaMedia = 0;
	int i;

	printf("--- Monitor de Temperaturas ---\n");

	for (i = 0; i < 7; i++) {
		printf("Informe a temperatura do dia %d: ", i + 1);
		scanf("%f", &temperaturas[i]);

		soma = soma + temperaturas[i];
	}

	media = soma / 7;

	for (i = 0; i < 7; i++) {
		if (temperaturas[i] > media) {
			diasAcimaMedia++;
		}
	}

	printf("\n--- Resultado da Semana ---\n");
	printf("Media da semana: %.2f graus\n", media);
	printf("Quantidade de dias acima da media: %d\n", diasAcimaMedia);

	return 0;
}
