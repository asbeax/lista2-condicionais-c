/* Questao 14 - Cardapio de restaurante com switch */
#include <stdio.h>

int main(void)
{
    int codigo;

    printf("===== CARDAPIO =====\n");
    printf("1 - Hamburguer com fritas ...... R$ 28,00\n");
    printf("2 - File de frango grelhado .... R$ 32,00\n");
    printf("3 - Lasanha a bolonhesa ........ R$ 35,00\n");
    printf("4 - File de peixe com arroz .... R$ 42,00\n");
    printf("5 - Salada especial ............ R$ 25,00\n");

    printf("\nDigite o codigo do prato desejado: ");
    scanf("%d", &codigo);

    switch (codigo) {
        case 1:
            printf("\nPrato escolhido: Hamburguer com fritas\nValor: R$ 28,00\n");
            break;
        case 2:
            printf("\nPrato escolhido: File de frango grelhado\nValor: R$ 32,00\n");
            break;
        case 3:
            printf("\nPrato escolhido: Lasanha a bolonhesa\nValor: R$ 35,00\n");
            break;
        case 4:
            printf("\nPrato escolhido: File de peixe com arroz\nValor: R$ 42,00\n");
            break;
        case 5:
            printf("\nPrato escolhido: Salada especial\nValor: R$ 25,00\n");
            break;
        default:
            printf("\nOpcao invalida\n");
            break;
    }

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
