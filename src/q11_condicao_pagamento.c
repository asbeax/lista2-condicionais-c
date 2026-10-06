/*
 * Questao 11 - Valor a pagar conforme a condicao de pagamento
 * 1 - A vista em dinheiro ou cheque: 10% de desconto
 * 2 - A vista no cartao de credito: 15% de desconto
 * 3 - Em duas parcelas: preco normal, sem juros
 * 4 - Em duas parcelas: acrescimo de 10% sobre o preco normal
 */
#include <stdio.h>

int main(void)
{
    float preco, valorFinal = 0.0f;
    int codigo;

    printf("Digite o preco do produto: R$ ");
    scanf("%f", &preco);
    while (preco <= 0) {
        printf("Preco invalido! Digite um valor maior que zero: R$ ");
        scanf("%f", &preco);
    }

    printf("\nCondicoes de pagamento:\n");
    printf("1 - A vista em dinheiro ou cheque (10%% de desconto)\n");
    printf("2 - A vista no cartao de credito (15%% de desconto)\n");
    printf("3 - Em duas parcelas (preco normal, sem juros)\n");
    printf("4 - Em duas parcelas (acrescimo de 10%%)\n");
    printf("Digite o codigo da condicao de pagamento: ");
    scanf("%d", &codigo);

    switch (codigo) {
        case 1:
            valorFinal = preco * 0.90f;
            break;
        case 2:
            valorFinal = preco * 0.85f;
            break;
        case 3:
            valorFinal = preco;
            break;
        case 4:
            valorFinal = preco * 1.10f;
            break;
        default:
            printf("\nCodigo invalido!\n");
            break;
    }

    if (codigo >= 1 && codigo <= 4) {
        printf("\nPreco da etiqueta: R$ %.2f\n", preco);
        printf("Valor final a ser pago: R$ %.2f\n", valorFinal);
        if (codigo == 3 || codigo == 4) {
            printf("Em duas parcelas de R$ %.2f\n", valorFinal / 2);
        }
    }

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
