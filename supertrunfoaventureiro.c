#include <stdio.h>

int main () {


    //Identificacao
    char estado1, estado2; 
    char codigo1[4], codigo2[4];
    char nome1[20], nome2[20];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    float capita1, capita2;
    float densidade1, densidade2;
    int turismo1, turismo2;

    
    //Coletando dados da carta 1
    printf("Insira os dados da Carta 1\n");
    printf("Estado:");
    scanf(" %c", &estado1);
    printf("Codigo:");
    scanf("%s", codigo1);
    printf("Nome:");
    scanf("%s", nome1);
    printf("Populacao:");
    scanf("%i", &populacao1);
    printf("Area em KM²:");
    scanf("%f", &area1);
    printf("Pib:");
    scanf("%f", &pib1);
    printf("Pontos Turisticos:");
    scanf("%i", &turismo1);


    printf("\n");

    //Coletando dados da carta 2
    printf("Insira os dados da Carta 2\n");
    printf("Estado:");
    scanf(" %c", &estado2);
    printf("Codigo:");
    scanf("%s", codigo2);
    printf("Nome:");
    scanf("%s", nome2);
    printf("Populacao:");
    scanf("%i", &populacao2);
    printf("Area em KM²:");
    scanf("%f", &area2);
    printf("Pib:");
    scanf("%f", &pib2);
    printf("Pontos Turisticos:");
    scanf("%i", &turismo2);


     // Calculando densidade e PIB per capita

    densidade1 = populacao1 / area1;
    capita1 = pib1 / populacao1;
 
    densidade2 = populacao2 / area2;
    capita2 = pib2 / populacao2;


    printf("\n");

    //Dados da carta 1
    printf("Carta 1:\n");
    printf("\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("Populacao: %i habitantes\n", populacao1);
    printf("Area: %.2f KM²\n", area1);
    printf("Densidade populacional: %.2f habitantes/KM²\n", densidade1);
    printf("PIB: %.2f reais\n", pib1);
    printf("PIB per Capita: %.2f de Reais\n", capita1);
    printf("Pontos Turisticos: %i\n", turismo1);


    printf("\n");


    //Dados da carta 2
    printf("Carta 2:\n");
    printf("\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("Populacao: %i habitantes\n", populacao2);
    printf("Area: %.2f KM²\n", area2);
    printf("Densidade populacional: %.2f habitantes/KM²\n", densidade2);
    printf("PIB: %.2f reais\n", pib2);
    printf("PIB per Capita: %.2f de reais\n", capita2);
    printf("Pontos Turisticos: %i\n", turismo2);


    

   return 0;





} 