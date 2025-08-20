#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    char estado1, estado2;
    char codcarta1[10], codcarta2[10];
    char nomecid1[50], nomecid2[50];
    int populacao1, populacao2;
    float aream21, aream22;
    float pib1, pib2;
    int numpt1, numpt2;

    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
        printf("PRIMEIRA CARTA TRUNFO\n"); // Primeira carta trunfo.
        printf("Digite a primeira letra do Estado de A a H: \n");
        scanf("%c", &estado1);
    
        printf("Digite a primeira letra do Estado de A a H seguida de um número de 01 a 04: \n");
        scanf("%s", &codcarta1);

        printf("Digite o nome da cidade: \n");
        fgets(nomecid1, 50, stdin);
        scanf("%s", &nomecid1);

        printf("Digite a população desta cidade: \n");
        scanf("%d", &populacao1);
    
        printf("Digite a área da cidade em metros quadrados: \n");
        scanf("%f", &aream21);
    
        printf("Digite o PIB desta cidade: \n");
        scanf("%f", &pib1);

        printf("Digite o número de pontos turisticos desta cidade: \n");
        scanf("%d", &numpt1);


                    printf("SEGUNDA CARTA TRUNFO\n"); // Segunda carta trunfo.
                    printf("Digite a primeira letra do Estado de A a H: \n");
                    scanf("%c", &estado2);
           
                    printf("Digite a primeira letra do Estado de A a H seguida de um número de 01 a 04: \n");
                    scanf("%s", &codcarta2);

                    printf("Digite o nome da cidade: \n");
                    fgets(nomecid2, 50, stdin);
                    scanf("%s", &nomecid2);

                    printf("Digite a população desta cidade: \n");
                    scanf("%d", &populacao2);
            
                    printf("Digite a área da cidade em metros quadrados: \n");
                    scanf("%f", &aream22);
             
                    printf("Digite o PIB desta cidade: \n");
                    scanf("%f", &pib2);

                    printf("Digite o número de pontos turísticos desta cidade: \n");
                    scanf("%d", &numpt2);


    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.
     printf("PRIMEIRA CARTA TRUNFO\n"); // Primeira carta trunfo.
     printf("CARTA: %s\n", codcarta1);
     printf("ESTADO: %c\n", estado1);
     printf("CÓDIGO: %s\n", codcarta1);
     printf("Nome da Cidade: %s\n", nomecid1);   
     printf("População: %d\n", populacao1);
     printf("Área: %f km² \n", aream21);
     printf("PIB: %f bilhões de reais \n", pib1); 
     printf("Números de Pontos Turisticos: %d \n", numpt1);



                    printf("SEGUNDA CARTA TRUNFO\n"); // Primeira carta trunfo.
                    printf("CARTA: %s\n", codcarta2);
                    printf("ESTADO: %c\n", estado2);
                    printf("CÓDIGO: %s\n", codcarta2);
                    printf("Nome da Cidade: %s\n", nomecid2);   
                    printf("População: %d\n", populacao2);
                    printf("Área: %f km² \n", aream22);
                    printf("PIB: %f bilhões de reais \n", pib2); 
                    printf("Números de Pontos Turisticos: %d \n", numpt2);


    return 0;
}
