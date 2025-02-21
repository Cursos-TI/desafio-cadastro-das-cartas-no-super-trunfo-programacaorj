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
    double area1, area2;
    double pib1, pib2;
    int pontos_turisticos1, pontos_turisticos2; 
    double densidade_populacional1, densidade_populacional2;
    double pib_per_capita1, pib_per_capita2;

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
    scanf("%d", &populacao1);

    printf("Digite a area da cidade: \n"); 
    scanf("%lf", &area1);

    printf("Digite o pib da cidade: \n");
    scanf("%lf", &pib1);

    printf("Quantidade de pontos turisticos: \n"); 
    scanf("%d", &pontos_turisticos1);

    //Calculando a densidade populacional e o pib per capita da carta 1.
    /*A multiplicação do PIB1 foi realizada para ajustar a unidade do PIB, que estava em bilhões
     e precisava estar em reais. Esse ajuste foi necessário porque, durante a execução do código, 
     o cálculo do PIB per capita resultava em 0,00.*/
    densidade_populacional1 = populacao1 / area1;
    pib_per_capita1 = (pib1 * 1000000000) / populacao1; //Conversão de bilhões para reais.

    //CADASTRO SEGUNDA CARTA. 
    printf("CADASTRO SEGUNDA CARTA: \n");
    printf("informe o estado: \n");
    scanf("%s", estado2);
   
    printf("Digite o codigo da cidade: \n");
    scanf("%s", codigo2);

    printf("Digite o nome da cidade: \n");
    scanf("%s", nome2);

    printf("Digite a população da cidade: \n");
    scanf("%d", &populacao2);

    printf("Digite a area da cidade: \n"); 
    scanf("%lf", &area2);

    printf("Digite o pib da cidade: \n");
    scanf("%lf", &pib2);

    printf("Quantidade de pontos turisticos: \n"); 
    scanf("%d", &pontos_turisticos2);

    //Calculando a densidade populacional e o pib per capita da carta 2.
    densidade_populacional2 = populacao2 / area2;
    pib_per_capita2 = (pib2 * 1000000000) / populacao2; //Conversão de bilhões para reais.



    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    //RESULTADO DA CARTA 1 CADASTRADA.
    printf("CARTA:1 \n");
    printf("Estado: %s \n", estado1);
    printf("Código: %s \n", codigo1);
    printf("Nome da cidade: %s \n", nome1);
    printf("População: %d \n", populacao1);
    printf("Área: %.2lf Km² \n", area1);
    printf("PIB: %.2lf bi \n", pib1);
    printf("Pontos turísticos: %d \n", pontos_turisticos1);
    printf("Densidade Populaciona: %.2lf hab/km² \n", densidade_populacional1);
    printf("PIB per Capita: %.2lf reais \n", pib_per_capita1);
    printf("CARTA CADASTRADA! \n");
    
    printf("-----------------------------------\n");

    //RESULTADO DA CARTA 2 CADASTRADA.
    printf("CARTA:2 \n");
    printf("Estado: %s \n", estado2);
    printf("Código: %s \n", codigo2);
    printf("Nome da cidade: %s \n", nome2);
    printf("População: %d \n", populacao2);
    printf("Área: %.2lf Km² \n", area2);
    printf("PIB: %.2lf bi \n", pib2);
    printf("Pontos turísticos: %d \n", pontos_turisticos2);
    printf("Densidade Populaciona: %.2lf hab/km² \n", densidade_populacional2);
    printf("PIB per Capita: %.2lf reais \n", pib_per_capita2);
    printf("CARTA CADASTRADA! \n");



    return 0;
}
