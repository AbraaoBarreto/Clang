#include <stdio.h>

int main() {
    int pontos_turisticos; 
    float populacao, PIB, area;
    char codigo[4];
    char cidade[20];

    printf("Insira o nome da cidade: \n");
    scanf("%s", &cidade);

    printf("insira o codigo da cidade: \n");
    scanf("%s", &codigo);

    printf(" insira a população da cidade (Em milhoes): \n");
    scanf("%f", &populacao);

    printf("Insira o PIB da cidade (Em bilhoes): \n");
    scanf("%f", &PIB);

    printf("Insira o numerod e pontos turisticos da cidade: \n");
    scanf("%d", &pontos_turisticos);

    printf("insira a area da cidade (em km): \n");
    scanf("%f", &area);


    printf("***********  CIDADE   ************");
    printf("Cidade: %s.\n Codigo: %s.\n -População: %f.\n -PIB: %f.\n -Pontos turisticos: %d.\n -Área: %f.\n ", cidade, codigo, populacao, PIB, pontos_turisticos, area);

    return 0;
}