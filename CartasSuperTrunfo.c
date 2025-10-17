#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das cartas
//NÍVEL Aventureiro

int main() {
  // Área para definição das variáveis para armazenar as propriedades das cidades
  char estado1, estado2;
  char codigo1[4], codigo2[4];
  char cidade1[15], cidade2[15];
  int populacao1, populacao2;
  float area1, area2;
  float pib1, pib2;
  int pontosTuristicos1, pontosTuristicos2;
  float densidadePopulacional1, densidadePopulacional2;
  float pibPerCapita1, pibPerCapita2;
  

  // Área para entrada de dados
  printf("Digite o Estado da primeira carta:\n");
  scanf(" %c", &estado1);
  printf("Digite o código da primeira carta:\n");
  scanf("%s", codigo1);
  printf("Digite a cidade da primeira carta:\n");
  scanf("%s", cidade1);
  printf("Digite a população da primeira cidade: \n");
  scanf("%d", &populacao1);
  printf("Digite a area da primeira cidade: \n");
  scanf("%f", &area1);
  printf("Digite o PIB da primeira cidade: \n");
  scanf("%f", &pib1);
  printf("Digite a quantidade de pontos turisticos da primeira cidade: \n");
  scanf("%d", &pontosTuristicos1);



  printf("Digite o Estado da segunda carta:\n");
  scanf(" %c", &estado2); 
  printf("Digite o código da segunda carta:\n");
  scanf("%s", codigo2);
  printf("Digite a cidade da segunda carta:\n");
  scanf("%s", cidade2);
  printf("Digite a população da segunda cidade: \n");
  scanf("%d", &populacao2);
  printf("Digite a area da segunda cidade: \n");
  scanf("%f", &area2);
  printf("Digite o PIB da segunda cidade: \n");
  scanf("%f", &pib2);
  printf("Digite a quantidade de pontos turisticos da segunda cidade: \n");
  scanf("%d", &pontosTuristicos2);

  //Calcula a Densidade Populacional
  densidadePopulacional1 = populacao1 / area1;
  densidadePopulacional2 = populacao2 / area2;
  //Calcula o PIB Per Capita
  pibPerCapita1 = pib1 / populacao1;
  pibPerCapita2 = pib2 / populacao2;

  // Área para exibição dos dados da cidade
  printf("\nCarta 1\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %d\n", populacao1);
  printf("Área: %.2f\n", area1);
  printf("PIB: %.2f\n", pib1);
  printf("Pontos Turísticos: %d\n", pontosTuristicos1);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional1);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita1);

  printf("\nCarta 2\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %d\n", populacao2);
  printf("Área: %.2f\n", area2);
  printf("PIB: %.2f\n", pib2);
  printf("Pontos Turísticos: %d\n", pontosTuristicos2);
  printf("Densidade Populacional: %.2f hab/km²\n", densidadePopulacional2);
  printf("PIB per Capita: %.2f reais\n", pibPerCapita2);

return 0;
} 
