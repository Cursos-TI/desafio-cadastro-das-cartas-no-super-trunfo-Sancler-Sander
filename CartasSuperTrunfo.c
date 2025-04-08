#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado[1], cidade[50];
    int codcidade,populacao, pontosturisticos;
    float pib, area;



    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    printf ("Cadastro de Cartas Super Trunfo \n\n");

    printf ("Digite a letra correspondente ao Estado: \n" );
    scanf ("%s", %estado);

    printf ("Digite um código para a cidade: \n" );
    scanf ("%d", &codcidade);

    printf ("Digite um nome de cidade: \n" );
    scanf ("%s", &cidade);

    printf ("Digite a população dia cidade:\n" );
    scanf ("%d", &populacao);

    printf ("Digite a área em km2: \n" );
    scanf ("%f", &area);

    printf ("Digite o PIB(produto interno bruto) para a cidade: \n" );
    scanf ("%f", &pib);

    printf ("Digite o número de pontos turísticos: \n" );
    scanf ("%d", &pontosturisticos);

    



    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Dados da primeira carta:\n\n");
    printf("Estado:%d %s \n",estado, codcidade);

    return 0;
}
