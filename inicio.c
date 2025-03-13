#include <stdio.h>


//SEGUNDA PARTE DE DESAFIO, CADASTRO DE CIDADES

int main() {
    int pontos_turisticos_1, pontos_turisticos_2; 
    float populacao_1, populacao_2, pib_1, pib_2, area_1, area_2;
    float densidade_populacional_1 = populacao_1 / area_1;
    float densidade_populacional_2 = populacao_2 / area_2;
    char estado_1[2], estado_2[2];
    char codigo_1[4], codigo_2[4];
    char cidade_1[20], cidade_2[20];

    //cadastrando a primeira cidade
    printf("Insira o estado): \n");
    scanf(" %s", estado_1);

    printf("Insira o nome da cidade(use _ ao inves de " "): \n");
    scanf(" %s", cidade_1);

    printf("insira o codigo da cidade: \n");
    scanf(" %s", codigo_1);

    printf("insira a população da cidade (Em milhoes): \n");
    scanf("%f", &populacao_1);

    printf("Insira o PIB da cidade (Em bilhoes): \n");
    scanf("%f", &pib_1);

    printf("Insira o numero de pontos turisticos da cidade: \n");
    scanf("%d", &pontos_turisticos_1);

    printf("insira a area da cidade (em km²): \n");
    scanf("%f", &area_1);


    printf("PRIMEIRA CIDADE CADASTRADA COM SUCESSO!\n");


    //Cadastrando a segunda cidade
    printf("Insira o estado): \n");
    scanf(" %s", estado_2);

    printf("Insira o nome da cidade(use _ ao inves de " "): \n");
    scanf(" %s", cidade_2);

    printf("insira o codigo da cidade: \n");
    scanf(" %s", codigo_2);

    printf("insira a população da cidade (Em milhoes): \n");
    scanf("%f", &populacao_2);

    printf("Insira o PIB da cidade (Em bilhoes): \n");
    scanf("%f", &pib_2);

    printf("Insira o numero de pontos turisticos da cidade: \n");
    scanf("%d", &pontos_turisticos_2);

    printf("insira a area da cidade (em km²): \n");
    scanf("%f", &area_2);

    //calculando os dados
    float ppc_1 = pib_1 / populacao_1;
    float ppc_2 = pib_2 / populacao_2;

    //exibindo as cidades
    printf("CARTA 1:\n");
    printf("Estado: %s.\n Cidade: %s.\n Codigo: %s.\n -População: %.2f.\n -PIB: %.2f.\n -Pontos turisticos: %d.\n -Área: %.2f.\n -Densidade populacional: %.2f.\n PIB per capita: %.2f.\n ", estado_1, cidade_1, codigo_1, populacao_1, pib_1, pontos_turisticos_1, area_1, densidade_populacional_1, ppc_1);

    printf("CARTA 2:\n");
    printf("Estado: %s.\n Cidade: %s.\n Codigo: %s.\n -População: %.2f.\n -PIB: %.2f.\n -Pontos turisticos: %d.\n -Área: %.2f.\n -Densidade populacional: %.2f.\n PIB per capita: %.2f.\n ", estado_2, cidade_2, codigo_2, populacao_2, pib_2, pontos_turisticos_2, area_2, densidade_populacional_2, ppc_2);

    return 0;
}

