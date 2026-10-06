/*
 * Questao 12 - Media de aproveitamento
 * MA = (nota1 + nota2 x 2 + nota3 x 3 + ME) / 7
 * Notas e media dos exercicios na escala de 0 a 100.
 * A: MA >= 90 | B: 75 <= MA < 90 | C: 60 <= MA < 75 | D: 40 <= MA < 60 | E: MA < 40
 * Aprovado: A, B ou C | Reprovado: D ou E
 */
#include <stdio.h>

int main(void)
{
    int id;
    float nota1, nota2, nota3, me, ma;
    char conceito;

    printf("Numero de identificacao do aluno: ");
    scanf("%d", &id);

    printf("Nota 1 (0 a 100): ");
    scanf("%f", &nota1);
    while (nota1 < 0 || nota1 > 100) {
        printf("Nota invalida! Digite de 0 a 100: ");
        scanf("%f", &nota1);
    }

    printf("Nota 2 (0 a 100): ");
    scanf("%f", &nota2);
    while (nota2 < 0 || nota2 > 100) {
        printf("Nota invalida! Digite de 0 a 100: ");
        scanf("%f", &nota2);
    }

    printf("Nota 3 (0 a 100): ");
    scanf("%f", &nota3);
    while (nota3 < 0 || nota3 > 100) {
        printf("Nota invalida! Digite de 0 a 100: ");
        scanf("%f", &nota3);
    }

    printf("Media dos exercicios (0 a 100): ");
    scanf("%f", &me);
    while (me < 0 || me > 100) {
        printf("Media invalida! Digite de 0 a 100: ");
        scanf("%f", &me);
    }

    ma = (nota1 + nota2 * 2 + nota3 * 3 + me) / 7;

    if (ma >= 90) {
        conceito = 'A';
    } else if (ma >= 75) {
        conceito = 'B';
    } else if (ma >= 60) {
        conceito = 'C';
    } else if (ma >= 40) {
        conceito = 'D';
    } else {
        conceito = 'E';
    }

    printf("\n===== BOLETIM =====\n");
    printf("Identificacao do aluno: %d\n", id);
    printf("Nota 1: %.2f\n", nota1);
    printf("Nota 2: %.2f\n", nota2);
    printf("Nota 3: %.2f\n", nota3);
    printf("Media dos exercicios: %.2f\n", me);
    printf("Media de aproveitamento: %.2f\n", ma);
    printf("Conceito: %c\n", conceito);

    if (conceito == 'A' || conceito == 'B' || conceito == 'C') {
        printf("Situacao final: Aprovado\n");
    } else {
        printf("Situacao final: Reprovado\n");
    }

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
