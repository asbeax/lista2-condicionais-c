/*
 * Questao 2 - Le nome, sexo e estado civil.
 * Se o sexo for F e o estado civil for CASADA, pede tambem o tempo de
 * casamento, em anos.
 */
#include <stdio.h>

/* converte letra minuscula em maiuscula (sem usar ctype.h) */
char maiuscula(char c)
{
    if (c >= 'a' && c <= 'z') {
        return (char)(c - 32);
    }
    return c;
}

/* verifica se o texto e "CASADA", ignorando maiusculas/minusculas */
int eh_casada(const char *texto)
{
    const char *alvo = "CASADA";
    int i = 0;

    while (alvo[i] != '\0') {
        if (maiuscula(texto[i]) != alvo[i]) {
            return 0;
        }
        i++;
    }
    return texto[i] == '\0';
}

int main(void)
{
    char nome[50];
    char sexo;
    char estadoCivil[20];
    int anosCasamento = 0, pediuTempo = 0;

    printf("Nome: ");
    scanf(" %49[^\n]", nome);

    printf("Sexo (M/F): ");
    scanf(" %c", &sexo);
    sexo = maiuscula(sexo);
    while (sexo != 'M' && sexo != 'F') {
        printf("Sexo invalido! Digite M ou F: ");
        scanf(" %c", &sexo);
        sexo = maiuscula(sexo);
    }

    printf("Estado civil (ex: SOLTEIRA, CASADA, VIUVA): ");
    scanf(" %19s", estadoCivil);

    if (sexo == 'F' && eh_casada(estadoCivil)) {
        printf("Tempo de casamento (em anos): ");
        scanf("%d", &anosCasamento);
        while (anosCasamento < 0) {
            printf("Valor invalido! Digite zero ou mais: ");
            scanf("%d", &anosCasamento);
        }
        pediuTempo = 1;
    }

    printf("\n===== DADOS INFORMADOS =====\n");
    printf("Nome: %s\n", nome);
    printf("Sexo: %c\n", sexo);
    printf("Estado civil: %s\n", estadoCivil);
    if (pediuTempo) {
        printf("Tempo de casamento: %d ano(s)\n", anosCasamento);
    }

    printf("\nPressione ENTER para sair...");
    getchar();
    getchar();
    return 0;
}
