#include <stdio.h>
#include <string.h>


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    // Declaração das variavéis da Carta 1 (_01) e Carta 2 (_02).

    char estado_01, estado_02;
    char codigo_01[4], cidade_01[50], codigo_02[4], cidade_02[50], atributo_escolhido[50], vencedor[50];
    int pontos_turisticos_01, pontos_turisticos_02, atributo;
    unsigned long int populacao_01, populacao_02;
    float area_01, pib_01, area_02, pib_02, densidade_01, densidade_02, pib_per_capita_01, pib_per_capita_02, super_poder_01, super_poder_02;
        
    // Cadastro das Carta 1
    printf("\n-------- CADASTRO DAS CARTAS --------\n\n");
    printf("- CADASTRO DA CARTA 1:\n\n");
    printf("Preencha as informações abaixo:\n\n");
    printf("ESTADO(A a H): ");
    scanf(" %c", &estado_01);
    printf("CÓDIGO DA CIDADE(Ex. A01): ");
    scanf("%s", codigo_01);
    printf("CIDADE: ");    
    scanf(" %[^\n]s", cidade_01); // Lê até a quebra de linha, incluindo espaços
    printf("POPULAÇÃO: ");
    scanf("%lu", &populacao_01);
    printf("ÁREA(km²): ");
    scanf("%f", &area_01);	
    printf("PIB(R$): ");
    scanf("%f", &pib_01);
    printf("Nº DE PONTOS TURÍSTICOS: ");
    scanf("%d", &pontos_turisticos_01);
    printf("\n--------------------------------------\n");

    // Cadastro da Carta 2

    printf("\n- CADASTRO DA CARTA 2:\n\n");
    printf("Preencha as informações abaixo:\n\n");
    printf("ESTADO(A a H): ");
    scanf(" %c", &estado_02);
    printf("CÓDIGO DA CIDADE(Ex. A01): ");
    scanf("%s", codigo_02);
    printf("CIDADE: ");    
    scanf(" %[^\n]s", cidade_02); // Lê até a quebra de linha, incluindo espaços
    printf("POPULAÇÃO: ");
    scanf("%lu", &populacao_02);
    printf("ÁREA(km²): ");
    scanf("%f", &area_02);	
    printf("PIB(R$): ");
    scanf("%f", &pib_02);
    printf("Nº DE PONTOS TURÍSTICOS: ");
    scanf("%d", &pontos_turisticos_02);
    printf("\n======================================\n\n");
    
    // Cálculo da Densidade Populacional e PIB per Capita

    densidade_01 = populacao_01 / area_01; // Densidade Populacional da Carta 1
    densidade_02 = populacao_02 / area_02; // Densidade Populacional da Carta 2
    pib_per_capita_01 = pib_01 / populacao_01; // PIB per Capita da Carta 1 
    pib_per_capita_02 = pib_02 / populacao_02; // PIB per Capita da Carta 2

    // Cálculo do Super Poder 

    super_poder_01 = ((float) populacao_01 + area_01 + pib_01 + (float) pontos_turisticos_01 + pib_per_capita_01 + 1.0/ densidade_01); // Super Poder da Carta 1
    super_poder_02 = ((float) populacao_02 + area_02 + pib_02 + (float) pontos_turisticos_02 + pib_per_capita_02 + 1.0/ densidade_02); // Super Poder da Carta 2

    // Comparação do atriuto escolhido entre as duas cartas 

    printf("-------- COMPARAÇAO DE CARTAS --------\n\n");
    printf("- ATRIBUTOS:\n\n");
    printf("1 - Exibir as informações das cartas\n2 - População\n3 - Área\n4 - PIB\n5 - Pontos turísticos\n6 - Densidade demográfica\n7 - Super poder\n\
--------------------------------------\n\nIndique o número do atributo: "); 
    scanf("%d", &atributo);

    switch (atributo){ //No switch os casos de 2 ao 7 irão alimentar a variável vencedor e atributo_escolhido que serão exibidos ao final em RESULTADO.
        case 1:
            printf("\n======================================");
            printf("\n-- CARTAS CADASTRADAS --\n\n- CARTA 1 -\n\n");
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
                
            printf("- CARTA 2 -\n\n");
            printf("Estado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: R$ %.2f\nNúmero de Pontos Turísticos: \
            %d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: R$ %.2f\nSuper Poder: %.2f\n\n======================================\n\n", estado_02, codigo_02,\
            cidade_02, populacao_02, area_02, pib_02, pontos_turisticos_02, densidade_02, pib_per_capita_02, super_poder_02);
        break;
        case 2:
            strcpy (atributo_escolhido, "População");// Atribui o nome do atributo escolhido à variável atributo_escolhido     
            if (populacao_01 > populacao_02){
                strcpy(vencedor, cidade_01);// Atribui o nome da cidade vencedora à variável vencedor
            }else if (populacao_01 < populacao_02){
                strcpy(vencedor, cidade_02);// Atribui o nome da cidade vencedora à variável vencedor
            } else {
                strcpy(vencedor, "Empate");// Atribui o "Empate" à variável vencedor
            }
        break;
        case 3:
            strcpy (atributo_escolhido, "Área");
            if (area_01 > area_02){    
                strcpy(vencedor, cidade_01);
            }else if (area_01 < area_02){
                strcpy(vencedor, cidade_02);
            }else {
                strcpy(vencedor, "HOUVE UM EMPATE");}
        break; 
        case 4:
            strcpy (atributo_escolhido, "PIB");
            if (pib_01 > pib_02){
                strcpy(vencedor, cidade_01);
            }else if (pib_01 < pib_02){
                strcpy(vencedor, cidade_02);
            }else {
                strcpy(vencedor, "HOUVE UM EMPATE");}
        break;
        case 5:
            strcpy (atributo_escolhido, "Pontos Turísticos");
            if (pontos_turisticos_01 > pontos_turisticos_02){
                strcpy(vencedor, cidade_01);
            }else if (pontos_turisticos_01 < pontos_turisticos_02){
                strcpy(vencedor, cidade_02);
            }else {
                strcpy(vencedor, "HOUVE UM EMPATE");}
        break;
        case 6:
            strcpy (atributo_escolhido, "Densidade Populacional");
            if (densidade_01 < densidade_02){
                strcpy(vencedor, cidade_01);
            }else if (densidade_01 > densidade_02){
                strcpy(vencedor, cidade_02);
            }else {
                strcpy(vencedor, "HOUVE UM EMPATE");}
        break;
        case 7:
            strcpy (atributo_escolhido, "Super Poder");
            if (super_poder_01 > super_poder_02){
            strcpy(vencedor, cidade_01);
            }else if (super_poder_01 < super_poder_02){
            strcpy(vencedor, cidade_02);
            }else {
            strcpy(vencedor, "HOUVE UM EMPATE");}
        break;
        default:
            printf("Atributo inválido!\n");
        break;
    } // Fim do switch

    
// Exibição do resultado da comparação entre as cartas
    if (atributo != 1){   
        printf("\n======================================");
        printf("\n\n-------------- RESULTADO -------------\n\n");
        printf("CARTAS: %s vs %s\n", cidade_01, cidade_02);
        printf("ATRIBUTO ESCOLHIDO: %s\n", atributo_escolhido);
        if (atributo == 2){
            printf("     População (%s): %lu\n     População (%s): %lu\n", cidade_01, populacao_01, cidade_02, populacao_02);
        } else if (atributo == 3){
            printf("     Área (%s): %.2f km²\n     Área (%s): %.2f km²\n", cidade_01, area_01, cidade_02, area_02);
        } else if (atributo == 4){
            printf("     PIB (%s): R$ %.2f\n     PIB (%s): R$ %.2f\n", cidade_01, pib_01, cidade_02, pib_02);     
        } else if (atributo == 5){
            printf("     Pontos Turísticos (%s): %d\n     Pontos Turísticos (%s): %d\n", cidade_01, pontos_turisticos_01, cidade_02, pontos_turisticos_02); 
        } else if (atributo == 6){
            printf("     Densidade Populacional (%s): %.2f hab/km²\n     Densidade Populacional (%s): %.2f hab/km²\n", cidade_01, densidade_01, cidade_02, densidade_02); 
        } else if (atributo == 7){
            printf("     Super Poder (%s): %.2f\n     Super Poder (%s): %.2f\n", cidade_01, super_poder_01, cidade_02, super_poder_02); 
        } else {
            printf("Atributo inválido!\n");
        } printf("VENCEDOR: %s\n", vencedor);
        printf("\n======================================\n\n");
    }
    
    printf("=========== FIM DO PROGRAMA ===========\n\n");

    return 0;
}

