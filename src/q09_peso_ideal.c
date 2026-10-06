/*
 * Questao 9 - Peso ideal
 * Homens:   (72,7 x altura) - 58
 * Mulheres: (62,1 x altura) - 44,7
 */
#include <stdio.h>

int main(void)
{
    float altura, pesoIdeal;
    char sexo;

    printf("Digite a altura (em metros, ex: 1.75): ");
    scanf("%f", &altura);
    while (altura <= 0) {
        printf("Altura invalida! Digite um valor maior que zero: ");
        scanf("%f", &altura);
    }

    printf("Digite o sexo (M/F): ");
    scanf(" %c", &sexo);
    if (sexo == 'm') sexo = 'M';
    if (sexo == 'f') sexo = 'F';
    while (sexo != 'M' && sexo != 'F') {
        printf("Sexo invalido! Digite M ou F: ");
        scanf(" %c", &sexo);
        if (sexo == 'm') sexo = 'M';
        if (sexo == 'f') sexo = 'F';
    }

    if (sexo == 'M') {
        pesoIdeal = (72.7f * altura) - 58;
    } else {
        pesoIdeal = (62.1f * altura) - 44.7f;
    }

    printf("\nPeso ideal: %.2f kg\n", pesoIdeal);

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
