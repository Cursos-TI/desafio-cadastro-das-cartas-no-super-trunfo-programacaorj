#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    char estado1[20], estado2[20];
    char codigo1[6], codigo2[6]; 
    char nome1[30], nome2[30];
    int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2; 

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
   
    //CADASTRO PRIMEIRA CARTA.
    printf("CADASTRO PRIMEIRA CARTA: \n");
    printf("informe o estado: \n");
    scanf("%s", estado1);
   
    printf("Digite o codigo da cidade: \n");
    scanf("%s", codigo1);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome1);

    printf("Digite a população da cidade: \n");
    scanf(" %d", &populacao1);

    printf("Digite a area da cidade: \n"); 
    scanf(" %f", &area1);

    printf("Digite o pib da cidade: \n");
    scanf(" %f", &pib1);

    printf("Quantidade de pontos turisticos: \n"); 
    scanf("%d", &pontos_turisticos1);

    //CADASTRO SEGUNDA CARTA. 
    printf("CADASTRO SEGUNDA CARTA: \n");
    printf("informe o estado: \n");
    scanf("%s", estado2);
   
    printf("Digite o codigo da cidade: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome2);

    printf("Digite a população da cidade: \n");
    scanf(" %d", &populacao2);

    printf("Digite a area da cidade: \n"); 
    scanf(" %f", &area2);

    printf("Digite o pib da cidade: \n");
    scanf(" %f", &pib2);

    printf("Quantidade de pontos turisticos: \n"); 
    scanf("%d", &pontos_turisticos2);



    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //CARTA 1 CADASTRADA.
    printf("CARTA:1 \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da cidade: %s \n", nome1);
    printf("População: %d \n", populacao1);
    printf("Área: %f Km² \n", area1);
    printf("PIB: %f bi \n", pib1);
    printf("Pontos turísticos: %d \n", pontos_turisticos1);
    printf("CARTA CADASTRADA! \n");

    //CARTA 2 CADASTRADA.
    printf("CARTA:2 \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da cidade: %s \n", nome2);
    printf("População: %d \n", populacao2);
    printf("Área: %f Km² \n", area2);
    printf("PIB: %f bi \n", pib2);
    printf("Pontos turísticos: %d \n", pontos_turisticos2);
    printf("CARTA CADASTRADA! \n");



    return 0;
}
