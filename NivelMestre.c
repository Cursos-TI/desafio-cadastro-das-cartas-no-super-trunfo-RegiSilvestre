#include <stdio.h>


int main() {
    //Declar as variáveis
    char estado1, estado2;
    char codcarta1[4], codcarta2[4], nomecid1[50], nomecid2[50];
    int numpt1, numpt2;
    float aream21, aream22, pib1, pib2, densPop1, densPop2, pibPCap1, pibPCap2;
    unsigned long int populacao1, populacao2, resultadoPop;
    float superPoderCarta1, superPoderCarta2;
    int resultadoArea, resultadoPib, resultadoNumpt, resultadoDensPop, resultadoPibPcap, resultadoSuperPoder;

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
        scanf(" %lu", &populacao1);
    
        printf("Digite a área da cidade em metros quadrados: \n");
        scanf(" %f", &aream21);
    
        printf("Digite o PIB desta cidade: \n");
        scanf(" %f", &pib1);

        printf("Digite o número de pontos turisticos desta cidade: \n");
        scanf(" %d", &numpt1);
        //Calculando a Densidade Polulacional da primeira Carta
        densPop1 = populacao1 / aream21;
        //Calculando o PIB per Capita da primeira Carta
        pibPCap1 = pib1 / populacao1;

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
                scanf(" %lu", &populacao2);
            
                printf("Digite a área da cidade em metros quadrados: \n");
                scanf(" %f", &aream22);
             
                printf("Digite o PIB desta cidade: \n");
                scanf(" %f", &pib2);

                printf("Digite o número de pontos turísticos desta cidade: \n");
                scanf(" %d", &numpt2);

                //Calculando a Densidade Polulacional da segunda Carta
                densPop2 = populacao2 / aream22;
                //Calculando o PIB per Capita da segunda Carta
                pibPCap2 = pib2 / populacao2;

        /* Somando todos os atributos numéricos (população, área, PIB, número de pontos turísticos, 
        PIB per capita e o inverso da densidade populacional – quanto menor a densidade, maior o "poder")*/
        superPoderCarta1 = (float) populacao1 + aream21 + pib1 + numpt1 + pibPCap1 + (1 / densPop1);
        superPoderCarta2 = (float) populacao2 + aream22 + pib2 + numpt2 + pibPCap2 + (1 / densPop2);
         
    // Comparação das Cartas
    resultadoPop = populacao1 > populacao2;
    resultadoArea = aream21 > aream22;
    resultadoPib = pib1 > pib2;
    resultadoNumpt = numpt1 > numpt2;
    resultadoDensPop = densPop1 < densPop2; //vence a menor densidade
    resultadoPibPcap = pibPCap1 > pibPCap2;
    resultadoSuperPoder = superPoderCarta1 > superPoderCarta2;
        
        printf("\n");
        
        //Exibir atributos da primeira Carta
        printf("******CARTA 1******\n"); 
        printf("Estado: %c\n", estado1);
        printf("Código: %s\n", codcarta1);
        printf("Nome da Cidade: %s", nomecid1);   
        printf("População: %lu\n", populacao1);
        printf("Área: %.2f km² \n", aream21);
        printf("PIB: %.2f bilhões de reais \n", pib1); 
        printf("Números de Pontos Turisticos: %d \n", numpt1);
        printf("Densidade Populacional: %.2f hab/km² \n", densPop1);
        printf("PIB per Capita: %.2f reais \n\n", pibPCap1);

                // Exibir atributos da segunda Carta
                printf("******CARTA 2****** \n");
                printf("Estado: %c\n", estado2);
                printf("Código: %s\n", codcarta2);
                printf("Nome da Cidade: %s", nomecid2);   
                printf("População: %lu\n", populacao2);
                printf("Área: %.2f km² \n", aream22);
                printf("PIB: %.2f bilhões de reais \n", pib2); 
                printf("Números de Pontos Turisticos: %d \n", numpt2);
                printf("Densidade Populacional: %.2f hab/km² \n", densPop2);
                printf("PIB per Capita: %.2f reais \n", pibPCap2);
        
                printf("\n");
        
        //Exibir resultado das comparações das Cartas
        // Resposta 1 -> Sim ------- Resposta 0 -> Não 
        printf("******RESULTADO DA COMPARAÇÃO DAS CARTAS******\n");
        printf("Resposta 1 ->Sim --- Resposta 0 -> Não\n");
        printf("\n"); // usado para pular linha.
        printf("População: Carta 1 venceu Carta 2? Resposta: %d\n", resultadoPop);
        printf("Área: Carta 1 venceu Carta 2? Resposta: %d\n", resultadoArea);
        printf("PIB: Carta 1 venceu Carta 2? Resposta: %d\n", resultadoPib);
        printf("Número de Pontos Turisticos: Carta 1 venceu Carta 2? Resposta: %d\n", resultadoNumpt);
        printf("Densidade Populacional: Carta 1 venceu Carta 2? Resposta: %d\n", resultadoDensPop);
        printf("PIB per Capita: Carta 1 venceu Carta 2? Resposta: %d\n", resultadoPibPcap);
        printf("Super Poder: Carta 1 venceu Carta 2? Resposta: %d\n", resultadoSuperPoder);


    return 0;
}