#include <stdio.h>

int main() {
    char estado1[50];
    char codigo1[4];
    char cidade1[50];
    unsigned long int populacao1;
    float area1;
    float pib1;
    int pontosturisticos1;

    char estado2[50];
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2;
    float pib2;
    int pontosturisticos2;

    // Cadastro carta 1
    printf("Cadastro da primeira Carta\n");
    printf("Digite um Estado (letra de 'A' a 'Z'): \n");
    scanf("%s", estado1);
    printf("Codigo da cidade (01 a 04): \n");
    scanf("%s", codigo1);
    printf("Nome da cidade: \n");
    scanf("%s", cidade1);
    printf("Populacao: \n");
    scanf("%lu", &populacao1);
    printf("Area (em km^2): \n");
    scanf("%f", &area1);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib1);
    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontosturisticos1);

    // Cadastro carta 2
    printf("Cadastro da segunda Carta\n");
    printf("Digite um Estado (letra de 'A' a 'Z'): \n");
    scanf("%s", estado2);
    printf("Codigo da cidade (01 a 04): \n");
    scanf("%s", codigo2);
    printf("Nome da cidade: \n");
    scanf("%s", cidade2);
    printf("Populacao: \n");
    scanf("%lu", &populacao2);
    printf("Area (em km^2): \n");
    scanf("%f", &area2);
    printf("Digite o PIB da cidade: \n");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turisticos: \n");
    scanf("%d", &pontosturisticos2);

    // Exibir cartas cadastradas
    printf("\n--- CARTA 1 ---\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Cidade: %s\n", cidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km²\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosturisticos1);

    printf("\n--- CARTA 2 ---\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Cidade: %s\n", cidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km²\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);

    // Espera o usuário apertar Enter para encerrar
    getchar(); // limpar buffer do scanf anterior
    printf("\nPressione ENTER para sair...\n");
    getchar();

    return 0;
}

