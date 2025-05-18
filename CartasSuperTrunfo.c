#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

int main() {
    // DECLARACÃO DE VARIÁVEIS
    char estado1,estado2;
    char codigo1[3],codigo2[3];
    char nomeCidade1[50],nomeCidade2[50];
    int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int pontoTuristico1, pontoTuristico2;
    float Denspop1,Denspop2;
    float PIBpcap1,PIBpcap2;

  // INSERINDO INFORMAÇÕES DA CARTA 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado digite uma letra de (A-H): \n");
    scanf(" %c", &estado1);
    printf("Codigo da Carta (ex: 01 a 04): \n");
    scanf(" %s", codigo1);
    printf("Nome da Cidade: \n");
    getchar(); // Limpa o buffer do teclado
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    printf("Populacao: \n");
    scanf(" %d", &populacao1);
    printf("Area (em km2): \n");
    scanf(" %f", &area1);
    printf("PIB (em bilhoes de reais): \n");
    scanf(" %f", &PIB1);
    printf("Numero de Pontos Turisticos: \n");
    scanf(" %d", &pontoTuristico1);
    PIBpcap1 = (PIB1*1000000000)/populacao1;
    Denspop1 = populacao1/area1;

  // INSERINDO INFORMAÇÕES DA CARTA 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (A-H): \n");
    scanf(" %c", &estado2);
    printf("Codigo da Carta (ex: 01 a 04): \n");
    scanf(" %s", codigo2);
    printf("Nome da Cidade: \n");
    getchar(); // Limpa o buffer do teclado
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    printf("Populacao: \n");
    scanf(" %d", &populacao2);
    printf("Area (em km2): \n");
    scanf(" %f", &area2);
    printf("PIB (em bilhoes de reais): \n");
    scanf(" %f", &PIB2);
    printf("Numero de Pontos Turisticos: \n");
    scanf(" %d", &pontoTuristico2);
    PIBpcap2 = (PIB2 * 1000000000)/populacao2;
    Denspop2 = populacao2/area2;  
  
     //IMPRIMINDO INFORMAÇOES DA CARTA 1
     
     printf("\nCarta 1:\n");
     printf("Estado: %c\n", estado1);
     printf("Codigo: %c%s\n",estado1,codigo1);
     printf("Nome da Cidade: %s", nomeCidade1);
     printf("Populacao: %d\n", populacao1);
     printf("Area: %.2f km2\n", area1);
     printf("PIB: %.2f bilhOes de reais\n", PIB1);
     printf("Numero de Pontos Turisticos: %d\n", pontoTuristico1);
     printf("Densidade populacional: %.2f hab/km2\n",Denspop1);
     printf("PIB per Capita: %.2f reais",PIBpcap1);
    
     //IMPRIMINDO INFORMAÇOES DA CARTA 2
    
     printf("\nCarta 2:\n");
     printf("Estado: %c\n", estado2);
     printf("Codigo: %c%s\n", estado2,codigo2);
     printf("Nome da Cidade: %s", nomeCidade2);
     printf("Populacao: %d\n", populacao2);
     printf("Area: %.2f km2\n", area2);
     printf("PIB: %.2f bilhoes de reais\n", PIB2);
     printf("Numero de Pontos Turisticos: %d\n", pontoTuristico2);
     printf("Densidade populacional: %.2f hab/km2\n",Denspop2);
     printf("PIB per Capita: %.2f reais",PIBpcap2);
    return 0;
}
