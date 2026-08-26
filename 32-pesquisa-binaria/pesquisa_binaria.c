#include <stdio.h>

int pesquisaBinaria(int vetor[], int tamanho, int valor) {
 int inicio = 0;
 int fim = tamanho - 1;

 while (inicio <= fim) {
 int meio = (inicio + fim) / 2;

 if (vetor[meio] == valor) {
 return meio;
 }
 if (valor > vetor[meio]) {
 inicio = meio + 1;
 } else {
 fim = meio - 1;
 }
 }
 return -1;
}

int main() {
 int vetor[10] = {8, 10, 15, 27, 36, 42, 55, 64, 73, 91};
 int valor;

 printf("Digite o valor que deseja procurar: ");
 scanf("%d", &valor);

 int posicao = pesquisaBinaria(vetor, 10, valor);

 if (posicao != -1) {
 printf("Valor encontrado na posicao %d.\n", posicao);
 } else {
 printf("Valor nao encontrado.\n");
 }

 return 0;
}
