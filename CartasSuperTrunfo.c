#include <stdio.h>

int main() {
    // Definindo variáveis para armazenar os atributos da cidade
    int codigo;
    char nome[100];
    int populacao;
    float area;
    float pib;
    int pontosTuristicos;

    // Solicita ao usuário o cadastro da cidade
    printf("Cadastro de Cidade\n");
    printf("Informe o código da cidade: ");
    scanf("%d", &codigo);
    
    printf("Informe o nome da cidade: ");
    getchar(); // Para consumir o '\n' deixado pelo scanf anterior
    fgets(nome, sizeof(nome), stdin); // Usa fgets para permitir espaços no nome da cidade
    
    printf("Informe a população da cidade: ");
    scanf("%d", &populacao);
    
    printf("Informe a área da cidade (em km²): ");
    scanf("%f", &area);
    
    printf("Informe o PIB da cidade (em bilhões): ");
    scanf("%f", &pib);
    
    printf("Informe o número de pontos turísticos da cidade: ");
    scanf("%d", &pontosTuristicos);

    // Exibe as informações da cidade cadastrada
    printf("\nDados da Cidade Cadastrada:\n");
    printf("Código da cidade: %d\n", codigo);
    printf("Nome da cidade: %s", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2f bilhões\n", pib);
    printf("Número de pontos turísticos: %d\n", pontosTuristicos);

    return 0;
}
