#include <stdio.h>
#include <math.h>

int main()
{
    // declarar variáveis
        float cotacao, vlReal, vlDolar;
   
     // ENTRADA: receber os valores
    printf("Informe o valor reais: ");
    scanf("%f", &vlReal);
    printf("informe a cotacao em dolar");
    scanf("%f", &cotacao);
    
    // PROCESSAR: Calcular valor dolar
    vlDolar = vlReal/cotacao;
    
    // SAIDA: Imprimir o valor dolar
    printf("o valor em dolar: %.2f", vlDolar);
    return 0;
}
