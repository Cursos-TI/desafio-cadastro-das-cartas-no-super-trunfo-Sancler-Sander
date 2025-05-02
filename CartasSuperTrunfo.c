#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado1[50], cidade1[50], estado2[50], cidade2[50];
    int codcidade1, pontosturisticos1, codcidade2, pontosturisticos2;
    float pib1, area1, pib2, area2, densidade_pop1, densidade_pop2, pib_per_capita1, pib_per_capita2;
    unsigned long int populacao1, populacao2;


    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf ("Cadastro de Cartas Super Trunfo \n\n");

    //Carta 1 - Entrada de Dados
    printf ("Cadastro da Carta 1: \n\n");



    printf ("Digite a letra correspondente ao Estado (A-H): \n" );
    scanf ("%s", &estado1);

    printf ("Digite um código para a cidade: \n" );
    scanf ("%d", &codcidade1);

    printf ("Digite um nome de cidade: \n" );
    scanf ("%s", &cidade1);

    printf ("Digite a população da cidade:\n" );
    scanf ("%d", &populacao1);

    printf ("Digite a área em km2: \n");
    scanf ("%f", &area1);

    printf ("Digite o PIB(produto interno bruto) para a cidade(em bilhões): \n" );
    scanf ("%f", &pib1);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontosturisticos1);

    pib_per_capita1 = pib1 / populacao1;
    densidade_pop1 = populacao1/area1;

    //carta2 - Entrada de Dados

    printf ("\n Cadastro da Carta 2 \n\n");



    printf ("Digite a letra correspondente ao Estado (A-H): \n" );
    scanf ("%s", &estado2);

    printf ("Digite um código para a cidade: \n" );
    scanf ("%d", &codcidade2);

    printf ("Digite um nome de cidade: \n" );
    scanf ("%s", &cidade2);

    printf ("Digite a população da cidade:\n" );
    scanf ("%d", &populacao2);

    printf ("Digite a área em km2: \n");
    scanf ("%f", &area2);

    printf ("Digite o PIB(produto interno bruto) para a cidade (em bilhões): \n" );
    scanf ("%f", &pib2);

    printf("Digite o número de pontos turísticos:\n");
    scanf("%d", &pontosturisticos2);

    pib_per_capita2 = pib2 / populacao2;
    densidade_pop2 = populacao2/area2;

    



    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //Carta 1 - Saída de dados

    printf("Dados da Carta 1:\n\n");
    printf("Estado:  %s  \n", estado1);
    printf("Código:  %d  \n",codcidade1);
    printf("Nome da Cidade:  %s  \n",cidade1);
    printf("População:  %d  \n",populacao1);
    printf("Área:  %.3f  Km2\n",area1);
    printf("PIB:  R$ %.2f  bilhões\n",pib1);
    printf("Pontos Turísticos :  %d \n",pontosturisticos1);
    printf("Pib Per Capita: R$%.2f \n", pib_per_capita1);
    printf("Densidade Populacional: %f \n\n\n\n", densidade_pop1);

    unsigned long int super_poder_carta_1 = (populacao1+area1+pib_per_capita1)+(area1/populacao1);

    printf("Super Poder Carta 1 : %u /n", super_poder_carta_1);

    //Carta 2 - Saída de Dados

    printf("Dados da Carta 2:\n\n");
    printf("Estado:  %s  \n", estado2);
    printf("Código:  %d  \n",codcidade2);
    printf("Nome da Cidade:  %s  \n",cidade2);
    printf("População:  %d  \n",populacao2);
    printf("Área:  %.2f  Km2\n",area2);
    printf("PIB:  R$ %.2f  bilhões\n",pib2);
    printf("Pontos Turísticos :  %d  \n",pontosturisticos2);
    printf("Pib Per Capita: %f \n", pib_per_capita2);
    printf("Densidade Populacional: %f \n", densidade_pop2);

    unsigned long int super_poder_carta_2 = (populacao2+area2+pib_per_capita2)+(area2/populacao2);
    printf("Super Poder: %u /n", super_poder_carta_2);

    //resultado comparacao das cartas

    int pontosturisticos;
    float pib, area, densidade_pop, pib_per_capita1;
    unsigned long int populacao, superpoder;

    populacao = populacao1>populacao2;
    area = area1>area2;
    pib = pib1>pib2;
    pontosturisticos = pontosturisticos1>pontosturisticos2;
    densidade_pop = densidade_pop1<densidade_pop2;
    pib = pib_per_capita1>pib_per_capita2;
    superpoder = super_poder_carta_1>super_poder_carta_2;

    printf("Populacao: Carta  %s venceu", cidade1);


    

    return 0;
}
