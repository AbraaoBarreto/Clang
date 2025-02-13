#include <stdio.h>


//PRIMEIRA PARTE DE DESAFIO, CADASTRO DE CIDADES

int main() {
    int pontos_turisticos; 
    float populacao, pib, area;
    char codigo[4];
    char cidade[20];

    printf("Insira o nome da cidade(use _ ao inves de " "): \n");
    scanf(" %s", cidade);

    printf("insira o codigo da cidade: \n");
    scanf(" %s", codigo);

    printf("insira a população da cidade (Em milhoes): \n");
    scanf("%f", &populacao);

    printf("Insira o PIB da cidade (Em bilhoes): \n");
    scanf("%f", &pib);

    printf("Insira o numero de pontos turisticos da cidade: \n");
    scanf("%d", &pontos_turisticos);

    printf("insira a area da cidade (em km²): \n");
    scanf("%f", &area);


    printf("***********  CIDADE   ************\n");
    printf("Cidade: %s.\n Codigo: %s.\n -População: %.2f.\n -PIB: %.2f.\n -Pontos turisticos: %d.\n -Área: %.2f.\n ", cidade, codigo, populacao, pib, pontos_turisticos, area);

    return 0;
}