#include <stdio.h>


int main() {
    int Populacao;
    int Area;
    int PIB;
    int Pontos;
    char Codigo;

    printf("*** Projeto Cartas Super Trunfos ***\n");
    printf("PRIMEIRA CARTA:\n");
    printf("Código da cidade\n");
    scanf("%s", &Codigo);
    printf("Número da população\n");
    scanf("%d", &Populacao);
    printf("Número da população: %d\n", Populacao);
    printf("Área\n");
    scanf("%d", &Area);
    printf("Area: %d\n", Area);
    printf("PIB\n");
    scanf("%d", &PIB);
    printf("PIB: %d\n", PIB);
    printf("Pontos\n");
    scanf(" %d", &Pontos);
    printf("Pontos: %d\n", Pontos);

    float densidade;
    densidade = (float)Populacao / Area;
    printf("A densidade populacional é: %.2f\n", densidade);

    float pib;
    pib = (float)PIB / Populacao;
    printf("O PIB Per Capita é: %.2f\n", pib);

    //SEGUNDA CARTA
    int Populacao2;
    int Area2;
    int PIB2;
    int Pontos2;
    char Codigo2;
    
    
    
    
    
    
    printf("SEGUNDA CARTA:\n");
    printf("Código da cidade\n");
    scanf("%s", &Codigo2);
    printf("Número da população\n");
    scanf("%d", &Populacao2);
    printf("Número da população: %d\n", Populacao2);
    printf("Área\n");
    scanf("%d", &Area2);
    printf("Area: %d\n", Area2);
    printf("PIB\n");
    scanf("%d", &PIB2);
    printf("PIB: %d\n", PIB2);
    printf("Pontos\n");
    scanf(" %d", &Pontos2);
    printf("Pontos: %d\n", Pontos2);

    float densidade2;
    densidade2 = (float)Populacao2 / Area2;
    printf("A densidade populacional é: %.2f\n", densidade2);

    float pib2;
    pib2 = (float)PIB2 / Populacao2;
    printf("O PIB Per Capita é: %.2f\n", pib2);

    //Comparação entre as duas cartas
    int vitoriacidade1 = 0;
    int vitoriacidade2 = 0;

    // Comparar população
    if (Populacao > Populacao2) {
        printf("Cidade 1 tem maior população. \n");
        vitoriacidade1++;
    } else if (Populacao < Populacao2) {
        printf("Cidade 2 tem maior população. \n");
        vitoriacidade2++;
    } else {
        printf("As cidades têm a mesma população.\n");
    }

    // Comparar área
    if (Area > Area2) {
        printf("Cidade 1 tem maior área. \n");
        vitoriacidade1++;
    } else if (Area < Area2) {
        printf("Cidade 2 tem maior área. \n");
        vitoriacidade2++;
    } else {
        printf("As cidades têm a mesma área.\n");
    }

    // Comparar PIB
    if (PIB > PIB2) {
        printf("Cidade 1 tem maior PIB. \n");
        vitoriacidade1++;
    } else if (PIB < PIB2) {
        printf("Cidade 2 tem maior PIB. \n");
        vitoriacidade2++;
    } else {
        printf("As cidades têm o mesmo PIB.\n");
    }

    // Comparar pontos turísticos
    if (Pontos > Pontos2) {
        printf("Cidade 1 tem mais pontos turísticos. \n");
        vitoriacidade1++;
    } else if (Pontos < Pontos2) {
        printf("Cidade 2 tem mais pontos turísticos. \n");
        vitoriacidade2++;
    } else {
        printf("As cidades têm o mesmo número de pontos turísticos.\n");
    }

    // Determinar a cidade vencedora
    if (vitoriacidade1 > vitoriacidade2) {
        printf("A cidade vencedora é: %c\n", Codigo);  // Imprime o código da cidade 1
    } else if (vitoriacidade2 > vitoriacidade1) {
        printf("A cidade vencedora é: %c\n", Codigo2);  // Imprime o código da cidade 2
    } else {
        printf("As cidades empataram!\n");
    }

    return 0;
}

    
    
    



















    
