#include <stdio.h>
#include <string.h>

void limparBuffer() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

int main() {
    char estado1, estado2;
    char codigo1[10], codigo2[10];
    char nomeCidade1[50], nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;

    // Carta 1
    printf("Digite o estado da primeira cidade (A-H): ");
    scanf(" %c", &estado1);
    limparBuffer();

    printf("Digite o código da carta (ex: A01): ");
    fgets(codigo1, sizeof(codigo1), stdin);
    codigo1[strcspn(codigo1, "\n")] = 0;

    printf("Digite o nome da cidade: ");
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    nomeCidade1[strcspn(nomeCidade1, "\n")] = 0;

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao1);
    limparBuffer();

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area1);
    limparBuffer();

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib1);
    limparBuffer();

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos1);
    limparBuffer();

    // Carta 2
    printf("\nDigite o estado da segunda cidade (A-H): ");
    scanf(" %c", &estado2);
    limparBuffer();

    printf("Digite o código da carta (ex: B02): ");
    fgets(codigo2, sizeof(codigo2), stdin);
    codigo2[strcspn(codigo2, "\n")] = 0;

    printf("Digite o nome da cidade: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = 0;

    printf("Digite a população da cidade: ");
    scanf("%d", &populacao2);
    limparBuffer();

    printf("Digite a área da cidade (em km²): ");
    scanf("%f", &area2);
    limparBuffer();

    printf("Digite o PIB da cidade (em bilhões de reais): ");
    scanf("%f", &pib2);
    limparBuffer();

    printf("Digite o número de pontos turísticos: ");
    scanf("%d", &pontosTuristicos2);
    limparBuffer();

    // Mostrar dados das cartas
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    // Comparação pela população
    if (populacao1 > populacao2) {
        printf("\nA cidade vencedora é %s (Carta 1) por ter maior população.\n", nomeCidade1);
    } else if (populacao2 > populacao1) {
        printf("\nA cidade vencedora é %s (Carta 2) por ter maior população.\n", nomeCidade2);
    } else {
        printf("\nAs duas cidades têm a mesma população.\n");
    }

    return 0;
}

