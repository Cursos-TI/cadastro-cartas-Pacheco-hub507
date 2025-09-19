#include <stdio.h>
#include <string.h>

int main(){
    // Variáveis para a primeira carta
    int pontos_turisticos1, populacao1;
    char codigo1[4], cidade1[20], estado1[20]; 
    float area1, pib1,pibpercapita1, denspopul1;  

       // Variáveis para a segunda carta carta
    int pontos_turisticos2, populacao2;
    char codigo2[4], cidade2[20], estado2[20]; 
    float area2, pib2,pibpercapita2, denspopul2;  
    

    // ---Carta 1---
    printf("---Carta 1---\n");

    // Escolha do Estado
    printf("Digite uma letra para o Estado entre 'A' a 'H': \n");
    scanf("%s", estado1);
    // Escolha do código. Ex.: A01
    printf("Digite um código com a letra do Estado e um número de '01' a '04': \n");
    scanf("%s",codigo1);
    // Escolha do nome da cidade
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade1);
    // Número populacional
    printf("Digite o número populacional: \n");
    scanf("%d", &populacao1);
    // Área territorial
    printf("Digite a áre em km²: \n");
    scanf("%f", &area1);
    // Valor do PIB
    printf("Digite o PIB: \n");
    scanf("%f", &pib1);
    // Quantidade de pontos turísticos
    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos1);

    // Calculando a Densidade Populacional
    denspopul1 = populacao1 / area1;

    // Calculalando o Pib per Capita
    pibpercapita1 = pib1 / populacao1;
    
    printf("\n");    
    
     // ---Carta 2---
    printf("---Carta 2---\n");

    // Escolha do Estado
    printf("Digite uma letra para o Estado entre 'A' a 'H': \n");
    scanf("%s", estado2);
    // Escolha do código. Ex.: A01
    printf("Digite um código com a letra do Estado e um número de '01' a '04': \n");
    scanf("%s",codigo2);
    // Escolha do nome da cidade
    printf("Digite o nome da cidade: \n");
    scanf("%s", cidade2);
    // Número populacional
    printf("Digite o número populacional: \n");
    scanf("%d", &populacao2);
    // Área territorial
    printf("Digite a áre em km²: \n");
    scanf("%f", &area2);
    // Valor do PIB
    printf("Digite o PIB: \n");
    scanf("%f", &pib2);
    // Quantidade de pontos turísticos
    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pontos_turisticos2); 

    // Calculando a Densidade Populacional
    denspopul2 = populacao2 / area2;

    // Calculalando o Pib per Capita
    pibpercapita2 = pib2 / populacao2;
    
    printf("\n");

    // Exibir Carta 1
    printf("Carta 1: \n");
    printf("Estado: %s\n" "Código: %s\n" "Nome da Cidade: %s\n", estado1, codigo1, cidade1);
    printf("População: %d\n" "Área: %.2f km²\n" "PIB: %.2f bilhões de reais\n", populacao1, area1, pib1);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos1);
    printf("Densidade Populacional: %.2f hab/km²\n", denspopul1);
    printf("PIB per Capita: %.2f reais\n", pibpercapita1);  

    printf("\n");
    
    // Exibir Carta 2
    printf("Carta 2: \n");
    printf("Estado: %s\n" "Código: %s\n" "Nome da Cidade: %s\n", estado2, codigo2, cidade2);
    printf("População: %d\n" "Área: %.2fkm²\n" "PIB: %.2f bilhões de reais\n", populacao2, area2, pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade Populacional: %.2f hab/km²\n", denspopul2);
    printf("PIB per Capita: %.2f reais\n", pibpercapita2);      

    return 0;
    
}
