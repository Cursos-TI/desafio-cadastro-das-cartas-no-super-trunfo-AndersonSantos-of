#include <stdio.h>

int main() {
    
    printf("\n");
    printf("Montando a carta número 1\n");
    printf("\n");

    char estado;
    char codigo[50];
    char cidade[50];
    int populacao;
    float area;
    float pib;
    int p_turistico;

    printf("Digite o estado da carta com uma letra de A-H: ");
    scanf("%c",&estado);
    printf("Digite a letra do estado seguido por um número entre 01, 02, 03 e 04: ");
    scanf("%s",&codigo);
    printf("Digite o nome da cidade: ");
    scanf("%s",&cidade);
    printf("Qual a população da cidade escolhida? ");
    scanf("%d",&populacao);
    printf("Qual a área da cidade em km²? ");
    scanf("%f",&area);
    printf("Qual é o pib da cidade? ");
    scanf("%f",&pib);
    printf("Quantos pontos turisticos tem nessa cidade? ");
    scanf("%d",&p_turistico);
    printf("\n");

    
    printf("O estado da sua carta é: %c\n", estado);
    printf("Seu código é: %c%s\n", estado, codigo);
    printf("A cidade escolhida foi: %s\n", cidade);
    printf("A população da sua cidade é: %d\n", populacao);
    printf("Sua cidade tem uma de área de: %.3f\n",area);
    printf("A cidade escolhida tem um PIB de: %.3f\n", pib);
    printf("O número de pontos turisticos na cidade é: %d\n", p_turistico);
    
    printf("\n");
    printf("Montando a carta número 2\n");
    printf("Escolha uma combinação diferente da primeira\n");
    printf("\n");

    char estado2;
    char codigo2[50];
    char cidade2[50];
    int populacao2;
    float area2;
    float pib2;
    int p_turistico2;

    printf("Digite o estado da carta com uma letra de A-H: ");
    scanf(" %c",&estado2);
    printf("Digite a letra do estado seguido por um número entre 01, 02, 03 e 04: ");
    scanf("%s",&codigo2);
    printf("Digite o nome da cidade: ");
    scanf("%s",&cidade2);
    printf("Qual a população da cidade escolhida? ");
    scanf("%d",&populacao2);
    printf("Qual a área da cidade em km²? ");
    scanf("%f",&area2);
    printf("Qual é o pib da cidade? ");
    scanf("%f",&pib2);
    printf("Quantos pontos turisticos tem nessa cidade? ");
    scanf("%d",&p_turistico2);
    printf("\n");
    
    printf("O estado da sua carta é: %c\n", estado2);
    printf("Seu código é: %c%s\n", estado2, codigo2);
    printf("A cidade escolhida foi: %s\n", cidade2);
    printf("A população da sua cidade é de: %d\n", populacao2);
    printf("Sua cidade tem uma de área de: %.3f\n",area2);
    printf("A cidade escolhida tem um PIB de: %.3f\n", pib2);
    printf("O número de pontos turisticos na cidade é: %d\n", p_turistico2);
    printf("\n");

    return 0;
}
