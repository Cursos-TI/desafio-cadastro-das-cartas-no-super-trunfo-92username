#include <stdio.h>

int main() {
    char nomeCidade [50];
    int codigoCidade, populacao, pontosTuristicos;
    float area;
    double pib;

    printf("Digite o codigo da cidade (ex: 1)");
    scanf("%d", &codigoCidade);
    printf("Digite o nome da Cidade: ");
    scanf("%s" , nomeCidade);
    printf("Digite a população da cidade: ");
    scanf ("%d", &populacao);
    printf("Digite a area da cidade: ");
    scanf("%f", &area);
    printf("Digite o pib da Cidade: ");
    scanf("%lf", &pib);
    getchar();
    printf("Digite o numero de pontos turisticos da cidade: ");
    scanf("%d", &pontosTuristicos);

    printf("Aqui estão os dados da carta inserida. Confira os dados. \n\nTecle 1 para confirmar, tecle 2 para digitar novamente ou 99 para sair.\n\n");

    printf("Código da cidade: %d - Nome: %s\n", codigoCidade, nomeCidade);
    printf("População: %d - Área %.2f km²\n", populacao, area);
    printf("PIB: %.2lf Reais - Pontos Turísticos: %d\n", pib, pontosTuristicos);
  
    return 0;
}
