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
    float super1, super2;
    int jogo;
    
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
    printf("Pib em bilhoes:");
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
    printf("Pib em bilhoes:");
    scanf("%f", &pib2);
    printf("Pontos Turisticos:");
    scanf("%i", &turismo2);


     // Calculando densidade e PIB per capita

    densidade1 = populacao1 / area1;
    capita1 = (pib1 * 1000000000) / populacao1;
 
    densidade2 = populacao2 / area2;
    capita2 = (pib2 * 1000000000) / populacao2;


    printf("\nDados das cartas 1 e 2:\n");
    //Dados da carta 1
    printf("\nCarta 1:\n");
    printf("\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome: %s\n", nome1);
    printf("Populacao: %i habitantes\n", populacao1);
    printf("Area: %.2f KM²\n", area1);
    printf("Densidade populacional: %.2f habitantes/KM²\n", densidade1);
    printf("PIB: %.2f bilhoes de reais\n", pib1);
    printf("PIB per Capita: %.2f de Reais\n", capita1);
    printf("Pontos Turisticos: %i\n", turismo1);

    //Dados da carta 2
    printf("\nCarta 2:\n");
    printf("\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome: %s\n", nome2);
    printf("Populacao: %i habitantes\n", populacao2);
    printf("Area: %.2f KM²\n", area2);
    printf("Densidade populacional: %.2f habitantes/KM²\n", densidade2);
    printf("PIB: %.2f bilhoes de reais\n", pib2);
    printf("PIB per Capita: %.2f de reais\n", capita2);
    printf("Pontos Turisticos: %i\n", turismo2);

    //Calculo do super 

    super1 = (float) populacao1 + area1 + pib1 + turismo1 + (capita1 / 1000) - densidade1;
    super2 = (float) populacao2 + area2 + pib2 + turismo2 + (capita2 / 1000) - densidade2;
    
    //Switch para escolha das cartas 
     
    printf("\n-----DUELO ENTRE AS CARTAS-----\n");
    printf("\n1-) Populacao.\n");
    printf("2-) Area.\n");
    printf("3-) PIB.\n");
    printf("4-) Pontos turisticos.\n");
    printf("5-) Densidade demografica.\n");
    printf("Escolha o que deseja comparar: ");
    scanf("%d", &jogo);

    printf("\n----------------VENCEDOR ENTRE AS CARTAS----------------\n");
    
    switch (jogo)
    {
    case 1:
      printf("\nO atributo escolhido para comparacao foi a populacao.\n");
      printf("\n%s CONTRA %s:\n", nome1, nome2);
      printf("CARTA 1 - %s: %i habitantes\n", nome1, populacao1);
      printf("CARTA 2 - %s: %i habitantes\n", nome2, populacao2);     
       if (populacao1 > populacao2) 
         printf("\nA carta 1 - %s ganhou !!!\n", nome1);
        else if (populacao1 < populacao2) {
           printf("\nA carta 2 - %s ganhou !!!\n", nome2);
       } else {
         printf("\nAs cartas empataram");
       }
      break;
    case 2:
      printf("\nO atributo escolhido para comparacao foi a area.\n");
      printf("\n%s CONTRA %s:\n", nome1, nome2);
      printf("CARTA 1 - %s: %.2f KM²\n", nome1, area1);
      printf("CARTA 2 - %s: %.2f KM²\n", nome2, area2);     
       if (area1 > area2) 
         printf("\nA carta 1 - %s ganhou !!!\n", nome1);
        else if (area1 < area2) {
           printf("\nA carta 2 - %s ganhou !!!\n", nome2);
       } else {
         printf("\nAs cartas empataram");
       }
      break;
    case 3:
      printf("\nO atributo escolhido para comparacao foi o PIB.\n");
      printf("\n%s CONTRA %s:\n", nome1, nome2);
      printf("CARTA 1 - %s: %.2f bilhoes de reais\n", nome1, pib1);
      printf("CARTA 2 - %s: %.2f bilhoes de reais\n", nome2, pib2);     
       if (pib1 > pib2) 
         printf("\nA carta 1 - %s ganhou !!!\n", nome1);
        else if (pib1 < pib2) {
           printf("\nA carta 2 - %s ganhou !!!\n", nome2);
       } else {
         printf("\nAs cartas empataram");
       }
      break;
    case 4:
      printf("\nO atributo escolhido para comparacao foi os pontos turisticos.\n");
      printf("\n%s CONTRA %s:\n", nome1, nome2);
      printf("CARTA 1 - %s: %i pontos turisticos\n", nome1, turismo1);
      printf("CARTA 2 - %s: %i pontos turisticos\n", nome2, turismo2);     
       if (turismo1 > turismo2) 
         printf("\nA carta 1 - %s ganhou !!!\n", nome1);
        else if (turismo1 < turismo2) {
           printf("\nA carta 2 - %s ganhou !!!\n", nome2);
       } else {
         printf("\nAs cartas empataram");
       }
      break;
    case 5:
      printf("\nO atributo escolhido para comparacao foi a densidade populacional.\n");
      printf("\n%s CONTRA %s:\n", nome1, nome2);
      printf("CARTA 1 - %s: %.2f habitantes\n", nome1, densidade1);
      printf("CARTA 2 - %s: %.2f habitantes\n", nome2, densidade2);     
       if (densidade1 < densidade2) 
         printf("\nA carta 1 - %s ganhou !!!\n", nome1);
        else if (densidade1 > densidade2) {
           printf("\nA carta 2 - %s ganhou !!!\n", nome2);
       } else {
         printf("\nAs cartas empataram");
       }
      break;
    default:
    printf("Opcao invalida.");
      break;
    }
    
    
    
    
    
    
    
    
    
    
    
    
    return 0;





} 