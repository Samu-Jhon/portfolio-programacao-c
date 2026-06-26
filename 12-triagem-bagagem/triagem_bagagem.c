#include <stdio.h>

int main()
{
    // DECLARAR VARIÁVEIS
    float peso, comprimento;
    
    //ENTRADA: receber os valores
    printf("informe o peso da mala kg");
    scanf("%f", &peso);
    
    printf("informe o comprimento da mala cm");
    scanf("%f", &comprimento);
    
    //PROCESSAR:
    if(peso>23){
    printf("ALERTA: Mala com excesso de peso. Taxa de R$ 100,00 aplicada.");
    }
    
    if(comprimento>55){
    printf("ALERTA: Dimensões excedidas. Despacho obrigatório.");
    }

    if(peso>40){
    printf("PERIGO: Carga muito pesada para transporte manual!");
    }
    
    //SAIDA: determinar ação a ser tomada sobre a mala
    printf("Processamento de bagagem finalizado.");
  

    return 0;
}
