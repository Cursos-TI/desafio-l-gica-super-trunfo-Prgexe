#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

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

    //comparação entre as cidades
    /*int vitoriacidade1 = 0;
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
    }*/

    
    // Mostrar o menu e ler a escolha

int opcao;    
    printf("\nEscolha o atributo para comparar:\n");
    printf("1 - População\n");
    printf("2 - Área\n");
    printf("3 - PIB\n");
    printf("4 - Pontos\n");
    printf("5 - Densidade populacional\n");
    printf("6 - PIB per capita\n");
    printf("Digite o número correspondente ao atributo: ");
    scanf("%d", &opcao);

    // Comparar os atributos com base na escolha do jogador
    switch(opcao) {
        case 1:
            // Comparando População
            printf("\nComparando População:\n");
            if (Populacao > Populacao2)
                printf("Cidade 1 vence com a maior população.\n");
            else if (Populacao < Populacao2)
                printf("Cidade 2 vence com a maior população.\n");
            else
                printf("Empate na população.\n");
            break;
        case 2:
            // Comparando Área
            printf("\nComparando Área:\n");
            if (Area > Area2)
                printf("Cidade 1 vence com a maior área.\n");
            else if (Area < Area2)
                printf("Cidade 2 vence com a maior área.\n");
            else
                printf("Empate na área.\n");
            break;
        case 3:
            // Comparando PIB
            printf("\nComparando PIB:\n");
            if (PIB > PIB2)
                printf("Cidade 1 vence com o maior PIB.\n");
            else if (PIB < PIB2)
                printf("Cidade 2 vence com o maior PIB.\n");
            else
                printf("Empate no PIB.\n");
            break;
        case 4:
            // Comparando Pontos
            printf("\nComparando Pontos:\n");
            if (Pontos > Pontos2)
                printf("Cidade 1 vence com mais pontos.\n");
            else if (Pontos < Pontos2)
                printf("Cidade 2 vence com mais pontos.\n");
            else
                printf("Empate nos pontos.\n");
            break;
        case 5:
            // Comparando Densidade Populacional
            printf("\nComparando Densidade Populacional:\n");
            if (densidade > densidade2)
                printf("Cidade 1 vence com maior densidade populacional.\n");
            else if (densidade < densidade2)
                printf("Cidade 2 vence com maior densidade populacional.\n");
            else
                printf("Empate na densidade populacional.\n");
            break;
        case 6:
            // Comparando PIB per Capita
            printf("\nComparando PIB per Capita:\n");
            if (pib > pib2)
                printf("Cidade 1 vence com o maior PIB per capita.\n");
            else if (pib < pib2)
                printf("Cidade 2 vence com o maior PIB per capita.\n");
            else
                printf("Empate no PIB per capita.\n");
            break;
        default:
            printf("Opção inválida! Escolha um número de 1 a 6.\n");
    }

    
    
    
    return 0;
}

    
    
    



















    /*if(Populacao > Populacao2){
        printf("Cidade 1 tem maior população. \n");
        vitoriacidade1++;
    } else {
        printf("Cidade 2 tem maior população.");
        vitoriacidade2++;
    }

    if(Area > Area2){
        printf("Cidade 1 tem maior área. \n");
        vitoriacidade1++;
    } else {
        printf("Cidade 2 tem maior área.");
        vitoriacidade2++;
    }

    if(PIB > PIB2){
        printf("Cidade 1 tem maior PIB. \n");
        vitoriacidade1++;
    } else {
        printf("Cidade 2 tem maior PIB.");
        vitoriacidade2++;
    }

    if(Pontos > Pontos2){
        printf("Cidade 1 tem mais pontos turísticos. \n");
        vitoriacidade1++;
    } else {
        printf("Cidade 2 tem mais pontos turísticos.");
        vitoriacidade2++;
    }

if(vitoriacidade1 > vitoriacidade2){
    printf("A cidade vencedora é: %c \n", Codigo);
 } else {
    printf("A cidade vencedora é: %c", Codigo2);
    }
 



    
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    return 0;
}
*/
