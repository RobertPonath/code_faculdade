/*Descrição da situação-problema:

Você, como estudante de programação, foi designado para criar uma solução algorítmica que calcule o reajuste salarial de um colaborador da empresa "ABC001". O objetivo é desenvolver um programa eficiente que leve em consideração o salário atual, a porcentagem de reajuste e forneça o novo salário após o aumento por meio de uma função em "C".

Resolução da situação-problema:

Identificação dos Dados:

1.     Declaração da Função:

Criar uma função "calcularReajuste()" que recebe como parâmetros o salário atual e o percentual de reajuste.
2.     Cálculo do Reajuste na Função:

Implementar dentro da função o cálculo do reajuste utilizando a fórmula: "reajuste = (salarioAtual * percentualReajuste) / 100".
3.     Retorno do novo salário:

A função deve retornar o novo salário após o reajuste.
4.     Chamada da função no programa principal:

No programa principal, solicitar ao usuário que informe o salário atual e o percentual de reajuste.
Chamar a função calcularReajuste com os dados fornecidos pelo usuário.
Exibir o resultado na tela.*/

#include <stdio.h>

// Função que calcula o reajuste salarial
float calcularReajuste(float salarioAtual, float percentualReajuste) {
    // Cálculo do reajuste
    float reajuste = (salarioAtual * percentualReajuste) / 100;
    // Retorna o novo salário após o reajuste
    return salarioAtual + reajuste;
}

int main() {
    float salarioAtual, percentualReajuste, novoSalario;

    // Solicita ao usuário que informe o salário atual
    printf("Informe o salário atual do colaborador: ");
    scanf("%f", &salarioAtual);

    // Solicita ao usuário que informe o percentual de reajuste
    printf("Informe o percentual de reajuste: ");
    scanf("%f", &percentualReajuste);

    // Chama a função calcularReajuste e armazena o resultado
    novoSalario = calcularReajuste(salarioAtual, percentualReajuste);

    // Exibe o novo salário após o reajuste
    printf("O novo salário após o reajuste é: R$ %.2f\n", novoSalario);

    return 0;
}
