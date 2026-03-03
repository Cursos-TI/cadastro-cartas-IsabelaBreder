#include <stdio.h>

// Desafio Super Trunfo - Países

int main() {

    
    // Declaração das variáveis
    char estado1, estado2; // letra 'A' a 'H'
    char codigo1[4], codigo2[4]; // a letra do Estado seguida 01 a 04
    char cidade1[50], cidade2[50];
    int populacao1, populacao2;
    int pontos_turisticos1, pontos_turisticos2;
    float area1, area2;
    float pib1, pib2;
    float densidade1, densidade2;
    float percapita1, percapita2;

    
    printf("DESAFIO SUPER TRUNFO - PAÍSES\n");

    // Cadastro da Carta 1
    printf("Carta 1\n");
    
    printf("Estado: \n");
    scanf("%c", &estado1);

    printf("Código da carta: \n");
    scanf("%s", &codigo1);

    printf("Nome da cidade: \n");
    scanf("%s", &cidade1);

    printf("População: \n");
    scanf("%d", &populacao1);

    printf("Área (Km2): \n");
    scanf("%f", &area1);

    printf("Pib (bilhões): \n");
    scanf("%f", &pib1);

    printf("Pontos turisticos: \n");
    scanf("%d", &pontos_turisticos1);

    // Cálculo Carta 1
    densidade1 = (float)populacao1 / area1;
    percapita1 = (pib1 * 1000000000) / populacao1;


    // Cadastro da Carta 2
    printf("\n\nCarta 2\n");
    
    printf("Estado: \n");
    scanf("%s", &estado2);

    printf("Código da carta: \n");
    scanf("%s", codigo2);

    printf("Nome da cidade: \n");
    scanf("%s", cidade2);

    printf("População: \n");
    scanf("%d", &populacao2);

    printf("Área: \n");
    scanf("%f", &area2);

    printf("Pib(bilhões): \n");
    scanf("%f", &pib2);

    printf("Pontos turisticos: \n");
    scanf("%d", &pontos_turisticos2);


    // Cálculo Carta 2
    densidade2 = (float)populacao2 / area2;
    percapita2 = (pib2 * 1000000000) / populacao2;

    // Exibiçåo dos dados
    printf("\n\nCarta 1\n");
   
    printf("Estado: %c\n", estado1);
    printf("Código da carta: %s\n", codigo1);
    printf("Nome da cidade: %s\n", cidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km2\n", area1);
    printf("Pib: %.2f bilhões de reais\n", pib1);
    printf("Pontos turisticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
    printf("Pib Per Capita: R$ %.2f \n", percapita1);


    printf("\n\nCarta 2\n");

    printf("Estado: %c\n", estado2);
    printf("Código da carta: %s\n", codigo2);
    printf("Nome da cidade: %s\n", cidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f Km2\n", area2);
    printf("Pib: %.2f bilhões de reais\n", pib2);
    printf("Pontos turisticos:%d\n", pontos_turisticos2);
    printf("Densidade Populacional:%.2f hab/km2\n", densidade2);
    printf("Pib Per Capita: R$ %.2f\n", percapita2);
    
    return 0;


}
    
  

