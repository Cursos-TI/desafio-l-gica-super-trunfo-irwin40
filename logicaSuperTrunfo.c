#include <stdio.h>


// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas

int main() {
    // Declaração das variavéis da Carta 1 (_01) e Carta 2 (_02).

    char estado_01, estado_02;
    char codigo_01[4], cidade_01[50], codigo_02[4], cidade_02[50];
    int pontos_turisticos_01, pontos_turisticos_02;
    unsigned long int populacao_01, populacao_02;
    float area_01, pib_01, area_02, pib_02, densidade_01, densidade_02, pib_per_capita_01, pib_per_capita_02, super_poder_01, super_poder_02;
        
    // Cadastro das Carta 1

    printf("CADASTRO DA CARTA 1:\n\n");
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

    printf("\nCADASTRO DA CARTA 2:\n\n");
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
    printf("\n\n--------------------------------------\n");
    
    // Cálculo da Densidade Populacional e PIB per Capita

    densidade_01 = populacao_01 / area_01; // Densidade Populacional da Carta 1
    densidade_02 = populacao_02 / area_02; // Densidade Populacional da Carta 2
    pib_per_capita_01 = pib_01 / populacao_01; // PIB per Capita da Carta 1 
    pib_per_capita_02 = pib_02 / populacao_02; // PIB per Capita da Carta 2

    // Cálculo do Super Poder 

    super_poder_01 = ((float) populacao_01 + area_01 + pib_01 + (float) pontos_turisticos_01 + pib_per_capita_01 + 1.0/ densidade_01); // Super Poder da Carta 1
    super_poder_02 = ((float) populacao_02 + area_02 + pib_02 + (float) pontos_turisticos_02 + pib_per_capita_02 + 1.0/ densidade_02); // Super Poder da Carta 2

    // Exibição dos Dados das Cartas:
    
    printf("\n-- CARTAS CADASTRADAS --\n\n- CARTA 1 -\n\n");
    printf("Estado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: R$ %.2f\nNúmero de Pontos Turísticos: \
%d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: R$ %.2f\nSuper Poder: %.2f\n\n--------------------------------------\n\n", estado_01, codigo_01,\
 cidade_01, populacao_01, area_01, pib_01, pontos_turisticos_01, densidade_01, pib_per_capita_01, super_poder_01);
    
    printf("- CARTA 2 -\n\n");
    printf("Estado: %c\nCódigo: %s\nNome da Cidade: %s\nPopulação: %lu\nÁrea: %.2f km²\nPIB: R$ %.2f\nNúmero de Pontos Turísticos: \
%d\nDensidade Populacional: %.2f hab/km²\nPIB per Capita: R$ %.2f\nSuper Poder: %.2f\n\n--------------------------------------\n\n", estado_02, codigo_02,\
 cidade_02, populacao_02, area_02, pib_02, pontos_turisticos_02, densidade_02, pib_per_capita_02, super_poder_02);

    // Comparação do atriuto escolhido entre as duas cartas (Atributo: Super Poder) e exibição do resultado

    printf("-- COMPARAÇAO DE CARTAS (Atributo: Super Poder) --\n\n");
    printf("Carta 1 - %s: %.2f\n", cidade_01, super_poder_01);
    printf("Carta 2 - %s: %.2f\n", cidade_02, super_poder_02);
    if (super_poder_01 > super_poder_02){
        printf("Resultado = Carta 1 (%s) VENCEU!\n\n", cidade_01);}
    else if (super_poder_01 < super_poder_02){
        printf("Resultado = Carta 2 (%s) VENCEU!\n\n", cidade_02);}
    else{
        printf("Resultado = Empate!\n\n");}
    
    printf("=========== FIM DO PROGRAMA ===========\n\n");

    return 0;
}
