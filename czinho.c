#include <stdio.h> 
#include <stdbool.h>
int main () {
    float valor;
    printf("Valor da conta: \n");
    scanf("%f", &valor);
    int pessoas;
    printf("Quantidade de pessoas: \n");
    scanf("%d", &pessoas);
    bool aceitou_taxa;
    int entrada;
    
    printf("Adicionar 10%(Digite 1 para sim e 0 para não)?: \n");
    scanf("%d", &aceitou_taxa);
    aceitou_taxa = (entrada != 0);
    
    if (aceitou_taxa) {
        float conta_individual;
        conta_individual = (valor / pessoas) + (valor * 10 / 100);
        printf("O valor deu %f reais por pessoa \n", conta_individual);
    } else {
        float conta_individual;
        conta_individual = valor / pessoas;
        printf("O valor deu %f reais por pessoa \n", conta_individual);
    }
    return 0;
}