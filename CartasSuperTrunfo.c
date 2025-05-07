#include <stdio.h>

int main() {
    
    // fiz um pequeno titulo
    printf("\n");// tô usando isso aqui para pular um espaço vazio
    printf("    CRIANDO AS CARTAS DO JOGO\n");
    printf("\n");
    printf("Montando a carta número 1\n");
    printf("\n");

    // definindo as variaveis numero 1
    char estado;
    char codigo[50];
    char cidade[50];
    int populacao;
    float area, pib, densidade, pib_percapita;
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

    //calculando o valor da densidade e pib per capita pra carta 1
    densidade= (float) populacao/area;
    pib_percapita= (float) pib/populacao;

    // mostrando o resultado da numero 1
    printf("O estado da sua carta é: %c\n", estado);
    printf("Seu código é: %c%s\n", estado, codigo);
    printf("A cidade escolhida foi: %s\n", cidade);
    printf("A população da sua cidade é: %d\n", populacao);
    printf("Sua cidade tem uma de área de: %.3f\n",area);
    printf("A cidade escolhida tem um PIB de: %.3f\n", pib);
    printf("O número de pontos turisticos na cidade é: %d\n", p_turistico);
    printf("Sua cidade tem uma densidade de: %.3f\n", densidade);
    printf("O PIB per capita é: %.3f\n", pib_percapita);
    
    // aqui começa a montagem da carta 2
    printf("\n");
    printf("Montando a carta número 2\n");
    printf("Escolha uma combinação de elementos diferente da primeira\n");
    printf("\n");

    // é basicamente o mesmo codigo que na primeira so mudei o nome das variaveis
    char estado2;
    char codigo2[50];
    char cidade2[50];
    int populacao2;
    float area2, pib2, densidade2, pib_percapita2;
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

    // calculando densidade e pib per capita pra carta 2
    densidade2= (float) populacao2/area2;
    pib_percapita2= (float) pib2/populacao2;
    
    // exibindo o resultado da carta 2
    printf("O estado da sua carta é: %c\n", estado2);
    printf("Seu código é: %c%s\n", estado2, codigo2);
    printf("A cidade escolhida foi: %s\n", cidade2);
    printf("A população da sua cidade é de: %d pessoas\n", populacao2);
    printf("Sua cidade tem uma de área de: %.3f km²\n",area2);
    printf("A cidade escolhida tem um PIB de: %.3f reais\n", pib2);
    printf("O número de pontos turisticos na cidade é: %d\n", p_turistico2);
    printf("Sua cidade tem uma densidade de: %.3f pessoas por km²\n", densidade2);
    printf("O PIB per capita é: %.3f reais por pessoa\n", pib_percapita2);
    printf("\n");

    // aqui iniciei a comparaçao das cartas
    printf("Comparação dos atributos das cartas\n");
    printf("Se for 1(verdadeiro) a carta 1 marca ponto, se for 0(falso) a carta 2 pontua"); //exibi isso para a pessoa fazer a contagenm dos pontos
    printf("\n");

    // definindo mais variaveis
    float super_poderC1,super_poderC2, inverso_densidade, inverso_densidade2;//super_poderC1= super poder da carta 1, o mesmo vale pra C2

    inverso_densidade=1/densidade;
    inverso_densidade2=1/densidade2;// eu não entendi bem oq seria o inverso da densidade, na matematica o inverso de uma conta é 1 dividido por ela, então fiz isso

    super_poderC1= (float) populacao+area+pib+pib_percapita+p_turistico+inverso_densidade;// somando os super poderes
    super_poderC2= (float) populacao2+area2+pib2+pib_percapita2+p_turistico2+inverso_densidade2;
    printf("O super poder da carta 1 é: %f\n", super_poderC1);
    printf("O super poder da carta 2 é: %f\n", super_poderC2);// exibindo o super poder
    printf("\n");

    //fazendo a comparação e exibindo o resultado
    printf("A população da carta 1 (%d) é maior que a da carta 2 (%d)? Resultado: %d\n", populacao, populacao2,(populacao>populacao2));
    printf("A área da carta 1 (%f) é maior que a da carta 2 (%f)? Resultado: %d\n", area, area2,(area>area2));
    printf("O PIB da carta 1 (%f) é maior que o da carta 2 (%f)? Resultado: %d\n", pib, pib2,(pib>pib2));
    printf("A densidade da carta 1 (%f) é menor que da carta 2 (%f)? Resultado: %d\n", densidade, densidade2,(densidade<densidade2));
    printf("O pib per capita da carta 1 (%f) é maior que o da carta 2 (%f)? Resultado: %d\n", pib_percapita, pib_percapita2,(pib_percapita>pib_percapita2));
    printf("A carta 1 (%d) tem mais pontos turisticos que a carta 2 (%d)? Resultado: %d\n", p_turistico, p_turistico2,(p_turistico>p_turistico2));
    printf("O super poder da carta 1 (%f) é maior que o da carta 2 (%f)? Resultado: %d\n", super_poderC1, super_poderC2,(super_poderC1>super_poderC2));
    printf("\n");

    return 0;
}
