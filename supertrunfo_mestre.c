#include <stdio.h>

int main() {
    // ======CARTA 1====== //
    char estado1[3];                            // estado 
    char codigo1[4];                            // código das cartas
    char cidade1[50];                           // nome da cidade
    unsigned long int populacao1;               // população
    float area1, pib1;                          // área (km²) e PIB (em bilhões)                                        
    int pontosTuristicos1;                      // número de pontos turísticos
    float densidade1, perCapita1, superPoder1;  // densidade populacional e PIB per capita             

    // ====== CARTA 2 ====== //
    char estado2[3];
    char codigo2[4];
    char cidade2[50];
    unsigned long int populacao2;
    float area2, pib2;
    int pontosTuristicos2;
    float densidade2, perCapita2, superPoder2;
    
    // ===== Entrada de dados (Carta 1) ===== //
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %2s", estado1); 
    printf("Codigo da Carta (A01): ");
    scanf(" %3s", codigo1); 
    printf("Nome da Cidade: ");
    scanf(" %49[^\n]%*c", cidade1);
    printf("Populacao: ");
    scanf(" %d", &populacao1);
    printf("area (km2): ");
    scanf(" %f", &area1);
    printf("PIB (em bilhoes): ");
    scanf(" %f", &pib1);
    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &pontosTuristicos1);
    densidade1 = (float) populacao1 /  area1;
    perCapita1 = pib1 / (float) populacao1;
    superPoder1 = (int) populacao1 + pontosTuristicos1 + (float) perCapita1 + (1/ densidade1);  
    printf("\n\n");

// ===== Entrada de dados (Carta 2) ===== //
    printf("Digite os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %2s", estado2);
    printf("Codigo da Carta (B02): ");
    scanf(" %3s", codigo2);
    printf("Nome da Cidade: ");
    scanf(" %49[^\n]%*c", cidade2);
    printf("Populacao: ");
    scanf(" %d", &populacao2);
    printf("area (km2): ");
    scanf(" %f", &area2);
    printf("PIB (em bilhoes): ");
    scanf(" %f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &pontosTuristicos2);
    densidade2 = (float) populacao2 / area2;
    perCapita2 = pib2 / (float) populacao2;
    superPoder2 = (int) populacao2 + pontosTuristicos2 + (float) perCapita2 + (1/ densidade2);
    printf("\n\n");

    // ===== Saída formatada ===== //
    printf("*** CARTA 1 ***\n");
    printf("Estado: %s\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("Populacao: %d\n", populacao1);
    printf("area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("a densidade populacional %.2f", densidade1);
    printf("%d","%f", superPoder1);
    printf("\n\n");

    printf("*** CARTA 2 ***\n");
    printf("Estado: %s\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("Populacao: %d\n", populacao2);
    printf("area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("a densidade populacional %.2f", densidade2);
    superPoder2 = (int) populacao2 + pontosTuristicos2 + (float) perCapita2 + densidade2;
    printf("\n\n");

          //** comparação das cartas **//
    
    printf("=== RESULTADO DA BATALHA ===\n");
    printf("densidade1 < densidade2: %d\n", densidade1 < densidade2);
    printf("populacao1 > populacao2: %d\n", populacao1 > populacao2);
    printf("pontosTuristicos1 > pontosTuristicos2: %d\n", pontosTuristicos1 > pontosTuristicos2);
    printf("perCapita1 > perCapita2: %d\n", perCapita1 > perCapita2);
    printf("superPoder1 > superPoder2: %d\n", superPoder1 > superPoder2);
    printf("\n\n");
  
    //**comparaçoes entre perCapita** //
    //**comparaçoes entre densidade** //
    //**comparaçoes entre superPoder**//
    printf("=== COMPARATIVO DAS CARTAS ===\n");
  
    if ( superPoder1 > superPoder2 ) {
        printf("carta 1 vence com maior super poder!\n");
    } else if ( superPoder1 < superPoder2 ) {
        printf("carta 2 vence com maior super poder!\n");
    } else {
        printf("empate no super poder!\n");
    }

    if ( densidade1 > densidade2 ) {
        printf("carta 1 vence com menor densidade populacional!\n");
    } else if ( densidade2 > densidade1 ) {
        printf("carta 2 vence com menor densidade populacional!\n");
    } else {
        printf("empate na densidade populacional!\n");
    }
  
    if ( perCapita1 > perCapita2 ) {
        printf(" carta 1 vence com maior perCapita!\n");
    } else if ( perCapita1 < perCapita2 ) {
        printf("carta 2 vence com maior perCapita!\n");
       
    } else {
        printf("empate no perCapita!\n");
    }
    
    return 0;

}
