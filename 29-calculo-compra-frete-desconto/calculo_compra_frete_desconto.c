#include <stdio.h>

int main()
{
   // variaveis 
    float valorcompra, frete, desconto, totalpagar;
    int regiao, tipocliente;
    
    //entrada
    
    printf("informe o valor total da compra");
    scanf("%f", &valorcompra);
    
    printf("informe a regiao de entrega(1-Norte, 2-Noedeste, 3-Centro-oeste, 4-Sudeste, 5-Sul):");
    scanf("%d", &regiao);
    
    printf("Informe o tipo de cliente(1-Comum, 2-Premium):");
    scanf("%d", &tipocliente);
    
    //switch do frete
    frete = 0.0;
    
    switch(regiao)
    {
        case 1:
        case 2:
        frete = 30.0;
        break;
        
        case 3:
        frete = 20.0;
        break;
        
        case 4:
        case 5:
        frete = 10.0;
        break;
        
        default:
        printf("Regiao Invalid!\n");
        frete = 0.0;
        break;
    }
    
    // if / else if do desconto
    if(valorcompra> 500)
    {
        desconto = valorcompra*0.15;
    }
    else if(valorcompra>= 200)
    {
        desconto = valorcompra*0.10;
    }
    else
    {
        desconto= 0.0;
    }
    
    //calcular total
    totalpagar = valorcompra + frete - desconto;
    
    //if simples do premium
    if( tipocliente ==2)
    {
        totalpagar = totalpagar - 10.0;
    }
    
    //saida
    printf("\nValor do frete: R$ %.2F", frete);
    printf("\nValor do desconto:R$ %2.f", desconto);
    printf("\nValor total a pagar: R$ %.2f\n", totalpagar);

    return 0;
}
