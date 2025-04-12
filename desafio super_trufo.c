#include <stdio.h>

int main()
{

    unsigned long int populacao1, populacao2;

    int turistico1, turistico2 ; 
    int populacaoTotal;

    char estado1[10], estado2[10]; 
    char codigo1[10], codigo2[10];
    char cidade1[50], cidade2[50];

    float pib1, pib2;
    float area1, area2;
    float densidadep1, densidadep2;
    float percapita1, percapita2;
    float superpoder, superpoder1, superpoder2;
    float calculodensidade1, calculodensidade2;
    

        printf("digite a letra do estado:\n");
        scanf("%s", &estado1);
            
        printf("digite o codigo do estado:\n");
        scanf("%s", &codigo1);

        printf("digite o nome da cidade:\n");
        scanf("%s", &cidade1);

        printf("digite o numero de habitantes:\n");
        scanf("%d", &populacao1);

        printf("digite a area:\n");
        scanf("%f", &area1);
            
        printf("digite o PIB:\n");
        scanf("%f", &pib1);

        printf("digite o numero de pontos turisticos:\n");
        scanf("%d", &turistico1);


            densidadep1 = (populacao1 / area1); //operação de divisão densidade populacional
            percapita1  = (pib1 / populacao1);  // operação de divisão pib per capita
             
            

       printf("-----------CARTA 1-----------\n");
       printf("-ESTADO:%s\n", estado1);
       printf("-CODIGO:%s%s\n",estado1, codigo1);
       printf("-CIDADE:%s\n",cidade1);
       printf("-POPULAÇÃO:%d habitantes\n",populacao1);
       printf("-AREA:%.0fKm²\n",area1);
       printf("-PIB:%.0f Bilhões Reais\n",pib1);
       printf("-NUMERO DE PONTOS TURISTICOS:%d\n",turistico1);
       printf("-DENSIDADE POPULACIONAL:%.3f hab/Km² \n", densidadep1); 
       printf("-PIB PER CAPITA:%.0f Bilhões Reais\n", percapita1);
       printf("-----------------------------\n");

       printf("digite a letra do estado:\n");
       scanf("%s", &estado2);
       
        printf("digite o codigo do estado:\n");
        scanf("%s", &codigo2);

        printf("digite o nome da cidade:\n");
        scanf("%s", &cidade2);

        printf("digite o numero de habitantes:\n");
        scanf("%d", &populacao2);

        printf("digite a area:\n");
        scanf("%f", &area2);
        
        printf("digite o PIB:\n");
        scanf("%f", &pib2);

        printf("digite o numero de pontos turisticos:\n");
        scanf("%d", &turistico2);


        densidadep2 =(populacao2 / area2);  //operação de divisão da densidade populacional
        percapita2  =(pib2 / populacao2);   // operação de divisão pib per capita


        printf("-----------CARTA 2-----------\n");
        printf("-ESTADO:%s\n", estado2);
        printf("-CODIGO:%s%s\n",estado2, codigo2);
        printf("-CIDADE:%s\n",cidade2);
        printf("-POPULAÇÃO:%d habitantes\n",populacao2);
        printf("-AREA:%.0fKm²\n",area2);
        printf("-PIB:%.0f Reais\n",pib2);
        printf("-NUMERO DE PONTOS TURISTICOS:%d\n",turistico2);
        printf("-DENSIDADE POPULACIONAL:%.3f hab/Km²\n", densidadep2); 
        printf("-PIB PER CAPITA:%.0f Bilhões Reais\n", percapita2);
        printf("-----------------------------\n");


            calculodensidade1 =  (1 / densidadep1); // calculo do inverso da densidade
            calculodensidade2 =  (1 / densidadep2);
            superpoder1 = ( populacao1 + area1 + pib1 + turistico1 + percapita1 + calculodensidade1 );// soma dos atributos
            superpoder2 = ( populacao2 + area2 + pib2 + turistico2 + percapita2 + calculodensidade2 );// soma dos atributos
          

            printf("-----COMPARAÇÃO DE CARTAS-----\n");// comparando as cartas
            printf("POPULAÇÃO: CARTA 1 VENCEU (%li) \n", (populacao1 > populacao2));
            printf("AREÁ: CARTA 1 VENCEU (%d)\n",(area1 > area2));
            printf("PIB: CARTA 1 VENCEU (%d)\n",(pib1 > pib2));
            printf("PONTOS TURÍSTICOS: CARTA 1 VENCEU (%d)\n",(turistico1 > turistico2));
            printf("DENSIDADE POPULACIONAL: CARTA 1 VENCEU (%d)\n",(calculodensidade1 > calculodensidade2));
            printf("PIB PER CAPITA: CARTA 1 VENCEU (%d)\n",(percapita1 > percapita2));
            printf("SUPER PODER: CARTA 1 VENCEU (%d)\n", (superpoder1 > superpoder2));
            printf("------------------------------\n");


    return 0;
}
