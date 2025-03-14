#include <stdio.h>

int main(){
    char estado;
    char codigo[20];
    char cidade[20];
    int populacao;
    float area;
    float pib;
    int turistico;

    printf("Digite o estado: \n");
    scanf("%s", &estado);

    printf("Digite o codigo da carta: \n");
    scanf("%s", &codigo);

    printf("Digite o nome da cidade: \n");
    scanf("%s", &cidade);

    printf("Digite a quantidade de populacao: \n");
    scanf("%s", &populacao);

    printf("Digite a area em km: \n");
    scanf("%s", &area);

    printf("Digite o pib: \n");
    scanf("%s", &pib);

    printf("Digite o numero de pontos turistico \n");
    scanf("%s", &turistico);

    printf("Carta 2:\n");
    printf("estado: %s\n", &estado);
    printf("codigo: %s\n", &codigo);
    printf("nome da cidade: %s\n", &cidade);
    printf("populacao: %s\n", &populacao);
    printf("area: %s\n", &area);
    printf("pib: %s\n", &pib);
    printf("numero de pontos turistico: %s\n", &turistico);

}