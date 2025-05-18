#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.

#include <stdio.h>

int main() {
    // DECLARANDO VARIÁVEIS
    char estado1, estado2;
    char codigo1[3], codigo2[3];
    char nomeCidade1[50], nomeCidade2[50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float PIB1, PIB2;
    int pontoTuristico1, pontoTuristico2;
    float densPop1, densPop2;
    float PIBpcap1, PIBpcap2;
    float superPoder1, superPoder2;

    // INSERINDO INFORMAÇÕES DA CARTA 1
    printf("Digite os dados da Carta 1:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado1);
    printf("Codigo da Carta (ex: 01 a 04): ");
    scanf(" %s", codigo1);
    printf("Nome da Cidade: ");
    getchar(); // limpa buffer
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    printf("Populacao: ");
    scanf("%lu", &populacao1);
    printf("Area (em km2): ");
    scanf("%f", &area1);
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &PIB1);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontoTuristico1);

    // CALCULANDO PIB PER CAPITA, DENSIDADE POP E SUPER PODER CARTA 1
    PIBpcap1 = (PIB1 * 1000000000) / populacao1;
    densPop1 = populacao1 / area1;
    superPoder1 = populacao1 + area1 + PIB1 + pontoTuristico1 + PIBpcap1 + (1.0 / densPop1);

    // INSERINDO INFORMAÇÕES DA CARTA 2
    printf("\nDigite os dados da Carta 2:\n");
    printf("Estado (A-H): ");
    scanf(" %c", &estado2);
    printf("Codigo da Carta (ex: 01 a 04): ");
    scanf(" %s", codigo2);
    printf("Nome da Cidade: ");
    getchar(); // limpa buffer
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    printf("Populacao: ");
    scanf("%lu", &populacao2);
    printf("Area (em km2): ");
    scanf("%f", &area2);
    printf("PIB (em bilhoes de reais): ");
    scanf("%f", &PIB2);
    printf("Numero de Pontos Turisticos: ");
    scanf("%d", &pontoTuristico2);

    // CALCULANDO PIB PER CAPITA, DENSIDADE POP E SUPER PODER CARTA  2
    PIBpcap2 = (PIB2 * 1000000000) / populacao2;
    densPop2 = populacao2 / area2;
    superPoder2 = populacao2 + area2 + PIB2 + pontoTuristico2 + PIBpcap2 + (1.0 / densPop2);

    // EXIBINDO AS INFORMAÇÕES DAS CARTAS
    printf("\nCarta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Codigo: %c%s\n", estado1, codigo1);
    printf("Nome da Cidade: %s", nomeCidade1);
    printf("Populacao: %lu\n", populacao1);
    printf("Area: %.2f km2\n", area1);
    printf("PIB: %.2f bilhoes de reais\n", PIB1);
    printf("Pontos Turisticos: %d\n", pontoTuristico1);
    printf("Densidade Populacional: %.2f hab/km2\n", densPop1);
    printf("PIB per Capita: %.2f reais\n", PIBpcap1);
    printf("Super Poder: %.2f\n", superPoder1);

    printf("\nCarta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Codigo: %c%s\n", estado2, codigo2);
    printf("Nome da Cidade: %s", nomeCidade2);
    printf("Populacao: %lu\n", populacao2);
    printf("Area: %.2f km2\n", area2);
    printf("PIB: %.2f bilhoes de reais\n", PIB2);
    printf("Pontos Turisticos: %d\n", pontoTuristico2);
    printf("Densidade Populacional: %.2f hab/km2\n", densPop2);
    printf("PIB per Capita: %.2f reais\n", PIBpcap2);
    printf("Super Poder: %.2f\n", superPoder2);

    // BATALHA DE CARTAS
    printf("\nComparação de Cartas:\n");
    printf("Populacao: Carta 1 venceu (%d)\n", populacao1 > populacao2);
    printf("Area: Carta 1 venceu (%d)\n", area1 > area2);
    printf("PIB: Carta 1 venceu (%d)\n", PIB1 > PIB2);
    printf("Pontos Turisticos: Carta 1 venceu (%d)\n", pontoTuristico1 > pontoTuristico2);
    printf("Densidade Populacional: Carta 1 venceu (%d)\n", densPop1 < densPop2); // menor vence
    printf("PIB per Capita: Carta 1 venceu (%d)\n", PIBpcap1 > PIBpcap2);
    printf("Super Poder: Carta 1 venceu (%d)\n", superPoder1 > superPoder2);

    return 0;
}

