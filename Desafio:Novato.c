#include <stdio.h>
int main(){

    char estado1, estado2, CodigodaCarta1, CodigodaCarta2, nomedacidade1 [20],nomedacidade2 [20];
    int numerodehabitantes1,numerodehabitantes2, pontosturisticos1, pontosturisticos2;
    float areaemkm1,areaemkm2, PIB1,PIB2;
  
    // Cadastro 1
   
    printf("Ola pessoal,bem vindos ao jogo Super Trunfo, para começarmos, vamos cadastrar os dados da nossa carta.\n");
    printf ("Para dar inicio, selecione uma letra de 'A' a 'H' que vai um estado:\n");
    scanf (" %c", &estado1);

    printf ("Agora, digite um codigo para o seu estado, que pode ser de 1 a 9:\n");
    scanf (" %c",&CodigodaCarta1);

    printf ("Cadastre o nome de qualquer cidade do estado escolhido anterioarmente :\n");
    scanf("%s",&nomedacidade1);

    printf("Aplique o numero de habitantes na cidade citada anteriormente:\n");
    scanf("%d", &numerodehabitantes1);

    printf ("Cite a area em quilometros quadrados da cidade cadastrada:\n");
    scanf("%f", &areaemkm1);

    printf("Acrescente o PIB da cidade cadastrada:\n");
    scanf ("%f", &PIB1);

    printf("Para finalizar o cadastro, digite o numero de pontos turisticos da cidade escolhida anteriormente :\n");
    scanf("%d", &pontosturisticos1);
    
    //cadastro 2
    
    printf("Agora cadastre a proxima carta para o jogo Super Trunfo.\n");
    printf ("Para dar inicio, selecione uma letra de 'A' a 'H' que vai um estado:\n");
    scanf (" %c", &estado2);

    printf ("Agora, digite um codigo para o seu estado, que pode ser de 1 a 9:\n");
    scanf (" %c",&CodigodaCarta2);

    printf ("Cadastre o nome de qualquer cidade do estado escolhido anterioarmente :\n");
    scanf("%s",&nomedacidade2);

    printf("Aplique o numero de habitantes na cidade citada anteriormente:\n");
    scanf("%d", &numerodehabitantes2);

    printf ("Cite a area em quilometros quadrados da cidade cadastrada:\n");
    scanf("%f", &areaemkm2);

    printf("Acrescente o PIB da cidade cadastrada:\n");
    scanf ("%f", &PIB2);

    printf("Para finalizar o cadastro, digite o numero de pontos turisticos da cidade escolhida anteriormente :\n");
    scanf("%d", &pontosturisticos2);
    printf("\n");
    
    //resultado final:

    printf("Carta 1:\n");
    printf("estado: %c\n", estado1);
    printf("Codigo da carta: %c\n", CodigodaCarta1);
    printf("Nome da cidade: %s\n", nomedacidade1);
    printf ("Numero de habitantes: %d\n", numerodehabitantes1);
    printf("Area em Km: %f\n", areaemkm1);
    printf("PIB: %f\n", PIB1);
    printf("Pontos turisticos: %d\n\n", pontosturisticos1);

    printf("Carta 2:\n");
    printf("estado: %c\n", estado2);
    printf("Codigo da carta: %c\n", CodigodaCarta2);
    printf("Nome da cidade: %s\n", nomedacidade2);
    printf ("Numero de habitantes: %d\n", numerodehabitantes2);
    printf("Area em Km: %f\n", areaemkm2);
    printf("PIB: %f\n", PIB2);
    printf("Pontos turisticos: %d\n", pontosturisticos2);

    return 0;
}