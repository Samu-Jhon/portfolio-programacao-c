Objetivo:
Calcular a média de 4 notas dos alunos, informar aprovação/reprovação
e mostrar a porcentagem de alunos aprovados na turma.
*/

#include <stdio.h>

int main() {
    int quantidadeAlunos;
    int contador = 1;
    int aprovados = 0;

    float nota1, nota2, nota3, nota4;
    float media;
    float porcentagemAprovados;

    printf("Informe a quantidade de alunos da turma: ");
    scanf("%d", &quantidadeAlunos);

    if (quantidadeAlunos <= 0) {
        printf("\nQuantidade de alunos invalida.\n");
    } else {

        while (contador <= quantidadeAlunos) {
            printf("\n--- Aluno %d ---\n", contador);

            printf("Informe a primeira nota: ");
            scanf("%f", &nota1);

            printf("Informe a segunda nota: ");
            scanf("%f", &nota2);

            printf("Informe a terceira nota: ");
            scanf("%f", &nota3);

            printf("Informe a quarta nota: ");
            scanf("%f", &nota4);

            media = (nota1 + nota2 + nota3 + nota4) / 4;

            printf("Media do aluno %d: %.2f\n", contador, media);

            if (media < 7) {
                printf("Situacao: Reprovado\n");
            } else {
                printf("Situacao: Aprovado\n");
                aprovados++;
            }

            contador++;
        }

        porcentagemAprovados = (aprovados * 100.0) / quantidadeAlunos;

        printf("\n--- Resultado final da turma ---\n");
        printf("Quantidade de alunos: %d\n", quantidadeAlunos);
        printf("Alunos aprovados: %d\n", aprovados);
        printf("Porcentagem de aprovados: %.2f%%\n", porcentagemAprovados);
    }

    return 0;
}
