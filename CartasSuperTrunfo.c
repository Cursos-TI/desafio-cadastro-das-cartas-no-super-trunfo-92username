#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    char nomeCidade [50];
    int codigoCidade, populacao, pontosTuristicos;
    float area;
    double pib;

    printf("Digite o codigo da cidade (ex: 1)");
    scanf("%d", &codigoCidade);
    printf("Digite o nome da Cidade: ");
    scanf("%s" , nomeCidade);
    printf("Digite a população da cidade (sem pontos, sem vírgulas)");
    scanf ("%d", &populacao);
    printf("Digite a area da cidade (sem pontos, sem vírgulas)");
    scanf("%f", &area);
    printf("Digite o pib da Cidade (ex: 2500,00)");
    scanf("%lf", &pib);
    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &pontosTuristicos);

    printf("Aqui estão os dados da carta inserida. Confira os dados. \n\nTecle 1 para confirmar, tecle 2 para digitar novamente ou 99 para sair.\n\n");

    printf("Código da cidade: %d - Nome: %s\n", codigoCidade, nomeCidade);
    printf("População: %d - Área %.2f km²\n", populacao, area);
    printf("PIB: %.2lf Reais - Pontos Turísticos: %d", pib, pontosTuristicos);
  
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
