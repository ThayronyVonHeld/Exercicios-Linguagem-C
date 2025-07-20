#include <stdio.h>

int main()
{

    float distancia, valor_viagem, valor_viagem2;

    printf("Qual distacia que deseja viajar [km]: ");
    scanf("%f", &distancia);

    
    if (distancia <= 200)
    {
        valor_viagem = distancia * 0.5;
        printf("Sua viagem ficou no valor de R$ %.2f", valor_viagem);
    }
    else {
        valor_viagem2 = distancia * 0.45;
           printf("Sua viagem ficou no valor de R$ %.2f", valor_viagem2);
    }
    return 0;
}
