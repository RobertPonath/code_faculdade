#include <stdio.h>
//   desenvolva um pequeno programa em C que realize as seguintes tarefas:
//   1. Defina uma constante que represente a taxa de juros anual (por exemplo, 5%).
//   2. Declare variáveis para armazenar o valor inicial do investimento, o número de anos e o valor
//   final do investimento.
//   3. Solicite ao usuário que insira o valor inicial do investimento e o número de anos.
//   4. Calcule o valor final do investimento utilizando a fórmula de juros simples: Valor Final = Valor
//   Inicial * (1 + (Taxa de Juros * Anos)).
//   5. Exiba o valor final do investimento.
//   6. Além disso, declare um vetor de inteiros com 3 elementos e uma matriz 2x2 de inteiros.
//   Inicialize-os com valores à sua escolha.
//   7. Utilize um ponteiro para acessar e modificar o primeiro elemento do vetor.
//   8. Exiba os valores dos elementos do vetor e da matriz, bem como os endereços de memória
//   de cada elemento.
// Definição de constantes
#define TAXA_JUROS_ANUAL 0.05

int main() {
    // Declaração de variáveis
    float valor_inicial, valor_final;
    int anos;

    // Entrada do usuário
    printf("Digite o valor inicial do investimento: ");
    scanf("%f", &valor_inicial);

    printf("Digite o número de anos: ");
    scanf("%d", &anos);

    // Operação matemática: cálculo do valor final usando juros simples
    valor_final = valor_inicial * (1 + (TAXA_JUROS_ANUAL * anos));

    // Exibição do valor final do investimento
    printf("Valor final do investimento: %.2f\n", valor_final);

    // Declaração e inicialização de vetor e matriz
    int vetor[3] = {10, 20, 30};
    int matriz[2][2] = {{1, 2}, {3, 4}};

    // Ponteiro para acessar e modificar o primeiro elemento do vetor
    int *ptr_vetor = &vetor[0];
    *ptr_vetor = 100; // Modificando o primeiro elemento do vetor

    // Exibição dos valores dos elementos do vetor e matriz
    printf("Valores do vetor: %d, %d, %d\n", vetor[0], vetor[1], vetor[2]);
    printf("Valores da matriz: %d, %d, %d, %d\n", matriz[0][0], matriz[0][1], matriz[1][0], matriz[1][1]);

    // Exibição dos endereços de memória dos elementos do vetor e da matriz
    printf("Endereço de vetor[0]: %p\n", (void*)&vetor[0]);
    printf("Endereço de vetor[1]: %p\n", (void*)&vetor[1]);
    printf("Endereço de vetor[2]: %p\n", (void*)&vetor[2]);
    printf("Endereço de matriz[0][0]: %p\n", (void*)&matriz[0][0]);
    printf("Endereço de matriz[0][1]: %p\n", (void*)&matriz[0][1]);
    printf("Endereço de matriz[1][0]: %p\n", (void*)&matriz[1][0]);
    printf("Endereço de matriz[1][1]: %p\n", (void*)&matriz[1][1]);

    return 0;
}
