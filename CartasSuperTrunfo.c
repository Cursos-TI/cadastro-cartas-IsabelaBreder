#include <stdio.h>

int main(){

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
    float SuperPoderC1, SuperPoderC2;

   
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

    // Calculo Carta 1 - Calculando Densidade Populacional e PIB per Capita
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

    printf("Área (Km2): \n");
    scanf("%f", &area2);

    printf("Pib (bilhões): \n");
    scanf("%f", &pib2);

    printf("Pontos turisticos: \n");
    scanf("%d", &pontos_turisticos2);

    
    // Cálculo Carta 2 - Calculando Densidade Populacional e PIB per Capita
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


    //COMPARAÇÃO DE ATRIBUTOS DAS CARTAS
    //Calculando "Super Poder" Carta 1 e Carta 2 (Soma de todos os atributos)
    SuperPoderC1 = (float)populacao1 + area1 + pib1 + pontos_turisticos1 + percapita1 + (1 / densidade1);
    SuperPoderC2 = (float)populacao2 + area2 + pib2 + pontos_turisticos2 + percapita2 + (1 / densidade2);
    
     
    printf("\n\nCOMPARAÇÃO DE CARTAS\n"); //1 para Carta 1 Vence / 0 Para Carta 2 vence
    
    printf("População: %d\n", populacao1 > populacao2);
    printf("Área: %d\n", area1 > area2);
    printf("PIB: %d\n", pib1 > pib2);
    printf("Pontos Turísticos: %d\n", pontos_turisticos1 > pontos_turisticos2);
    printf("Pib per capita: %d\n", percapita1 > percapita2);
    printf("Densidade da População: %d\n", densidade1 < densidade2);
    printf("Super Poder: %d\n", SuperPoderC1 > SuperPoderC2);

    

       

    return 0;


}
