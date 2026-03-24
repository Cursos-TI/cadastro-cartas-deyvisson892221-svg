// DESAFIO SUPER TRUNFO - NÍVEL AVENTUREIRO
// Descricao: Comparação de cartas com entrada do usuário e detalhe na densidade valor invertido
// Aluno: Deivisson Marques

#include <stdio.h> //biblioteca padrao para entrada e saida de dados

int main() {

  // DECLARACAO DAS VARIAVEIS CARTA 1 
  char pais1[50] = "Brasil";                      // País
  int populacao1 = 214000000;                     // população total
  float area1 = 8515767;                          // área em km²
  float pib1 = 1.84;                              // PIB
  int pontosturisticos1 = 20;                     // numero de pontos turisticos
  float densidade1 = populacao1 / area1;           // Densidade populacional


  // DECLARACAO DAS VARIAVEIS CARTA 2
  char pais2[50] = "Argentina";                     
  int populacao2 = 45000000;                     
  float area2 = 2780400;                          
  float pib2 = 0.45;                              
  int pontosturisticos2 = 15;                     
  float densidade2 = populacao2 / area2;           


 int opcao;

 // ====== MENU ======

    printf("=== SUPER TRUNFO ===\n");
    printf("escolha o atributo para comparar: \n");
    printf("1. Populacao\n");
    printf("2. Area\n");
    printf("3. PIB\n");
    printf("4. Pontos Turisticos\n");
    printf("5. Densidade demografica\n");
    printf("opcao: ");
    scanf("%d", &opcao);

    printf("===== RESULTADO =====\n");

    // SWITCH CASE PARA COMPARAR OS ATRIBUTOS
    switch (opcao) {
    
    case 1: // população
    printf("atributo: populacao\n");
    printf("%s: %d\n", pais1, populacao1);
    printf("%s: %d\n", pais2, populacao2);
    
    if(populacao1 > populacao2) {
    printf("vencedor: %s\n", pais1);
    }else if(populacao2 > populacao1){
    printf("vencedor: %s\n", pais2);
    } else {
    printf("empate!");
    }
    break;

    case 2: // ÁREA
    printf("atributo: area\n");
    printf("%s: %.2f\n", pais1, area1);
    printf("%s: %.2f\n", pais2, area2);

    if(area1 > area2) {
    printf("vencedor: %s\n", pais1);
    } else if(area2 > area1) {
    printf("vencedor: %s\n", pais2);
    } else {
    printf("empate!\n");
    }
    break;

    case 3: // PIB
    printf("atributo: PIB\n");
    printf("%s: %.2f trilhoes\n", pais1, pib1);
    printf("%s: %.2f trilhoes\n", pais2, pib2);

    if(pib1 > pib2) {
    printf("vencedor: %s\n", pais1);
    } else if(pib2 > pib1) {
    printf("vencedor: %s\n", pais2);
    } else {
    printf("empate!");
    }
    break;
    
    case 4: // pontos turísticos
    printf("atributo: pontosturisticos\n");
    printf("%s: %d\n", pais1, pontosturisticos1);
    printf("%s: %d\n", pais2, pontosturisticos2);

    if(pontosturisticos1 > pontosturisticos2) {
    printf("vencedor: %s\n", pais1);
    }else if(pontosturisticos2 > pontosturisticos1) {
    printf("vencedor: %s\n", pais2);
    } else {
    printf("empate!");
    }
    break;

    case 5: // DENSIDADE (REGRA INVERTIDA)
    printf("atributo: densidade demografica\n");
    printf("%s: %.2f\n", pais1, densidade1);
    printf("%s: %.2f\n", pais2, densidade2);

    if(densidade1 < densidade2) { //menor vence!
    printf("vencedor: %s\n", pais1);
    }else if(densidade2 < densidade1) {
    printf("vencedor: %s\n", pais2);
    } else {
    printf("empate!");
    }
    break;

    default:
    printf("opcao invalida!\n");

}
    return 0;                          // Finaliza o programa
}