#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas (Nível Novato)

int main() {
    // Variáveis da carta1.
    char estado;
    char codigoDaCarta[2];
    char nomeDaCidade[50];
    // Inicializando as variáveis abaixo para evitar erro de lixo na memoria
    int populacao = 0; 
    float area = 0; 
    float pib = 0; 
    int pontosTuristicos = 0; 

    // Cadastro da Carta1:
    printf("Digite o Estado da carta entre A e H: %c", estado);
    scanf("%c", &estado);
    
    printf("Digite o Codigo da carta entre 1 e 4: %s", codigoDaCarta);
    scanf("%s", codigoDaCarta);
    
    printf("Digite o Nome da cidade: %s", nomeDaCidade);
    scanf("%s", nomeDaCidade);

    printf("Digite a população da cidade sem ponto e sem virgula: %d", populacao);
    scanf("%d", &populacao);

    printf("Digite area da cidade em km²: %f", area);
    scanf("%f", &area);

    printf("Digite o PIB da cidade em bilhões de reais: %f", pib);
    scanf("%f", &pib);

    printf("Digite o número de pontos turísticos da cidade: %d", pontosTuristicos);
    scanf("%d", &pontosTuristicos);
    
    // Variáveis da carta2.
    char estado2;
    char codigoDaCarta2[2];
    char nomeDaCidade2[50];
    // Inicializando as variáveis abaixo para evitar erro de lixo na memoria
    int populacao2 = 0;
    float area2 = 0;
    float pib2 = 0;
    int pontosTuristicos2 = 0;
    
    // Cadastro da Carta2:
    printf("Digite o Estado da carta2 entre A e H: %c", estado2);
    scanf(" %c", &estado2); // Adicionado um espaço antes de "%c" para ler o espaço em branco antes de ler a variável do estado2
    
    printf("Digite o Codigo da carta entre 1 e 4: %s", codigoDaCarta2);
    scanf("%s", codigoDaCarta2);
    
    printf("Digite o Nome da cidade: %s", nomeDaCidade2);
    scanf("%s", nomeDaCidade2);
    
    printf("Digite a população da cidade sem ponto e sem virgula: %d", populacao2);
    scanf("%d", &populacao2);
    
    printf("Digite area da cidade em km²: %f", area2);
    scanf("%f", &area2);
    
    printf("Digite o PIB da cidade em bilhões de reais: %f", pib2);
    scanf("%f", &pib2);
    
    printf("Digite o número de pontos turísticos da cidade: %d", pontosTuristicos2);
    scanf("%d", &pontosTuristicos2);
    
    // Exibição dos Dados da Carta 1:
    printf("\nCarta1:\n Estado: %c\n Código: %c0%s\n Nome da cidade: %s\n População: %d\n Área: %.2f km²\n PIB: %.2f Bilhões de reais\n Número de Pontos Turísticos: %d\n", estado, estado, codigoDaCarta, nomeDaCidade, populacao, area, pib, pontosTuristicos);
    
    // Exibição dos Dados da Carta 2:
    printf("\nCarta2:\n Estado: %c\n Código: %c0%s\n Nome da cidade: %s\n População: %d\n Área: %.2f km²\n PIB: %.2f Bilhões de reais\n Número de Pontos Turísticos: %d\n", estado2, estado2, codigoDaCarta2, nomeDaCidade2, populacao2, area2, pib2, pontosTuristicos2);
    
    return 0;
}
