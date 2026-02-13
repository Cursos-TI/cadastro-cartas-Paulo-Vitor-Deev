#include <stdio.h>

int main(){
    #include <stdio.h>
// Desafio super trunfo - Países
// cadastro carta1 - Variaveis
    char estado1, estado2, codigo1[5], codigo2[5], cidade1[20], cidade2[20]; 
    int populacao1, populacao2, pontosturisticos1, pontosturisticos2;
    float areakm1, areakm2, pib1, pib2, densidadepopulacional1, densidadepopulacional2, pibpercapita1, pibpercapita2;

// Dados carta 1
    printf("Digite a letra correspondente ao seu estado:\n");
    scanf("%c", &estado1);

    printf("Digite a letra do estado, seguida de um número de 01 a 04:\n");
    scanf("%s", &codigo1);

    printf("Digite sua cidade:\n");
    scanf("%s", &cidade1);

    printf("Digite a quantidade de habitantes de sua cidade:\n");
    scanf("%d", &populacao1);

    printf("Digite a área em km da sua cidade:\n");
    scanf("%f", &areakm1);

    printf("Digite o pib de sua cidade:\n");
    scanf("%f", &pib1);

    printf("Digite a quantos pontos turisticos existem em sua cidade:\n");
    scanf("%d", &pontosturisticos1);

    densidadepopulacional1 = (float) populacao1 / areakm1;
    pibpercapita1 = (float) pib1 / populacao1;

// Dados carta 2
    printf("\nDigite a letra correspondente ao seu estado:\n");
    scanf("%c", &estado2);

    printf("Digite a letra do estado, seguida de um número de 01 a 04:\n");
    scanf("%s", &codigo2);

    printf("Digite sua cidade:\n");
    scanf("%s", &cidade2);

    printf("Digite a quantidade de habitantes de sua cidade:\n");
    scanf("%d", &populacao2);

    printf("Digite a área em km da sua cidade:\n");
    scanf("%f", &areakm2);

    printf("Digite o pib de sua cidade:\n");
    scanf("%f", &pib2);

    printf("Digite a quantos pontos turisticos existem em sua cidade:\n");
    scanf("%d", &pontosturisticos2);
// calculos
    densidadepopulacional2 = (float) populacao2 / areakm2;
    pibpercapita2 = (float) pib2 / populacao2;

// Resultado 1 - carta
    printf("\nEstado: %c - Codigo: %s\n", estado1, codigo1);
    printf("Cidade: %s - População: %d\n", cidade1, populacao1);
    printf("Área em km: %f - Pib: %f\n", pib1);
    printf("Pontos turisticos: %d\n", pontosturisticos1);
    printf("A densidade populacional da cidade é: %.2f\n", &densidadepopulacional1);
    printf("O pib per capita é: %.2f\n", pibpercapita1);

// Resultado 2 - carta
    printf("\nEstado: %c - Codigo: %s\n", estado2, codigo2);
    printf("Cidade: %s - População: %d\n", cidade2, populacao2);
    printf("Área em km: %f - Pib: %f\n", pib2);
    printf("Pontos turisticos: %d\n", pontosturisticos2);
    printf("A densidade populacional da cidade é: %.2f\n", &densidadepopulacional2);
    printf("O pib per capita é: %.2f\n", pibpercapita2);

    return 0;


}
