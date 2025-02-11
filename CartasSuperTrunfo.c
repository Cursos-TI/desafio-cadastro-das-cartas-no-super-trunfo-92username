#include <stdio.h>
#include <string.h> // inclui essa biblioteca para o uso de strcspn

int main() {
    int codigoCidade;
    char nomeCidade[100];
    int populacao;
    int pontosTuristicos;
    float area;
    double pib;

    // Digitar o código da cidade
    printf("Digite o codigo da cidade (ex: 1): ");
    scanf("%d", &codigoCidade);
    getchar(); // Consumir o '\n' após a leitura do código

    // Digitar o nome da cidade (usando fgets para permitir espaços)
    printf("Digite o nome da Cidade: ");
    fgets(nomeCidade, sizeof(nomeCidade), stdin);  // Lê a linha inteira, incluindo espaços
    nomeCidade[strcspn(nomeCidade, "\n")] = 0;  // Remove o '\n' no final 

    // Digitar a população da cidade
    printf("Digite a população da cidade: ");
    scanf("%d", &populacao);

    // Digitar os pontos turísticos da cidade
    printf("Digite o número de pontos turísticos da cidade: ");
    scanf("%d", &pontosTuristicos);

    // Digitar a área da cidade
    printf("Digite a area da cidade: ");
    scanf("%f", &area);

    // Digitar o PIB da cidade
    printf("Digite o PIB da cidade: ");
    scanf("%lf", &pib);

    // Exibir os dados coletados
    printf("Cidade: %s\n", nomeCidade);
    printf("Código: %d\n", codigoCidade);
    printf("População: %d\n", populacao);
    printf("Pontos Turísticos: %d\n", pontosTuristicos);
    printf("Área: %.2f\n", area);
    printf("PIB: %.2lf\n", pib);

    return 0;
}

// usei o getchar() e o strcspn para evitar o seguintes erros:
// em alguns casos, ao digitar cidade com espaços (ex.: São Paulo), 
// o programa encerrava abruptamente e exibia os dados subsequentes
// zerados. foi usado o getchar para remover eventuais espaços ao digitar os dados, e strcspn para ler nomes de cidades compostos.