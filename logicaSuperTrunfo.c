#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 2 - Comparação das Cartas

int main() {
    // Definição das variáveis
    char codigoA[5], cidadeA[50];
    char codigoB[5], cidadeB[50];

    int populacaoA, populacaoB;
    float areaA, areaB;
    float pibA, pibB;

    // Cadastro da Carta A
    printf("=== Cadastro da Carta A ===\n");
    printf("Digite o codigo da cidade: ");
    scanf("%s", codigoA);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidadeA);

    printf("Digite a populacao: ");
    scanf("%d", &populacaoA);

    printf("Digite a area (km²): ");
    scanf("%f", &areaA);

    printf("Digite o PIB: ");
    scanf("%f", &pibA);

    // Cadastro da Carta B
    printf("\n=== Cadastro da Carta B ===\n");
    printf("Digite o codigo da cidade: ");
    scanf("%s", codigoB);

    printf("Digite o nome da cidade: ");
    scanf(" %[^\n]", cidadeB);

    printf("Digite a populacao: ");
    scanf("%d", &populacaoB);

    printf("Digite a area (km²): ");
    scanf("%f", &areaB);

    printf("Digite o PIB: ");
    scanf("%f", &pibB);

    // Comparação de Cartas (atributo escolhido: população)
    printf("\n=== Resultado da Comparacao ===\n");
    if (populacaoA > populacaoB) {
        printf("A cidade vencedora é: %s (maior populacao)\n", cidadeA);
    } else if (populacaoB > populacaoA) {
        printf("A cidade vencedora é: %s (maior populacao)\n", cidadeB);
    } else {
        printf("Empate! As duas cidades possuem a mesma populacao.\n");
    }

    return 0;
}
