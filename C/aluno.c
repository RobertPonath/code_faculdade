#include <stdio.h>
#include <string.h> // Para a função strcpy

// Definindo a estrutura Aluno
struct Aluno {
    char nome[50];
    int idade;
    float mediaNotas;
};

int main() {
    // Declarando uma variável do tipo Aluno
    struct Aluno aluno1;

    // Atribuindo valores aos campos da estrutura
    strcpy(aluno1.nome, "João Silva");
    aluno1.idade = 20;
    aluno1.mediaNotas = 8.5;

    // Exibindo os valores armazenados
    printf("Nome: %s\n", aluno1.nome);
    printf("Idade: %d\n", aluno1.idade);
    printf("Média das Notas: %.2f\n", aluno1.mediaNotas);

    return 0;
}