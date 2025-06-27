#include <stdio.h>
#include <string.h>

int main() {
    int populacao, populacao02, PontosT, PontosT02;
    float PIB, PIB02, Area, Area02;
    char Estado[150], Estado02[150], codigodacarta[150], codigodacarta02[150], cidade[150], cidade02[150];

    printf("Numero total da populacao: \n");
    scanf("%d", &populacao);
    getchar(); 

    printf("Quantos pontos turisticos: \n");
    scanf("%d", &PontosT);
    getchar(); 

    printf("Qual o PIB: \n");
    scanf("%f", &PIB);
    getchar();
    printf("Area Total: \n");
    scanf("%f", &Area);
    getchar(); 

    printf("Nome do estado: \n");
    fgets(Estado, sizeof(Estado), stdin);
    Estado[strcspn(Estado, "\n")] = 0; 

    printf("Codigo da carta: \n");
    fgets(codigodacarta, sizeof(codigodacarta), stdin);
    codigodacarta[strcspn(codigodacarta, "\n")] = 0;

    printf("Nome da cidade: \n");
    fgets(cidade, sizeof(cidade), stdin);
    cidade[strcspn(cidade, "\n")] = 0;

    printf("\n--- OS DADOS DA PRIMEIRA CARTA SÃO ---\n");
    printf("Estado: %s\n", Estado);
    printf("Cidade: %s\n", cidade);
    printf("Populacao: %d\n", populacao);
    printf("Pontos Turisticos: %d\n", PontosT);
    printf("PIB: %.2f\n", PIB);
    printf("Area: %.2f km²\n", Area);
    printf("Codigo da carta: %s\n", codigodacarta);


    printf("Numero total da populacao: \n");
    scanf("%d", &populacao02);
    getchar(); 

    printf("Quantos pontos turisticos: \n");
    scanf("%d", &PontosT02);
    getchar(); 

    printf("Qual o PIB: \n");
    scanf("%f", &PIB02);
    getchar();
    printf("Area Total: \n");
    scanf("%f", &Area02);
    getchar(); 

    printf("Nome do estado: \n");
    fgets(Estado02, sizeof(Estado02), stdin);
    Estado02[strcspn(Estado02, "\n")] = 0; 

    printf("Codigo da carta: \n");
    fgets(codigodacarta02, sizeof(codigodacarta02), stdin);
    codigodacarta02[strcspn(codigodacarta02, "\n")] = 0;

    printf("Nome da cidade: \n");
    fgets(cidade02, sizeof(cidade02), stdin);
    cidade02[strcspn(cidade02, "\n")] = 0;

    printf("\n--- OS DADOS DA SEGUNDA CARTA SÃO ---\n");
    printf("Estado: %s\n", Estado02);
    printf("Cidade: %s\n", cidade02);
    printf("Populacao: %d\n", populacao02);
    printf("Pontos Turisticos: %d\n", PontosT02);
    printf("PIB: %.2f\n", PIB02);
    printf("Area: %.2f km²\n", Area02);
    printf("Codigo da carta: %s\n", codigodacarta02);
    return 0;
}
