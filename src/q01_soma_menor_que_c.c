/* Questao 1 - Informa se A + B e menor que C */
#include <stdio.h>

int main(void)
{
    int a, b, c;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);
    printf("Digite o valor de C: ");
    scanf("%d", &c);

    if (a + b < c) {
        printf("\nA + B = %d e MENOR que C = %d\n", a + b, c);
    } else {
        printf("\nA + B = %d NAO e menor que C = %d\n", a + b, c);
    }

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
