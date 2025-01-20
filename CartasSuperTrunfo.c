#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

// Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
int main() {
    int pont_turisticos;
    float area, pib, populacao;
    char cod_cidade[10], nome_cidade[30];

    printf("Cadastro de Cartas \n");

    printf("Digite o código da cidade: \n");
    scanf("%s", &cod_cidade);    

    printf("Digite o nome da cidade: \n"); 
    scanf ("%s", &nome_cidade); //erro ao dar espaço entre palavras

    printf("Digite a populção da cidade: \n");
    scanf("%f", &populacao);

    printf("Digite a PIB da cidade: \n");
    scanf("%f", &pib);

    printf("Digite a área da cidade: \n");
    scanf("%f", &area);

    printf("Digite a quantidade de pontos turísticos: \n");
    scanf("%d", &pont_turisticos);

    printf("Código da Cidade: %s\n", cod_cidade);
    printf("Nome da cidade: %s\n", nome_cidade);
    printf("População (M): %2.f \n", populacao);
    printf("Área: %2.fkm²\n", area);
    printf("PIB: R$%f\n", pib);
    printf("Número de pontos turísticos: %d\n", pont_turisticos);

    return 0;
}
