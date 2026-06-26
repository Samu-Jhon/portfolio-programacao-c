#include <stdio.h>
#include <math.h>

int main()
{
    // declarar variaveis
    float largura, altura, area, litros;
    
    //ENTRADA: receber valores 
    printf("informe largura (m)");
    scanf("&f", &largura);
    
    printf("informe altura (m)");
    scanf("&f", &altura);
    
     //PROCESSAR:  calcular area
     area = largura * altura;
     litros = area/2.0f;
     
     //SAIDA: 
     printf("area da parede: %.2f 2.0f\n",area);
     printf("litros de tinta necessários:%.2f L\n",litros);
    return 0;
}
