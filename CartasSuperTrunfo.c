#include <stdio.h>
#include <string.h>

// Estrutura para armazenar os dados das cidades
typedef struct {
    char codigo[10];
    char nome[50];
    int populacao;
    float area;
    float pib;
} Cidade;

// Função para comparar as duas cidades com base na população
void compararPorPopulacao(Cidade cidadeA, Cidade cidadeB) {
    if (cidadeA.populacao > cidadeB.populacao) {
        printf("Cidade %s tem maior população.\n", cidadeA.nome);
    } else if (cidadeA.populacao < cidadeB.populacao) {
        printf("Cidade %s tem maior população.\n", cidadeB.nome);
    } else {
        printf("As duas cidades têm a mesma população.\n");
    }
}

// Função para comparar as duas cidades com base na área
void compararPorArea(Cidade cidadeA, Cidade cidadeB) {
    if (cidadeA.area > cidadeB.area) {
        printf("Cidade %s tem maior área.\n", cidadeA.nome);
    } else if (cidadeA.area < cidadeB.area) {
        printf("Cidade %s tem maior área.\n", cidadeB.nome);
    } else {
        printf("As duas cidades têm a mesma área.\n");
    }
}

// Função para comparar as duas cidades com base no PIB
void compararPorPib(Cidade cidadeA, Cidade cidadeB) {
    if (cidadeA.pib > cidadeB.pib) {
        printf("Cidade %s tem maior PIB.\n", cidadeA.nome);
    } else if (cidadeA.pib < cidadeB.pib) {
        printf("Cidade %s tem maior PIB.\n", cidadeB.nome);
    } else {
        printf("As duas cidades têm o mesmo PIB.\n");
    }
}

int main() {
    // Definição das variáveis para armazenar as cidades
    Cidade cidade1, cidade2;

    // Cadastro das Cartas (Leitura dos dados)
    printf("Digite o código da cidade 1: ");
    scanf("%s", cidade1.codigo);
    printf("Digite o nome da cidade 1: ");
    scanf("%s", cidade1.nome);
    printf("Digite a população da cidade 1: ");
    scanf("%d", &cidade1.populacao);
    printf("Digite a área da cidade 1: ");
    scanf("%f", &cidade1.area);
    printf("Digite o PIB da cidade 1: ");
    scanf("%f", &cidade1.pib);

    printf("\n");

    printf("Digite o código da cidade 2: ");
    scanf("%s", cidade2.codigo);
    printf("Digite o nome da cidade 2: ");
    scanf("%s", cidade2.nome);
    printf("Digite a população da cidade 2: ");
    scanf("%d", &cidade2.populacao);
    printf("Digite a área da cidade 2: ");
    scanf("%f", &cidade2.area);
    printf("Digite o PIB da cidade 2: ");
    scanf("%f", &cidade2.pib);

    // Comparação de Cartas
    printf("\nComparando as cidades:\n");
    compararPorPopulacao(cidade1, cidade2);
    compararPorArea(cidade1, cidade2);
    compararPorPib(cidade1, cidade2);

    return 0;
}
