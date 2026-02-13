#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
// Objetivo: No nível novato você deve criar as cartas representando as cidades utilizando scanf para entrada de dados e printf para exibir as informações.

int main() {

    
    char estado; // letra 'A' a 'H'
    char codigo[4]; // a letra do Estado seguida 01 a 04
    char cidade[50];
    int populacao;
    int pontos_turisticos;
    float area;
    float pib;

    char estado2;
    char codigo2[4];
    char cidade2[50];
    int populacao2;
    int pontos_turisticos2;
    float area2;
    float pib2;

    printf("DESAFIO SUPER TRUNFO - PAÍSES\n");

    printf("\nCarta 1\n");
    
    printf("\nEstado: \n");
    scanf("%c", &estado);

    printf("Código da carta: \n");
    scanf("%s", &codigo);

    printf("Nome da cidade: \n");
    scanf("%s", &cidade);

    printf("População: \n");
    scanf("%d", &populacao);

    printf("Área: \n");
    scanf("%f", &area);

    printf("Pib: \n");
    scanf("%f", &pib);

    printf("Pontos turisticos: \n");
    scanf("%d", &pontos_turisticos);

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

    printf("Pib: \n");
    scanf("%f", &pib2);

    printf("Pontos turisticos: \n");
    scanf("%d", &pontos_turisticos2);
    
    
    // imprimir as informações fornecidas pelo usuario

    printf("\n\nCarta 1\n");
   
    printf("\nEstado: %c\n", estado);
    printf("\nCódigo da carta: %s\n", codigo);
    printf("\nNome da cidade: %s\n", cidade);
    printf("\nPopulação: %d\n", populacao);
    printf("\nÁrea: %f\n", area);
    printf("\nPib: %f\n", pib);
    printf("\nPontos turisticos: %d\n", pontos_turisticos);
    
    printf("\n\nCarta 2\n");

    printf("\nEstado: %c\n", estado2);
    printf("\nCódigo da carta: %s\n", codigo2);
    printf("\nNome da cidade: %s\n", cidade2);
    printf("\nPopulação: %d\n", populacao2);
    printf("\nÁrea: %f\n", area2);
    printf("\nPib: %f\n", pib2);
    printf("\nPontos turisticos: %d\n", pontos_turisticos2);

return 0;
} 
