/*
 * Questao 4 - Le A e B.
 * Se forem iguais, C = A + B. Se forem diferentes, C = A * B.
 */
#include <stdio.h>

int main(void)
{
    int a, b, c;

    printf("Digite o valor de A: ");
    scanf("%d", &a);
    printf("Digite o valor de B: ");
    scanf("%d", &b);

    if (a == b) {
        c = a + b;
        printf("\nValores iguais: C = A + B = %d\n", c);
    } else {
        c = a * b;
        printf("\nValores diferentes: C = A * B = %d\n", c);
    }

    printf("Valor de C: %d\n", c);

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
