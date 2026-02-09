#include <stdio.h>
// Desafio super trunfo - Países
// cadastro carta1 - Variáveis
int main(){
// Variáveis 1
    char estado1;
    char codigo1[5];
    char cidade1[20];
    int populaçao1;
    float areakm1;
    float pib1;
    int pontosturisticos1;
//Variáveis 2
    char estado2;
    char codigo2[5];
    char cidade2;
    int populaçao2;
    float areakm2;
    float pib2;
    int pontosturisticos2;

// Dados variáveis 1    
    printf("Digite a letra correspondente ao seu estado:\n");
    scanf("%c", &estado1);

    printf("Digite a letra do estado, seguida de um número de 01 a 04:\n");
    scanf("%s", &codigo1);

    printf("Digite sua cidade:\n");
    scanf("%s", &cidade1);

    printf("Digite a quantidade de habitantes de sua cidade:\n");
    scanf("%d", &populaçao1);

    printf("Digite a área em km da sua cidade:\n");
    scanf("%f", &areakm1);

    printf("Digite o pib de sua cidade:\n");
    scanf("%f", &pib1);

    printf("Digite a quantos pontos turisticos existem em sua cidade:\n");
    scanf("%d", &pontosturisticos1);  

// Dados variaveis 2
    printf("\nDigite a letra correspondente ao seu estado:\n");
    scanf("%c", &estado2);

    printf("Digite a letra do estado, seguida de um número de 01 a 04:\n");
    scanf("%s", &codigo2);

    printf("Digite sua cidade:\n");
    scanf("%s", &cidade2);

    printf("Digite a quantidade de habitantes de sua cidade:\n");
    scanf("%d", &populaçao2);

    printf("Digite a área em km da sua cidade:\n");
    scanf("%f", &areakm2);

    printf("Digite o pib de sua cidade:\n");
    scanf("%f", &pib2);

    printf("Digite a quantos pontos turisticos existem em sua cidade:\n");
    scanf("%d", &pontosturisticos2);

// Dados cartas 1 
    printf("Estado: %c - Codigo: %s\n", estado1, codigo1);
    printf("Cidade: %s - População: %d\n", cidade1, populaçao1);
    printf("Área em km: %f - Pib: %f\n", areakm1, pib1);
    printf("Pontos turisticos: %d\n", pontosturisticos1);

// Dados cartas 2
    printf("\nEstado: %c - Codigo: %s\n", estado2, codigo2);
    printf("Cidade: %s - População: %d\n", cidade2, populaçao2);
    printf("Área em km: %f - Pib: %f\n", areakm2, pib2);
    printf("Pontos turisticos: %d\n", pontosturisticos2);

    return 0;


}

