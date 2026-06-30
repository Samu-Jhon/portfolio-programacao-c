#include <stdio.h>

int main() {
    float notas[3][2];
    float media;
    int aluno;
    int nota;

    printf("--- Sistema de Notas ---\n");

    for (aluno = 0; aluno < 3; aluno++) {
        printf("\nAluno %d\n", aluno);

        for (nota = 0; nota < 2; nota++) {
            printf("Digite a Nota %d do Aluno %d: ", nota + 1, aluno);
            scanf("%f", &notas[aluno][nota]);
        }
    }

    printf("\n--- Tabela de Notas ---\n");
    printf("Aluno\tNota 1\tNota 2\tMedia\n");

    for (aluno = 0; aluno < 3; aluno++) {
        media = (notas[aluno][0] + notas[aluno][1]) / 2;

        printf("%d\t%.2f\t%.2f\t%.2f\n",
               aluno,
               notas[aluno][0],
               notas[aluno][1],
               media);
    }

    return 0;
}
