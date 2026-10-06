/* Questao 8 - Le tres inteiros diferentes entre si e mostra em ordem decrescente */
#include <stdio.h>

int main(void)
{
    int a, b, c, troca;

    printf("Digite o primeiro valor: ");
    scanf("%d", &a);

    printf("Digite o segundo valor (diferente dos anteriores): ");
    scanf("%d", &b);
    while (b == a) {
        printf("Valor repetido! Digite um valor diferente: ");
        scanf("%d", &b);
    }

    printf("Digite o terceiro valor (diferente dos anteriores): ");
    scanf("%d", &c);
    while (c == a || c == b) {
        printf("Valor repetido! Digite um valor diferente: ");
        scanf("%d", &c);
    }

    /* ordena de forma que a >= b >= c */
    if (a < b) {
        troca = a;
        a = b;
        b = troca;
    }
    if (b < c) {
        troca = b;
        b = c;
        c = troca;
    }
    if (a < b) {
        troca = a;
        a = b;
        b = troca;
    }

    printf("\nOrdem decrescente: %d, %d, %d\n", a, b, c);

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
