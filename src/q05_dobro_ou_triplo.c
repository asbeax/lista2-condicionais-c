/*
 * Questao 5 - Positivo: calcula o dobro. Negativo: calcula o triplo.
 * (zero nao e positivo nem negativo, entao nao ha calculo a fazer)
 */
#include <stdio.h>

int main(void)
{
    float n, resultado;

    printf("Digite um numero: ");
    scanf("%f", &n);

    if (n > 0) {
        resultado = n * 2;
        printf("\nNumero positivo. Dobro: %.2f\n", resultado);
    } else if (n < 0) {
        resultado = n * 3;
        printf("\nNumero negativo. Triplo: %.2f\n", resultado);
    } else {
        printf("\nO numero e zero: nao e positivo nem negativo, entao nao ha dobro ou triplo a calcular.\n");
    }

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
