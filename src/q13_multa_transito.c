/*
 * Questao 13 - Multa de transito pela velocidade registrada
 * Ate 20% acima do limite: infracao media
 * Acima de 20% e ate 50%: infracao grave
 * Acima de 50%: infracao gravissima
 * Velocidade registrada acima de 120 km/h: alerta de velocidade extremamente elevada
 */
#include <stdio.h>

int main(void)
{
    float limite, registrada, excesso;

    printf("Velocidade maxima permitida na via (km/h): ");
    scanf("%f", &limite);
    while (limite <= 0) {
        printf("Valor invalido! Digite um valor maior que zero: ");
        scanf("%f", &limite);
    }

    printf("Velocidade registrada do veiculo (km/h): ");
    scanf("%f", &registrada);
    while (registrada <= 0) {
        printf("Valor invalido! Digite um valor maior que zero: ");
        scanf("%f", &registrada);
    }

    printf("\nLimite da via: %.0f km/h\n", limite);
    printf("Velocidade registrada: %.0f km/h\n", registrada);

    if (registrada <= limite) {
        printf("Nao houve infracao.\n");
    } else {
        excesso = ((registrada - limite) * 100.0f) / limite;
        printf("Percentual excedido: %.2f%%\n", excesso);

        if (excesso <= 20) {
            printf("Classificacao: infracao MEDIA\n");
        } else if (excesso <= 50) {
            printf("Classificacao: infracao GRAVE\n");
        } else {
            printf("Classificacao: infracao GRAVISSIMA\n");
        }

        if (registrada > 120) {
            printf("ALERTA: velocidade extremamente elevada!\n");
        }
    }

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
