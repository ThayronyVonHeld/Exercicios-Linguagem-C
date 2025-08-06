Sugest�o mais limpa

#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "Portuguese");

    int carro, dias;
    float valor_total, km;

    printf("-----------------------------------------------\n");
    printf("Bem-vindo ao pagamento do CARRO ALUGADO\n");
    printf("Antes precisamos verificar algumas informa��es\n");
    printf("-----------------------------------------------\n");
    printf("Digite [1] para carro de Luxo\n");
    printf("Digite [2] para carro Popular\n");
    printf("-----------------------------------------------\n");

    printf("Qual carro voc� alugou? ");
    scanf("%d", &carro);

    printf("Quantos dias o carro esteve alugado? ");
    scanf("%d", &dias);

    printf("Quantos KM foram percorridos? ");
    scanf("%f", &km);
    printf("-----------------------------------------------\n");

    if (carro == 1) { // Carro de luxo
        if (km <= 200)
            valor_total = (0.30 * km) + (dias * 150);
        else
            valor_total = (0.25 * km) + (dias * 150);

        printf("O valor total a ser pago �: R$ %.2f\n", valor_total);
    }
    else if (carro == 2) { // Carro popular
        if (km <= 100)
            valor_total = (0.20 * km) + (dias * 90);
        else
            valor_total = (0.10 * km) + (dias * 90);

        printf("O valor total a ser pago �: R$ %.2f\n", valor_total);
    }
    else {
        printf("Dados incorretos! Por favor, repita a opera��o.\n");
    }

    return 0;
}

