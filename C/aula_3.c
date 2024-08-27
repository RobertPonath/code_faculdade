#include <stdio.h>
//  desenvolva um programa em C que leia notas de alunos, calcule a média, identifique a
//  maior e menor nota, conte quantos alunos passaram (nota ≥ 6) e quantos não passaram (nota < 6).
//  Estrutura do programa:
//  Estrutura do Programa:
//  1. Declaração de variáveis.
//  2. Leitura das notas dos alunos usando um loop (while).
//  3. Cálculo da média das notas.
//  4. Identificação da maior e menor nota usando estruturas condicionais (if).
//  5. Contagem dos alunos que passaram e não passaram.
//  6. Impressão dos resultados.
//  7. Testar o Programa: Inserir diferentes notas para verificar se o programa calcula
//  corretamente a média, maior e menor nota, e a contagem de alunos que passaram e não
//  passaram. Testar com notas inválidas para garantir que o programa trate essas entradas
//  corretamente. Testar a finalização do programa ao digitar -1.
int main() {
    // Declaração de variáveis
    float nota, soma = 0;
    int total_notas = 0, num_passaram = 0, num_reprovaram = 0;
    float maior_nota = -1, menor_nota = 11; // Inicialização com valores fora do intervalo normal de notas

    // Leitura das notas dos alunos usando um loop (while)
    printf("Digite as notas dos alunos (-1 para terminar): \n");
    while (1) {
        printf("Digite uma nota: ");
        if (scanf("%f", &nota) != 1) {
            // Limpa o buffer de entrada se a entrada não for um número válido
            while (getchar() != '\n');
            printf("Entrada inválida. Por favor, digite um número.\n");
            continue;
        }

        // Finaliza a leitura se o usuário digitar -1
        if (nota == -1) {
            break;
        }

        // Verifica se a nota é válida
        if (nota < 0 || nota > 10) {
            printf("Nota inválida. Digite uma nota entre 0 e 10.\n");
            continue;
        }

        // Acumula a soma das notas
        soma += nota;
        total_notas++;

        // Identificação da maior e menor nota usando estruturas condicionais (if)
        if (nota > maior_nota) {
            maior_nota = nota;
        }

        if (nota < menor_nota) {
            menor_nota = nota;
        }

        // Contagem dos alunos que passaram e não passaram
        if (nota >= 6) {
            num_passaram++;
        } else {
            num_reprovaram++;
        }
    }

    // Verifica se foram inseridas notas para calcular a média
    if (total_notas > 0) {
        // Cálculo da média das notas
        float media = soma / total_notas;

        // Impressão dos resultados
        printf("Média das notas: %.2f\n", media);
        printf("Maior nota: %.2f\n", maior_nota);
        printf("Menor nota: %.2f\n", menor_nota);
        printf("Número de alunos que passaram: %d\n", num_passaram);
        printf("Número de alunos que não passaram: %d\n", num_reprovaram);
    } else {
        printf("Nenhuma nota válida foi inserida.\n");
    }

    return 0;
}