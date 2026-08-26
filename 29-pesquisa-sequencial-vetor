#include <stdio.h>

int pesquisaSequencial(int vetor[], int tamanho, int valor) {
 for (int i = 0; i < tamanho; i++) {
 if (vetor[i] == valor) {
 return i;
 }
 }
 return -1;
}

int main() {
 int vetor[10] = {42, 15, 73, 8, 91, 36, 27, 64, 10, 55};
 int valor;

 printf("Digite o valor: ");
 scanf("%d", &valor);

 int posicao = pesquisaSequencial(vetor, 10, valor);

 if (posicao != -1) {
 printf("Encontrado na posicao %d.\n", posicao);
 } else {
 printf("Valor nao encontrado.\n");
 }

 return 0;
}
