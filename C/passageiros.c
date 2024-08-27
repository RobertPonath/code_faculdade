#include <stdio.h>   // Inclui a biblioteca padrão de entrada/saída
#include <stdbool.h> // Inclui a biblioteca para trabalhar com tipos booleanos (true/false)

#define MAX_ECONOMICA 200   // Define o número máximo de assentos na Classe Econômica
#define MAX_EXECUTIVA 50    // Define o número máximo de assentos na Classe Executiva
#define MAX_PRIMEIRA 10     // Define o número máximo de assentos na Primeira Classe

// Estrutura que representa um passageiro
typedef struct {
    int id;               // Identificação única para cada passageiro
    bool com_crianca;     // Indica se o passageiro viaja com criança (true ou false)
    bool acessibilidade;  // Indica se o passageiro precisa de acessibilidade (true ou false)
} Passageiro;

// Função para acomodar passageiros conforme suas necessidades e a disponibilidade de assentos
void acomodar_passageiros(Passageiro passageiros[], int num_passageiros, int *econ_assentos, int *exec_assentos, int *prim_assentos) {
    // Itera sobre todos os passageiros
    for (int i = 0; i < num_passageiros; i++) {
        Passageiro p = passageiros[i];  // Pega o passageiro atual
        
        // Prioriza a Primeira Classe para passageiros com necessidades de acessibilidade
        if (p.acessibilidade && *prim_assentos > 0) {
            (*prim_assentos)--;  // Decrementa o número de assentos disponíveis na Primeira Classe
            printf("Passageiro %d acomodado na Primeira Classe\n", p.id);
        } 
        // Prioriza a Classe Executiva para passageiros com crianças
        else if (p.com_crianca && *exec_assentos > 0) {
            (*exec_assentos)--;  // Decrementa o número de assentos disponíveis na Classe Executiva
            printf("Passageiro %d acomodado na Classe Executiva\n", p.id);
        } 
        // Acomoda o restante dos passageiros na Classe Econômica, se houver espaço
        else if (*econ_assentos > 0) {
            (*econ_assentos)--;  // Decrementa o número de assentos disponíveis na Classe Econômica
            printf("Passageiro %d acomodado na Classe Econômica\n", p.id);
        } 
        // Caso a Classe Econômica esteja cheia, tenta acomodar na Classe Executiva
        else if (*exec_assentos > 0) {
            (*exec_assentos)--;  // Decrementa o número de assentos disponíveis na Classe Executiva
            printf("Passageiro %d acomodado na Classe Executiva\n", p.id);
        } 
        // Se todas as outras classes estiverem cheias, tenta a Primeira Classe
        else if (*prim_assentos > 0) {
            (*prim_assentos)--;  // Decrementa o número de assentos disponíveis na Primeira Classe
            printf("Passageiro %d acomodado na Primeira Classe\n", p.id);
        } 
        // Se não houver mais assentos em nenhuma classe, o passageiro não pode ser acomodado
        else {
            printf("Passageiro %d não pôde ser acomodado\n", p.id);
        }
    }
}

int main() {
    // Lista de passageiros com suas necessidades específicas
    Passageiro passageiros[] = {
        {1, false, true},  // Passageiro 1: precisa de acessibilidade
        {2, true, false},  // Passageiro 2: viaja com criança
        {3, false, false}, // Passageiro 3: sem necessidades especiais
        {4, true, false},  // Passageiro 4: viaja com criança
        {5, false, false}  // Passageiro 5: sem necessidades especiais
    };
    int num_passageiros = sizeof(passageiros) / sizeof(passageiros[0]);  // Calcula o número total de passageiros

    // Inicializa a quantidade de assentos disponíveis em cada classe
    int econ_assentos = MAX_ECONOMICA;
    int exec_assentos = MAX_EXECUTIVA;
    int prim_assentos = MAX_PRIMEIRA;

    // Chama a função para acomodar os passageiros
    acomodar_passageiros(passageiros, num_passageiros, &econ_assentos, &exec_assentos, &prim_assentos);

    // Exibe a quantidade de assentos restantes em cada classe após a acomodação
    printf("Assentos restantes:\n");
    printf("Classe Econômica: %d\n", econ_assentos);
    printf("Classe Executiva: %d\n", exec_assentos);
    printf("Primeira Classe: %d\n", prim_assentos);

    return 0;
}
