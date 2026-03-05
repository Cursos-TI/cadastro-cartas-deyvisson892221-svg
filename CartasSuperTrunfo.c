// JOGO SUPER TRUNFO - CADASTRO DE CARTAS
// Aluno Deivisson Marques
//Linguagem C
//Descricao: Programa que cadastra duas cartas de cidades
//e exibe suas informacoes no terminal.
//===========================================================

#include <stdio.h> //biblioteca padrao para entrada e saida de dados

int main() {

  //=================================
  // DECLARACAO DAS VARIAVEIS CARTA 1 
  //=================================

  char estado1;                         // armazena a letra do estado A a H
  char codigo_carta1[4];                // codigo da carta ex: A01
  char nome_da_cidade1[50];             // nome da cidade
  int populacao1;                       // populacao da cidade
  float area1;                          // area da cidade em km²
  float pib1;                           // pib da cidade
  int pontosturisticos1;                // numero de pontos turisticos

  //=================================
  // DECLARACAO DAS VARIAVEIS CARTA 2
  //=================================

  char estado2;
  char codigo_carta2[4];
  char nome_da_cidade2[50];
  int populacao2;
  float area2;
  float pib2;
  int pontosturisticos2;

  printf("===cadastro da carta1===\n");

  printf("estado1:(A a H): ");           // saída
  scanf(" %c" , &estado1);               // entrada - Le um caractere

  printf("codigo da carta1: (ex A01): ");
  scanf(" %s", codigo_carta1);           // le uma string

  printf("nome da cidade: ");
  scanf(" %[^\n]", nome_da_cidade1);     // le texto com espacos
  getchar();                             // Limpa o buffer do teclado

  printf("populacao: ");
  scanf(" %d", &populacao1);

  printf("area: (em km2): ");
  scanf(" %f", &area1);

  printf(" Pib em Bilhoes: ");
  scanf(" %f", &pib1);

  printf("pontos turisticos: ");
  scanf(" %d", &pontosturisticos1);

  // ====== CARTA 2 =======

  printf("=====cadastro da carta 2=====\n");

  printf("estado (A a H): ");
  scanf("%c", &estado2);

  printf("codigo da carta (ex: B02): ");
  scanf(" %s", codigo_carta2);

  printf("nome da cidade: ");
  scanf(" %[^\n]", nome_da_cidade2);
  getchar(); //limpa o buffer do teclado

  printf("populacao: ");
  scanf(" %d", &populacao2);

  printf("area (em km2): ");
  scanf(" %f", &area2);

  printf("pib, (em bilhoes): ");
  scanf(" %f", &pib2);

  printf("pontos turisticos: ");
  scanf(" %d", &pontosturisticos2);

  //======EXIBICAO DOS DADOS DAS CARTAS========//

   printf("\n\n=== CARTA 1 ===\n");
    printf("estado: %c\n", estado1);
    printf("codigo: %s\n", codigo_carta1);
    printf("nome da cidade: %s\n", nome_da_cidade1);
    printf("populacao: %d\n", populacao1);
    printf("area: %.2f km2\n", area1);
    printf("pib: R$ %.2f bilhoes\n", pib1);
    printf("numero depontos turisticos: %d\n", pontosturisticos1);

    printf("\n\n=== CARTA 2 ===\n");
    printf("estado: %c\n", estado2);
    printf("codigo: %s\n", codigo_carta2);
    printf("nome da cidade: %s\n", nome_da_cidade2);
    printf("populacao: %d\n", populacao2);
    printf("area: %.2f km2\n", area2);
    printf("pib: R$ %.2f bilhoes\n", pib2);
    printf("numero depontos turisticos: %d\n", pontosturisticos2);



    return 0;                          // Finaliza o programa
}