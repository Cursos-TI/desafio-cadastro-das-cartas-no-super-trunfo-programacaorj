#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char estado[20];
    char codigo[6]; 
    char nome[50];
    int populacao;
    float area, pib; 
    int pontos_turisticos; 

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    printf("informe o estado: \n");
    scanf("%s", estado);
   
    printf("Digite o codigo da cidade: \n");
    scanf("%s", codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome);

    printf("Digite a população da cidade: \n");
    scanf(" %d", &populacao);
    getchar(); //limpa o buffer

    printf("Digite a area da cidade: \n"); 
    scanf(" %f", &area);
    getchar();//limpa o buffer

    printf("Digite o pib da cidade: \n");
    scanf(" %f", &pib);
    getchar(); //limpa o buffer 

    printf("Quantidade de pontos turisticos: \n"); 
    scanf("%d", &pontos_turisticos);

    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Estado: %s \n", estado);
    printf("Código da carta: %s \n", codigo);
    printf("Nome da cidade: %s \n", nome);
    printf("População: %d \n", populacao);
    printf("Área: %f Km² \n", area);
    printf("PIB: %f bi \n", pib);
    printf("Pontos turísticos: %d \n", pontos_turisticos);
    printf("CARTA CADASTRADA! \n");

    return 0;
}
