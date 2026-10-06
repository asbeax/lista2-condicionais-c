/*
 * Questao 10 - IMC = peso / altura^2
 * Menor que 18,5 ........ Abaixo do peso
 * De 18,5 ate 25 (exclusive) .... Peso normal
 * De 25 ate 30 (inclusive) ...... Acima do peso
 * Acima de 30 ........... Obeso
 */
#include <stdio.h>

int main(void)
{
    float peso, altura, imc;

    printf("Digite o peso (kg): ");
    scanf("%f", &peso);
    while (peso <= 0) {
        printf("Peso invalido! Digite um valor maior que zero: ");
        scanf("%f", &peso);
    }

    printf("Digite a altura (em metros, ex: 1.75): ");
    scanf("%f", &altura);
    while (altura <= 0) {
        printf("Altura invalida! Digite um valor maior que zero: ");
        scanf("%f", &altura);
    }

    imc = peso / (altura * altura);
    printf("\nIMC: %.2f\n", imc);

    if (imc < 18.5f) {
        printf("Condicao: Abaixo do peso\n");
    } else if (imc < 25.0f) {
        printf("Condicao: Peso normal\n");
    } else if (imc <= 30.0f) {
        printf("Condicao: Acima do peso\n");
    } else {
        printf("Condicao: Obeso\n");
    }

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
