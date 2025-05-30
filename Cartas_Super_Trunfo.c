#include <stdio.h>
#include <string.h>

int main() {
    // Variáveis para a primeira carta
    char estado1;                  // Estado: letra de 'A' a 'H'
    char codigo1[5];               // Código da carta: ex "A01" (3 caracteres + '\0')
    char nomeCidade1[50];          // Nome da cidade (até 49 caracteres + '\0')
    int populacao1;                // População da cidade
    float area1;                   // Área em km²
    float pib1;                    // PIB em bilhões de reais
    int pontosTuristicos1;         // Número de pontos turísticos

    // Variáveis para a segunda carta
    char estado2;                  // Estado: letra de 'A' a 'H'
    char codigo2[5];               // Código da carta: ex "B02"
    char nomeCidade2[50];          // Nome da cidade
    int populacao2;                // População da cidade
    float area2;                   // Área em km²
    float pib2;                    // PIB em bilhões de reais
    int pontosTuristicos2;         // Número de pontos turísticos

    // *******************************
    // Leitura dos dados da Carta 1
    // *******************************

    printf("---- Cadastro da Carta 1 ----\n");

    // Leitura do estado (letra de 'A' a 'H')
    printf("Digite o estado da carta 1 (uma letra de 'A' a 'H'): ");
    // O espaço antes de %c faz com que scanf ignore quaisquer espaços em branco remanescentes
    scanf(" %c", &estado1);

    // Leitura do código da carta (formato: letra + dois dígitos, ex: A01)
    printf("Digite o código da carta 1 (ex: A01): ");
    // %s lê até o próximo espaço em branco; cabe em 4 caracteres (por ex: "A01" + '\0')
    scanf("%s", codigo1);

    // Consumir o caractere de nova linha que ficou no buffer após o scanf de código
    getchar();

    // Leitura do nome da cidade (pode conter espaços)
    printf("Digite o nome da cidade da carta 1: ");
    // fgets lê a linha inteira (até '\n') ou até 49 caracteres
    fgets(nomeCidade1, sizeof(nomeCidade1), stdin);
    // Retirar o '\n' final que o fgets armazena, se presente
    nomeCidade1[strcspn(nomeCidade1, "\n")] = '\0';

    // Leitura da população (inteiro)
    printf("Digite a população da cidade da carta 1: ");
    scanf("%d", &populacao1);

    // Leitura da área em km² (float)
    printf("Digite a área (em km²) da cidade da carta 1: ");
    scanf("%f", &area1);

    // Leitura do PIB em bilhões de reais (float)
    printf("Digite o PIB (em bilhões de reais) da cidade da carta 1: ");
    scanf("%f", &pib1);

    // Leitura do número de pontos turísticos (inteiro)
    printf("Digite o número de pontos turísticos da cidade da carta 1: ");
    scanf("%d", &pontosTuristicos1);

    // *******************************
    // Leitura dos dados da Carta 2
    // *******************************

    // Para evitar problemas de leitura com fgets no próximo bloco, 
    // podemos usar scanf com espaço em branco para pular qualquer '\n' remanescente
    // antes de ler o próximo caractere de estado.
    printf("\n---- Cadastro da Carta 2 ----\n");

    // Leitura do estado (letra de 'A' a 'H')
    printf("Digite o estado da carta 2 (uma letra de 'A' a 'H'): ");
    scanf(" %c", &estado2);

    // Leitura do código da carta (ex: B02)
    printf("Digite o código da carta 2 (ex: B02): ");
    scanf("%s", codigo2);

    // Consumir o '\n' que ficou no buffer após a leitura do código
    getchar();

    // Leitura do nome da cidade (pode conter espaços)
    printf("Digite o nome da cidade da carta 2: ");
    fgets(nomeCidade2, sizeof(nomeCidade2), stdin);
    nomeCidade2[strcspn(nomeCidade2, "\n")] = '\0';

    // Leitura da população (inteiro)
    printf("Digite a população da cidade da carta 2: ");
    scanf("%d", &populacao2);

    // Leitura da área em km² (float)
    printf("Digite a área (em km²) da cidade da carta 2: ");
    scanf("%f", &area2);

    // Leitura do PIB em bilhões de reais (float)
    printf("Digite o PIB (em bilhões de reais) da cidade da carta 2: ");
    scanf("%f", &pib2);

    // Leitura do número de pontos turísticos (inteiro)
    printf("Digite o número de pontos turísticos da cidade da carta 2: ");
    scanf("%d", &pontosTuristicos2);

    // *******************************
    // Exibição dos dados cadastrados
    // *******************************

    printf("\n===== Dados das Cartas =====\n\n");

    // Exibição da Carta 1
    printf("Carta 1:\n");
    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", nomeCidade1);
    printf("População: %d\n", populacao1);
    printf("Área: %.2f km²\n", area1);
    printf("PIB: %.2f bilhões de reais\n", pib1);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos1);

    printf("\n"); // Linha em branco para separar as cartas

    // Exibição da Carta 2
    printf("Carta 2:\n");
    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", nomeCidade2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2f bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontosTuristicos2);

    return 0;
}
