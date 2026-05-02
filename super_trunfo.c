#include <stdio.h>
#include <ctype.h>

int main (){
	
	// PRIMEIRA CARTA
	
	char estado;        // armazena a letra do estado do usuario (A-H)
	char codigo[5];    // codigo da carta (ex: AO1)
	char cidade[50];  // nome da Cidade
	int populacao;    // numero de habitantes
	float area;      // area em km da Cidade inserida
	float pib;      // pib da Cidade
	int num_pontos_turis; // quantidade de pontos turisticos
	
	
	printf("Qual a Letra do seu Estado? A-H: ");
	scanf(" %c", &estado);
	estado = toupper(estado);
	
	printf("Qual o Codigo do seu Estado? ex: A01: ");
	scanf("%s", codigo);
	
	printf("Qual o nome da sua Cidade?: ");
	scanf(" %[^\n]", cidade);
	
	printf("Qual o numero de habitantes?: ");
	scanf("%i", &populacao);
	
	printf("Qual a area da Cidade?: ");
	scanf("%f", &area);
	
	printf("Qual o PIB da Cidade?: ");
	scanf("%f", &pib);
	
	printf("Numeros de pontos Turisticos?: ");
	scanf("%i", &num_pontos_turis);
	
	// SEGUNDA CARTA
	
	char estado2;      // armazena a letra do estado do usuario (A-H)
	char codigo2[5];  // codigo da carta (ex: AO1)
	char cidade2[50]; // nome da Cidade
	int populacao2;  // numero de habitantes
	float area2;    // area em km da Cidade inserida
	float pib2;    // pib da Cidade
	int num_pontos_turis2; // quantidade de pontos turisticos
	
	printf("Qual a Letra do seu Estado? A-H: ");
	scanf(" %c", &estado2);
	estado2 = toupper(estado2);
	
	printf("Qual o Codigo do seu Estado? ex: A01: ");
	scanf("%s", codigo2);
	
	printf("Qual o nome da sua Cidade?: ");
	scanf(" %[^\n]", cidade2);
	
	printf("Qual o numero de habitantes?: ");
	scanf("%i", &populacao2);
	
	printf("Qual a area da Cidade?: ");
	scanf("%f", &area2);
	
	printf("Qual o PIB da Cidade?: ");
	scanf("%f", &pib2);
	
	printf("Numeros de pontos Turisticos?: ");
	scanf("%i", &num_pontos_turis2);
	
	// PRINTF DA PRIMEIRA CARTA

	printf("\n============================================\n");
	printf("============================================\n");
	
	
	printf(" ==== Carta ==== 01:\n");
	printf("Estado: %c\n", estado);
	printf("Codigo: %s\n", codigo);
	printf("Nome da Cidade: %s\n", cidade);
	printf("Populacao: %i de habitantes\n", populacao);
	printf("Area: %.2fkm\n", area);
	printf("PIB: %.0f bilhoes de reais\n", pib);
	printf("Numero de Pontos Turisticos: %i\n", num_pontos_turis);
	
	
	// PRINTF DA SEGUNDA CARTA

	printf("\n============================================\n");
	printf("============================================\n");
	
	
	printf("\n ==== Carta ==== 02:\n");
	printf("Estado: %c\n", estado2);
	printf("Codigo: %s\n", codigo2);
	printf("Nome da Cidade: %s\n", cidade2);
	printf("Populacao: %i de habitantes\n", populacao2);
	printf("Area: %.2fkm\n", area2);
	printf("PIB: %.0f bilhoes de reais\n", pib2);
	printf("Numero de Pontos Turisticos: %i", num_pontos_turis2);
	
	
	
	
}