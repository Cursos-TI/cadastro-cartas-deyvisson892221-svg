// DESAFIO SUPER TRUNFO - NÍVEL MESTRE
// Comparação com dois atributos + soma + menus dinâmicos
// Aluno: Deivisson Marques

#include <stdio.h> // biblioteca padrão para usar printf e scanf

int main() {

    // ===== CARTAS =====
    // aqui estou criando os nomes dos países
    char pais1[50] = "Brasil";
    char pais2[50] = "Argentina";

    // aqui são os atributos da carta 1 e carta 2
    int populacao1 = 214000000, populacao2 = 45000000;
    float area1 = 8515767, area2 = 2780400;
    float pib1 = 1.84, pib2 = 0.45;
    int pontos1 = 20, pontos2 = 15;

    // calculando a densidade populacional (população / área)
    float densidade1 = (float) populacao1 / area1;
    float densidade2 = (float) populacao2 / area2;

    // variáveis para guardar as opções do usuário
    int op1, op2;

    // ===== MENU DO PRIMEIRO ATRIBUTO =====
    printf("=== SUPER TRUNFO ===\n");
    printf("Escolha o PRIMEIRO atributo:\n");
    printf("1.Populacao\n2.Area\n3.PIB\n4.Pontos\n5.Densidade\n");
    scanf("%d", &op1); // usuário escolhe o primeiro atributo

    // ===== MENU DO SEGUNDO ATRIBUTO (DINÂMICO) =====
    printf("\nEscolha o SEGUNDO atributo:\n");

    // aqui o menu muda dependendo do que foi escolhido antes
    switch(op1){
        case 1: printf("2.Area\n3.PIB\n4.Pontos\n5.Densidade\n"); break;
        case 2: printf("1.Populacao\n3.PIB\n4.Pontos\n5.Densidade\n"); break;
        case 3: printf("1.Populacao\n2.Area\n4.Pontos\n5.Densidade\n"); break;
        case 4: printf("1.Populacao\n2.Area\n3.PIB\n5.Densidade\n"); break;
        case 5: printf("1.Populacao\n2.Area\n3.PIB\n4.Pontos\n"); break;
        default: 
            printf("Opcao invalida!\n"); // caso o usuário digite errado
            return 0; // encerra o programa
    }

    scanf("%d", &op2); // usuário escolhe o segundo atributo

    // aqui impede o usuário de escolher o mesmo atributo duas vezes
    if(op1 == op2){
        printf("Erro: atributos iguais!\n");
        return 0;
    }

    // variáveis que vão guardar os valores escolhidos
    float v1a, v1b, v2a, v2b;

    // ===== ATRIBUTO 1 =====
    // aqui estou pegando os valores dependendo da escolha do usuário
    if(op1 == 1){ 
        v1a = populacao1; 
        v1b = populacao2; 
    }
    else if(op1 == 2){ 
        v1a = area1; 
        v1b = area2; 
    }
    else if(op1 == 3){ 
        v1a = pib1; 
        v1b = pib2; 
    }
    else if(op1 == 4){ 
        v1a = pontos1; 
        v1b = pontos2; 
    }
    else { 
        v1a = densidade1; 
        v1b = densidade2; 
    }

    // ===== ATRIBUTO 2 =====
    // mesma lógica do atributo 1
    if(op2 == 1){ 
        v2a = populacao1; 
        v2b = populacao2; 
    }
    else if(op2 == 2){ 
        v2a = area1; 
        v2b = area2; 
    }
    else if(op2 == 3){ 
        v2a = pib1; 
        v2b = pib2; 
    }
    else if(op2 == 4){ 
        v2a = pontos1; 
        v2b = pontos2; 
    }
    else { 
        v2a = densidade1; 
        v2b = densidade2; 
    }

    // ===== REGRA DA DENSIDADE =====
    // aqui uso operador ternário
    // se for densidade (opção 5), inverto o valor (multiplico por -1)
    // isso faz o menor valor vencer automaticamente
    float soma1 = (op1 == 5 ? -v1a : v1a) + (op2 == 5 ? -v2a : v2a);
    float soma2 = (op1 == 5 ? -v1b : v1b) + (op2 == 5 ? -v2b : v2b);

    // ===== RESULTADO =====
    printf("\n===== RESULTADO =====\n");

    // mostrando os valores e a soma de cada carta
    printf("%s: %.2f + %.2f = %.2f\n", pais1, v1a, v2a, soma1);
    printf("%s: %.2f + %.2f = %.2f\n", pais2, v1b, v2b, soma2);

    // verificando quem venceu
    if(soma1 > soma2)
        printf("VENCEDOR: %s\n", pais1);
    else if(soma2 > soma1)
        printf("VENCEDOR: %s\n", pais2);
    else
        printf("EMPATE!\n"); // caso as somas sejam iguais

    return 0; // finaliza o programa
}