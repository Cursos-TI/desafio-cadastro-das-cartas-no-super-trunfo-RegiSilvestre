#include <stdio.h>


int main() {
    //Declar as variáveis
    char estado1, estado2;
    char codcarta1[4], codcarta2[4], nomecid1[50], nomecid2[50];
    int numpt1, numpt2, populacao1, populacao2;
    float aream21, aream22, pib1, pib2;
        

        //Entrada de dados da primeira Carta.
        printf("******CARTA 1****** \n"); 
        
        printf("Digite a primeira letra do Estado de A a H: \n");
        scanf(" %c", &estado1);
    
        printf("Digite a primeira letra do Estado de A a H seguida de um número de 01 a 04: \n");
        scanf(" %s", codcarta1);

        printf("Digite o nome da cidade: \n");
        getchar(); // usado para não pular linha e poder colocar o nome da cidade
        fgets(nomecid1, 50, stdin);
           
        printf("Digite a população desta cidade: \n");
        scanf(" %d", &populacao1);
    
        printf("Digite a área da cidade em metros quadrados: \n");
        scanf(" %f", &aream21);
    
        printf("Digite o PIB desta cidade: \n");
        scanf(" %f", &pib1);

        printf("Digite o número de pontos turisticos desta cidade: \n");
        scanf(" %d", &numpt1);
        

                // Entrada de dados da segunda Carta.
                printf("******CARTA 2****** \n");
        
                printf("Digite a primeira letra do Estado de A a H: \n");
                scanf(" %c", &estado2);
           
                printf("Digite a primeira letra do Estado de A a H seguida de um número de 01 a 04: \n");
                scanf(" %s", codcarta2);

                printf("Digite o nome da cidade: \n");
                getchar();
                fgets(nomecid2, 50, stdin);
                                       
                printf("Digite a população desta cidade: \n");
                scanf(" %d", &populacao2);
            
                printf("Digite a área da cidade em metros quadrados: \n");
                scanf(" %f", &aream22);
             
                printf("Digite o PIB desta cidade: \n");
                scanf(" %f", &pib2);

                printf("Digite o número de pontos turísticos desta cidade: \n");
                scanf(" %d", &numpt2);

               
                
        printf("\n"); // Usado para pular uma linha.
        
        //Exibir atributos da primeira Carta
        printf("******CARTA 1******\n"); 
        printf("Estado: %c\n", estado1);
        printf("Código: %s\n", codcarta1);
        printf("Nome da Cidade: %s", nomecid1);   
        printf("População: %d\n", populacao1);
        printf("Área: %.2f km² \n", aream21);
        printf("PIB: %.2f bilhões de reais \n", pib1); 
        printf("Números de Pontos Turisticos: %d \n", numpt1);
        
                // Exibir atributos da segunda Carta
                printf("******CARTA 2****** \n");
                printf("Estado: %c\n", estado2);
                printf("Código: %s\n", codcarta2);
                printf("Nome da Cidade: %s", nomecid2);   
                printf("População: %d\n", populacao2);
                printf("Área: %.2f km² \n", aream22);
                printf("PIB: %.2f bilhões de reais \n", pib2); 
                printf("Números de Pontos Turisticos: %d \n", numpt2);
                        
return 0;

}