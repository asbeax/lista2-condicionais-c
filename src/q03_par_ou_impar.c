/* Questao 3 - Informa se um numero inteiro e par ou impar */
#include <stdio.h>

int main(void)
{
    int n;

    printf("Digite um numero inteiro: ");
    scanf("%d", &n);

    if (n % 2 == 0) {
        printf("\nO numero %d e PAR\n", n);
    } else {
        printf("\nO numero %d e IMPAR\n", n);
    }

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
