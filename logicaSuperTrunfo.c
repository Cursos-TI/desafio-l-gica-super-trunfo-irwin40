#include <stdio.h>
#include <string.h>

// Desafio Super Trunfo - Cidades
// Nessa etapa foi suprimido o cadastro de cartas, e o código foi simplificado para comparar duas cartas já cadastradas.

int main() {
    // Declaração das variavéis da Carta 1 (_01) e Carta 2 (_02).
    
    char estado_01, estado_02;
    char codigo_01[4], cidade_01[50], codigo_02[4], cidade_02[50], atributo_escolhido_01[50], atributo_escolhido_02[50]; 
    int pontos_turisticos_01, pontos_turisticos_02, atributo_01, atributo_02;
    int carta_01 = 0, carta_02 = 0; 
    unsigned long int populacao_01, populacao_02;
    float area_01, pib_01, area_02, pib_02, densidade_01, densidade_02, pib_per_capita_01, pib_per_capita_02, super_poder_01, super_poder_02;
        
    // atribuições de valores para as variáveis da Carta 1 (_01) e Carta 2 (_02).
    estado_01 = 'A';
    estado_02 = 'B';
    strcpy(codigo_01, "A01");
    strcpy(cidade_01, "São Paulo");
    strcpy(codigo_02, "B02");
    strcpy(cidade_02, "Rio de Janeiro");
    pontos_turisticos_01 = 120;
    pontos_turisticos_02 = 150;
    populacao_01 = 12400000;
    populacao_02 = 6700000;
    area_01 = 1521;
    area_02 = 1200;
    pib_01 = 8000000000.0;
    pib_02 = 4000000000.0;
    
    // Cálculo da Densidade Populacional e PIB per Capita

    densidade_01 = populacao_01 / area_01; // Densidade Populacional da Carta 1
    densidade_02 = populacao_02 / area_02; // Densidade Populacional da Carta 2
    pib_per_capita_01 = pib_01 / populacao_01; // PIB per Capita da Carta 1 
    pib_per_capita_02 = pib_02 / populacao_02; // PIB per Capita da Carta 2

    // Cálculo do Super Poder 

    super_poder_01 = ((float) populacao_01 + area_01 + pib_01 + (float) pontos_turisticos_01 + pib_per_capita_01 + 1.0/ densidade_01); // Super Poder da Carta 1
    super_poder_02 = ((float) populacao_02 + area_02 + pib_02 + (float) pontos_turisticos_02 + pib_per_capita_02 + 1.0/ densidade_02); // Super Poder da Carta 2

    
    // Exibição dos dados das cartas cadastradas
    //CABEÇALHO DO PROGRAMA
   
    printf("\n======================================\n");
    printf("============ SUPER TRUNFO ============\n");
    printf("======================================");
    
    // Exibição CARTA 01

    printf("\n\n-- CARTAS CADASTRADAS --\n\n- CARTA 1 -\n\n");
    printf("Estado: %c\n", estado_01);
    printf("Código: %s\n", codigo_01);
    printf("Nome da Cidade: %s\n", cidade_01);
    printf("População: %lu\n", populacao_01);
    printf("Área: %.2f km²\n", area_01);
    printf("PIB: R$ %.2f\n", pib_01);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos_01);
    printf("Densidade Populacional: %.2f hab/km²\n", densidade_01);
    printf("PIB per Capita: R$ %.2f\n", pib_per_capita_01);
    printf("Super Poder: %.2f\n\n--------------------------------------\n\n", super_poder_01);
    
    // Exibição CARTA 02

    printf("- CARTA 2 -\n\n");
    printf("Estado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: R$ %.2f\nNúmero de Pontos Turísticos: \
    %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: R$ %.2f\nSuper Poder: %.2f\n\n======================================\n\n", estado_02, codigo_02,\
    cidade_02, populacao_02, area_02, pib_02, pontos_turisticos_02, densidade_02, pib_per_capita_02, super_poder_02);
    
    //Menu para escolha do primeiro atributo

    printf("-------- COMPARAÇAO DE CARTAS --------\n\n");
    printf("- ATRIBUTOS:\n");
    printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos turísticos\n5 - Densidade demográfica\n6 - Super poder\n\nESCOLHA O PRIMEIRO ATRIBUTO: "); 
    scanf("%d", &atributo_01);
    printf("\n======================================\n\n");    
    
    // Menu para escolha do segundo atributo
    // O segundo atributo não pode ser o mesmo que o primeiro, e as opções disponíveis são limitadas de acordo com a escolha do primeiro atributo.
    switch (atributo_01){
        case 1:
            printf("- ATRIBUTOS:\n");
            printf("--------------------------\n2 - Área\n3 - PIB\n4 - Pontos turísticos\n5 - Densidade demográfica\n6 - Super poder\n\nESCOLHA O SEGUNDO ATRIBUTO: "); 
            scanf("%d", &atributo_02);
        break;
        case 2:
        printf("- ATRIBUTOS:\n");
        printf("1 - População\n--------------------------\n3 - PIB\n4 - Pontos turísticos\n5 - Densidade demográfica\n6 - Super poder\n\nESCOLHA O SEGUNDO ATRIBUTO: "); 
        scanf("%d", &atributo_02);
        break;
        case 3:
        printf("- ATRIBUTOS:\n");
        printf("1 - População\n2 - Área\n--------------------------\n4 - Pontos turísticos\n5 - Densidade demográfica\n6 - Super poder\n\nESCOLHA O SEGUNDO ATRIBUTO: ");
        scanf("%d", &atributo_02);
        break;
        case 4:
        printf("- ATRIBUTOS:\n");
        printf("1 - População\n2 - Área\n3 - PIB\n--------------------------\n5 - Densidade demográfica\n6 - Super poder\n\nESCOLHA O SEGUNDO ATRIBUTO: ");
        scanf("%d", &atributo_02);
        break;
        case 5:
        printf("- ATRIBUTOS:\n");
        printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos turísticos\n--------------------------\n6 - Super poder\n\nESCOLHA O SEGUNDO ATRIBUTO: ");
        scanf("%d", &atributo_02);
        break;
        case 6:
        printf("- ATRIBUTOS:\n");
        printf("1 - População\n2 - Área\n3 - PIB\n4 - Pontos turísticos\n5 - Densidade demográfica\n--------------------------\n\nESCOLHA O SEGUNDO ATRIBUTO: ");
        scanf("%d", &atributo_02);
        break;
        default:
            printf("\nATRIBUTO INVÁLIDO!\n");
            printf("\n=========== FIM DO PROGRAMA ===========\n\n");
            return 0;       
        break;
    } // Fim do switch
        
    //Cálculo para definir vencedor do primeiro atributo escolhido (vitória: +1 ponto, derrota: +0 ponto, empate: +0 ponto)

    switch (atributo_01){ 
        case 1:
            strcpy(atributo_escolhido_01, "População");
            (populacao_01 > populacao_02) ? (carta_01 += 1, carta_02 += 0) : 
            (populacao_01 < populacao_02) ? (carta_01 += 0, carta_02 += 1) : 
            (carta_01 += 0, carta_02 += 0);
        break;
        case 2:
            strcpy(atributo_escolhido_01, "Área");
            (area_01 > area_02) ? (carta_01 += 1, carta_02 += 0) : 
            (area_01 < area_02) ? (carta_01 += 0, carta_02 += 1) : 
            (carta_01 += 0, carta_02 += 0);
        break;
        case 3:
            strcpy(atributo_escolhido_01, "PIB");
            (pib_01 > pib_02) ? (carta_01 += 1, carta_02 += 0) : 
            (pib_01 < pib_02) ? (carta_01 += 0, carta_02 += 1) : 
            (carta_01 += 0, carta_02 += 0);
        break;
        case 4:
            strcpy(atributo_escolhido_01, "Pontos Turísticos");
            (pontos_turisticos_01 > pontos_turisticos_02) ? (carta_01 += 1, carta_02 += 0) : 
            (pontos_turisticos_01 < pontos_turisticos_02) ? (carta_01 += 0, carta_02 += 1) : 
            (carta_01 += 0, carta_02 += 0);
        break;
        case 5:
            strcpy(atributo_escolhido_01, "Densidade Populacional");
            (densidade_01 < densidade_02) ? (carta_01 += 1, carta_02 += 0) : 
            (densidade_01 > densidade_02) ? (carta_01 += 0, carta_02 += 1) : 
            (carta_01 += 0, carta_02 += 0);
        break;
        case 6:
            strcpy(atributo_escolhido_01, "Super Poder");
            (super_poder_01 > super_poder_02) ? (carta_01 += 1, carta_02 += 0) : 
            (super_poder_01 < super_poder_02) ? (carta_01 += 0, carta_02 += 1) : 
            (carta_01 += 0, carta_02 += 0);
        break;
        default:
            printf("\nATRIBUTO INVÁLIDO!\n");
            printf("\n=========== FIM DO PROGRAMA ===========\n\n");
            return 0;
        break;
    } // Fim do switch

    // Cálculo para definir vencedor do segundo atributo escolhido (vitória: +1 ponto, derrota: +0 ponto, empate: +0 ponto)

    switch (atributo_02){ 
        case 1:
            strcpy (atributo_escolhido_02, "População");  
            (populacao_01 > populacao_02) ? (carta_01 += 1, carta_02 += 0) : 
            (populacao_01 < populacao_02) ? (carta_01 += 0, carta_02 += 1) : 
            (carta_01 += 0, carta_02 += 0);
        break;
        case 2:
            strcpy(atributo_escolhido_02, "Área");
            (area_01 > area_02) ? (carta_01 += 1, carta_02 += 0) : 
            (area_01 < area_02) ? (carta_01 += 0, carta_02 += 1) : 
            (carta_01 += 0, carta_02 += 0);
        break;
        case 3:
            strcpy(atributo_escolhido_02, "PIB");
            (pib_01 > pib_02) ? (carta_01 += 1, carta_02 += 0) : 
            (pib_01 < pib_02) ? (carta_01 += 0, carta_02 += 1) : 
            (carta_01 += 0, carta_02 += 0);
        break;
        case 4:
            strcpy(atributo_escolhido_02, "Pontos Turísticos");
            (pontos_turisticos_01 > pontos_turisticos_02) ? (carta_01 += 1, carta_02 += 0) : 
            (pontos_turisticos_01 < pontos_turisticos_02) ? (carta_01 += 0, carta_02 += 1) : 
            (carta_01 += 0, carta_02 += 0);
        break;
        case 5:
            strcpy(atributo_escolhido_02, "Densidade Populacional");
            (densidade_01 < densidade_02) ? (carta_01 += 1, carta_02 += 0) : 
            (densidade_01 > densidade_02) ? (carta_01 += 0, carta_02 += 1) : 
            (carta_01 += 0, carta_02 += 0);
        break;
        case 6:
            strcpy(atributo_escolhido_02, "Super Poder");
            (super_poder_01 > super_poder_02) ? (carta_01 += 1, carta_02 += 0) : 
            (super_poder_01 < super_poder_02) ? (carta_01 += 0, carta_02 += 1) : 
            (carta_01 += 0, carta_02 += 0);
        break;
        default:
            printf("\nATRIBUTO INVÁLIDO!\n");
            printf("\n=========== FIM DO PROGRAMA ===========\n\n");
            return 0;
        break;
    } // Fim do switch

    // Exibição do resultado da comparação entre as cartas
       
    printf("\n======================================");
    printf("\n\n-------------- RESULTADO -------------\n\n");
    printf("CARTAS: %s vs %s\n", cidade_01, cidade_02);
    printf("ATRIBUTOS ESCOLHIDOS: %s || %s\n", atributo_escolhido_01, atributo_escolhido_02);
    
    //Exibição do valor do primeiro atributo escolhido da carta 1 
    printf("     %s:\n", cidade_01);
    if (atributo_01 == 1){
        printf("           População: %lu\n",  populacao_01);
    } else if (atributo_01 == 2){
        printf("           Área: %.2f km²\n",  area_01);
    } else if (atributo_01 == 3){
        printf("           PIB: R$ %.2f\n",  pib_01);     
    } else if (atributo_01 == 4){
        printf("           Pontos Turísticos: %d\n",  pontos_turisticos_01); 
    } else if (atributo_01 == 5){
        printf("           Densidade Populacional: %.2f hab/km²\n",  densidade_01); 
    } else if (atributo_01 == 6){
        printf("           Super Poder: %.2f\n",  super_poder_01); 
    } 
    
    //Exibição do valor do segundo atributo escolhido da carta 1
    if (atributo_02 == 1){
        printf("           População: %lu\n",  populacao_01);
    } else if (atributo_02 == 2){
        printf("           Área: %.2f km²\n",  area_01);
    } else if (atributo_02 == 3){
        printf("           PIB: R$ %.2f\n",  pib_01);     
    } else if (atributo_02 == 4){
        printf("           Pontos Turísticos: %d\n",  pontos_turisticos_01); 
    } else if (atributo_02 == 5){
        printf("           Densidade Populacional: %.2f hab/km²\n",  densidade_01); 
    } else if (atributo_02 == 6){
        printf("           Super Poder: %.2f\n",  super_poder_01); 
    } else {
        printf("Atributo inválido!\n");
    }

    //Exibição do valor do primeiro atributo escolhido da carta 2
    printf("     %s:\n", cidade_02);
    if (atributo_01 == 1){
        printf("           População: %lu\n",  populacao_02);
    } else if (atributo_01 == 2){
        printf("           Área: %.2f km²\n",  area_02);
    } else if (atributo_01 == 3){
        printf("           PIB: R$ %.2f\n",  pib_02);     
    } else if (atributo_01 == 4){
        printf("           Pontos Turísticos: %d\n",  pontos_turisticos_02); 
    } else if (atributo_01 == 5){
        printf("           Densidade Populacional: %.2f hab/km²\n",  densidade_02); 
    } else if (atributo_01 == 6){
        printf("           Super Poder: %.2f\n",  super_poder_02); 
    } 
    
    //Exibição do valor do segundo atributo escolhido da carta 2
    if (atributo_02 == 1){
        printf("           População: %lu\n",  populacao_02);
    } else if (atributo_02 == 2){
        printf("           Área: %.2f km²\n",  area_02);
    } else if (atributo_02 == 3){
        printf("           PIB: R$ %.2f\n",  pib_02);     
    } else if (atributo_02 == 4){
        printf("           Pontos Turísticos: %d\n",  pontos_turisticos_02); 
    } else if (atributo_02 == 5){
        printf("           Densidade Populacional: %.2f hab/km²\n",  densidade_02); 
    } else if (atributo_02 == 6){
        printf("           Super Poder: %.2f\n",  super_poder_02); 
    } else {
        printf("Atributo inválido!\n");
    }

    //Exibição do resultado final
    printf("VENCEDOR: %s\n", carta_01 > carta_02 ? cidade_01 : (carta_01 < carta_02 ? cidade_02 : "HOUVE UM EMPATE!"));
    printf("\n======================================\n\n");
    
    printf("=========== FIM DO PROGRAMA ===========\n\n");
    return 0;
}
