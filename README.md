# Lista de Exercícios 2 - Estruturas Condicionais

Resolução em **C puro**, usando apenas a biblioteca `stdio.h`, da segunda lista de exercícios
de Lógica de Programação, sobre estruturas condicionais (`if`, `else if`, `else` e `switch`).

## Questões

| Arquivo | Descrição |
|---|---|
| `src/q01_soma_menor_que_c.c` | Informa se A + B é menor que C |
| `src/q02_nome_sexo_estado_civil.c` | Lê nome, sexo e estado civil; se for F e CASADA, pede o tempo de casamento |
| `src/q03_par_ou_impar.c` | Informa se um número é par ou ímpar |
| `src/q04_soma_ou_produto.c` | Se A = B soma, senão multiplica, e guarda em C |
| `src/q05_dobro_ou_triplo.c` | Positivo: dobro. Negativo: triplo |
| `src/q06_valores_logicos.c` | Dois valores lógicos: ambos verdadeiros ou ambos falsos |
| `src/q07_par_mais5_impar_mais8.c` | Par: soma 5. Ímpar: soma 8 |
| `src/q08_ordem_decrescente.c` | Três valores diferentes em ordem decrescente |
| `src/q09_peso_ideal.c` | Peso ideal por altura e sexo |
| `src/q10_imc.c` | IMC e classificação da condição |
| `src/q11_condicao_pagamento.c` | Valor a pagar conforme a condição de pagamento |
| `src/q12_media_aproveitamento.c` | Média de aproveitamento, conceito e situação final |
| `src/q13_multa_transito.c` | Classificação da infração por velocidade (ifs aninhados) |
| `src/q14_cardapio_restaurante.c` | Cardápio de restaurante com `switch` |

## Como compilar e executar

### Dev-C++
Abra o arquivo `.c` desejado, compile (F9) e execute.

### GCC (terminal)
```bash
# compilar um programa
gcc -std=c99 -Wall -Wextra src/q01_soma_menor_que_c.c -o q01_soma_menor_que_c
./q01_soma_menor_que_c

# ou compilar todos de uma vez (gera a pasta bin/)
make
./bin/q10_imc
```

## Observações

- Apenas `stdio.h` é utilizada.
- Os textos de saída não usam acentos para evitar caracteres quebrados no console do Windows.
- **Questão 2:** o estado civil é digitado como palavra (por exemplo `CASADA`), sem diferenciar maiúsculas de minúsculas.
- **Questão 5:** o zero não é positivo nem negativo, então o programa apenas informa que não há dobro ou triplo a calcular.
- **Questão 6:** os valores lógicos são digitados como `1` (VERDADEIRO) e `0` (FALSO).
- **Questão 8:** o programa exige que os três valores sejam diferentes entre si.
- **Questão 10:** IMC de 18,5 até menos de 25 é "Peso normal"; de 25 até 30 (inclusive) é "Acima do peso"; acima de 30 é "Obeso".
- **Questão 12:** as notas e a média dos exercícios usam a escala de 0 a 100, que é a escala dos conceitos da tabela (A a partir de 90).
- **Questão 13:** o programa classifica a infração (média, grave ou gravíssima) e mostra o percentual excedido, como pedido no enunciado; não calcula valor em reais, porque o enunciado não informa os valores das multas.
