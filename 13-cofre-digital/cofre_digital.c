#include <stdio.h>

int main()
{
    int senha;
    float temperatura;

    printf("Digite a senha: ");
    scanf("%d", &senha);

    printf("Digite a temperatura atual: ");
    scanf("%f", &temperatura);

    if (senha == 1234 && temperatura <= 40) {
        printf("ACESSO PERMITIDO: Cofre Aberto\n");
    } else {
        printf("ACESSO NEGADO: Verifique a senha ou o superaquecimento\n");
    }

    return 0;
}
