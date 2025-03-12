#include <stdio.h>

int main()
{
    int populacao1, populacao2;
    int turistico1, turistico2 ;
    char estado1[50], estado2[50]; 
    char codigo1[50], codigo2[50];
    char cidade1[50], cidade2[50];
    float pib1, pib2;
    float area1, area2;

        printf("digite a letra do estado:\n");
            scanf("%s", estado1);
            
        printf("digite o codigo do estado:\n");
            scanf("%s", codigo1);

        printf("digite o nome da cidade:\n");
            scanf("%s", cidade1);

        printf("digite o numero de habitantes:\n");
            scanf("%d", &populacao1);

        printf("digite a area:\n");
            scanf("%f", &area1);
            
        printf("digite o PIB:\n");
            scanf("%f", &pib1);

        printf("digite o numero de pontos turisticos:\n");
            scanf("%d", &turistico1);

       printf("CARTA 1\n");
       printf("-ESTADO:%s\n", estado1);
       printf("-CODIGO:%s%s\n",estado1, codigo1);
       printf("-CIDADE:%s\n",cidade1);
       printf("-POPULAÇÃO:%d\n",populacao1);
       printf("-AREA:%.0fKm²\n",area1);
       printf("-PIB:%.0f Bilhões de reais\n",pib1);
       printf("-NUMERO DE PONTOS TURISTICOS:%d\n",turistico1);
        


         printf("digite a letra do estado:\n");
            scanf("%s", estado2);
       
        printf("digite o codigo do estado:\n");
            scanf("%s", codigo2);

         printf("digite o nome da cidade:\n");
            scanf("%s", cidade2);

          printf("digite o numero de habitantes:\n");
            scanf("%d", &populacao2);

        printf("digite a area:\n");
            scanf("%f", &area2);
       
          printf("digite o PIB:\n");
            scanf("%f", &pib2);

        printf("digite o numero de pontos turisticos:\n");
            scanf("%d", &turistico2);

        printf("CARTA 2\n");
        printf("-ESTADO:%s\n", estado2);
        printf("-CODIGO:%s%s\n",estado2, codigo2);
        printf("-CIDADE:%s\n",cidade2);
        printf("-POPULAÇÃO:%d\n",populacao2);
        printf("-AREA:%.0fKm²\n",area2);
        printf("-PIB:%.0f Bilhões de reais\n",pib2);
        printf("-NUMERO DE PONTOS TURISTICOS:%d\n",turistico2);


    return 0;
}
