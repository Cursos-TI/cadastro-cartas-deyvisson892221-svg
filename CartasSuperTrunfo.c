// DESAFIO SUPER TRUNFO - NÍVEL NOVATO
// Descricao: Comparação de cartas sem entrada do usuário
// Aluno: Deivisson Marques

#include <stdio.h> //biblioteca padrao para entrada e saida de dados

int main() {

  // DECLARACAO DAS VARIAVEIS CARTA 1 
  char estado1[] = "CE";                         // armazena a letra do estado A a H
  char codigo1[] = "A01";                // codigo da carta ex: A01
  char cidade1[] = "Fortaleza";             // nome da cidade
  int populacao1 = "12300000";                     // populacao da cidade
  float area1 = 1521.11;                         // area da cidade em km²
  float pib1 = 699.28;                           // pib da cidade
  int pontosturisticos1 = 50;                // numero de pontos turisticos

  // DECLARACAO DAS VARIAVEIS CARTA 2
  char estado2[] = "RJ";
  char codigo2[] = "A02";
  char cidade2[] = "Rio de Janeiro";
  int populacao2 = 6000000;
  float area2 = 1882.90;
  float pib2 = 300.50;
  int pontosturisticos2 = 35;

  // ===== VARIÁVEIS CALCULADAS =====
    float densidade1, densidade2;
    float pibPerCapita1, pibPerCapita2;

    // ===== CALCULOS =====

    // Densidade populacional
    densidade1 = populacao1 / area1;
    densidade2 = populacao2 / area2;

    // PIB per capita
    pibPerCapita1 = pib1 / populacao1;
    pibPerCapita2 = pib2 / populacao2;

    // ===== EXIBIÇÃO DAS CARTAS =====

    printf("=== CARTA 1 ===\n");
    printf("Cidade: %s (%s)\n", cidade1, estado1);
    printf("Populacao: %d\n", populacao1);
    printf("Area: %.2f\n", area1);
    printf("PIB: %.2f\n", pib1);
    printf("Pontos Turisticos: %d\n", pontosturisticos1);
    printf("Densidade Populacional: %.2f\n", densidade1);
    printf("PIB per capita: %.6f\n", pibPerCapita1);

    printf("\n=== CARTA 2 ===\n");
    printf("Cidade: %s (%s)\n", cidade2, estado2);
    printf("Populacao: %d\n", populacao2);
    printf("Area: %.2f\n", area2);
    printf("PIB: %.2f\n", pib2);
    printf("Pontos Turisticos: %d\n", pontosturisticos2);
    printf("Densidade Populacional: %.2f\n", densidade2);
    printf("PIB per capita: %.6f\n", pibPerCapita2);

    // ===== COMPARAÇÃO =====
    // ATRIBUTO ESCOLHIDO: POPULAÇÃO

    printf("\n=== Comparacao de Cartas (Atributo: Populacao) ===\n");

    printf("Carta 1 - %s (%s): %d\n", cidade1, estado1, populacao1);
    printf("Carta 2 - %s (%s): %d\n", cidade2, estado2, populacao2);

    // Estrutura de decisão para determinar a carta vencedora
    if (populacao1 > populacao2) {
        printf("\nResultado: Carta 1 (%s) venceu!\n", cidade1);
    }
    else if (populacao2 > populacao1) {
        printf("\nResultado: Carta 2 (%s) venceu!\n", cidade2);
    }


    return 0;                          // Finaliza o programa
}