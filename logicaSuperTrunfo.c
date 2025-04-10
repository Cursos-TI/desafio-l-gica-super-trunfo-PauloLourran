#include <stdio.h>

int main(){

    char estado1, estado2;
    char codigo1 [4], codigo2 [4];
    char cidade1 [50], cidade2 [50];
    unsigned long int populacao1, populacao2;
    float area1, area2;
    float pib1, pib2;
    int pturisticos1, pturisticos2;
  
    float densidade1, densidade2; // DENSIDADE POPULACIONAL (DIVIDE POPULAÇÃO POR ÁREA).
  
    float pibpercapita1, pibpercapita2; // PIB PER CAPITA (DIVIDE O PIB POR POPULAÇÃO).

    int rePibpercapita; // VARIÁVEL DE COMPARAÇÃO SIMPLES.

  //ENTRADA DE DADOS DA PRIMEIRA CARTA.    
  printf("CADASTRO DA PRIMEIRA CARTA!\n");
  printf("Estado da carta [A-H]:");
    scanf(" %c", &estado1);
  printf("cadastre o código da carta (ESTADO + NÚMERO 01...04!):");
    scanf("%3s", codigo1);
      getchar(); // PARA LIMPAR O BUFFER
  printf("Dígite o nome da cidade:");
    fgets(cidade1, 50, stdin); //A função fgets() lê uma linha inteira da entrada.
  printf("Dígite a população:");
    scanf("%lu", &populacao1);
  printf("Dígite a área em (Km):");
    scanf("%f", &area1);
  printf("Dígite o PIB da cidade:");
    scanf("%f", &pib1);
  printf("Dígite quantos pontos turísticos tem na cidade:");
    scanf("%d", &pturisticos1);

      densidade1 = (float)populacao1 / area1; //CÁLCULO DA DENSIDADE POPULACIONAL.

      pibpercapita1 = (pib1 * 1000000000) / (float)populacao1; //CÁLCULO DO PIB PER CAPITA.

  printf("\n...\n");

  //ENTRADA DE DADOS DA SEGUNGA CARTA.
  printf("CADASTRO DA SEGUNDA CARTA!\n");
  printf("Estado da carta [A-H]:");
    scanf(" %c", &estado2);
  printf("cadastre o código da carta (ESTADO + NÚMERO 01...04!):");
    scanf("%3s", codigo2);
      getchar(); // PARA LIMPAR O BUFFER
  printf("Dígite o nome da cidade:");
    fgets(cidade2, 50, stdin); //A função fgets() lê uma linha inteira da entrada.
  printf("Dígite a população:");
    scanf("%lu", &populacao2);
  printf("Dígite a área em (Km):");
    scanf("%f", &area2);
  printf("Dígite o PIB da cidade:");
    scanf("%f", &pib2);
  printf("Dígite quantos pontos turísticos tem na cidade:");
    scanf("%d", &pturisticos2);

      densidade2 = (float)populacao2 / area2; //CÁLCULO DA DENSIDADE POPULACIONAL.

      pibpercapita2 = (pib2 * 1000000000) / (float)populacao2; //CÁLCULO DO PIB PER CAPITA.

  printf("\n...\n");
  //EXIBIÇÃO DOS DADOS CATALOGADOS scanf:
  printf("DADOS DA CARTA UM!\n");
  printf("Estado: %c\n", estado1);
  printf("Código: %s\n", codigo1);
  printf("Cidade: %s\n", cidade1);
  printf("População: %lu\n", populacao1);
  printf("Área: %.2f km²\n", area1);
  printf("PIB: %.2f Bilhões de reais\n", pib1);
  printf("Pontos Turísticos: %d\n", pturisticos1);
  printf("Densidade Populacional: %.2f\n", densidade1);
  printf("PIB Per Capita: %.2f reais\n", pibpercapita1);
  printf("\n...\n");

  printf("DADOS DA CARTA DOIS!\n");
  printf("Estado: %c\n", estado2);
  printf("Código: %s\n", codigo2);
  printf("Cidade: %s\n", cidade2);
  printf("População: %lu\n", populacao2);
  printf("Área: %.2f km²\n", area2);
  printf("PIB: %.2f Bilhões de reais\n", pib2);
  printf("Pontos Turísticos: %d\n", pturisticos2);
  printf("Densidade Populacional: %.2f\n", densidade2);
  printf("PIB Per Capita: %.2f reais\n", pibpercapita2);
  printf("\n...\n");
  // NOME das DAS CIDADES E O VALOR EM REAIS DO PIB PER CAPITA
  printf("\nCOMPARAÇÃO DAS CARTAS (ATRIBUTO: PIB PER CAPITA):\n");
  printf("Cidade: %s", cidade1);
  printf("Carta (Um) PIB Per Capita: %.2f reais\n", pibpercapita1);
  printf("Cidade: %s", cidade2);
  printf("Carta (Dois) PIB Per Capita: %.2f reais\n", pibpercapita2);
  // ESTRUTURA DE DECISÃO SIMPLES 
  if(rePibpercapita = pibpercapita1 > pibpercapita2){   //SE O PIB PER CAPITA 1 REALMENTE FOR MAIOR EXIBIRA (ef).
    printf("\nCARTA (====UM====) VENCEU!!!\n");         //SE O PIB PER CAPITA 1 (NÃO) FOR MAIOR EXIBIRA (else).
  } else{ 
    printf("\nCARTA (====DOIS====) VENCEU!!!\n");
  }
  
  return 0;
  
}

