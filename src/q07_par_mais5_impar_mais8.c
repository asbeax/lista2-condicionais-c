/* Questao 7 - Par: soma 5 ao valor. Impar: soma 8 ao valor. */
#include <stdio.h>

int main(void)
{
    int n, resultado;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        resultado = n + 5;
        printf("\n%d e par. Resultado (%d + 5): %d\n", n, n, resultado);
    } else {
        resultado = n + 8;
        printf("\n%d e impar. Resultado (%d + 8): %d\n", n, n, resultado);
    }

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
