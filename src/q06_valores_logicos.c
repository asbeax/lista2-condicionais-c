/*
 * Questao 6 - Le dois valores logicos (1 = VERDADEIRO, 0 = FALSO)
 * e determina se ambos sao verdadeiros ou se ambos sao falsos.
 */
#include <stdio.h>

int main(void)
{
    int a, b;

    printf("Digite o primeiro valor logico (1 = VERDADEIRO, 0 = FALSO): ");
    scanf("%d", &a);
    while (a != 0 && a != 1) {
        printf("Valor invalido! Digite 1 (VERDADEIRO) ou 0 (FALSO): ");
        scanf("%d", &a);
    }

    printf("Digite o segundo valor logico (1 = VERDADEIRO, 0 = FALSO): ");
    scanf("%d", &b);
    while (b != 0 && b != 1) {
        printf("Valor invalido! Digite 1 (VERDADEIRO) ou 0 (FALSO): ");
        scanf("%d", &b);
    }

    if (a == 1 && b == 1) {
        printf("\nAmbos os valores sao VERDADEIROS\n");
    } else if (a == 0 && b == 0) {
        printf("\nAmbos os valores sao FALSOS\n");
    } else {
        printf("\nOs valores sao diferentes: um e VERDADEIRO e o outro e FALSO\n");
    }

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
