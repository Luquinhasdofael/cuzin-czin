#include <stdio.h>
int main(void) {
	int i; // cria o i
	int j; // variavel do tamanho da array que o user quer
	int k;
	printf("Insira o tamanho da sua array: ");
	scanf("%d", &j); // escanea o input do usuario e atribui a variavel j
	int numeros[j]; // cria uma array com tamanho "j"
	printf("Insira os elementos dentro da array:\n");
	for (i = 0; i < j; i++) {
		scanf("%d", &numeros[i]); // escanea inputs para array i vezes ate ela atingir o valor de j
	}
	for (i = 0; i < j; i++) {
		printf("%d ", numeros[i]); // pecorre a array i vezes para imprimir ela inteiramente
	}
	int target; // cria a variavel target, o valor que queremos chegar apartir do que foi posto na array, criar um sistema caso nao de para atingir o target com os valores fornecidos
	printf("\nInsira o target: ");
	scanf("%d", &target); // escanea target
	int encontrado = 0;
    
	for (i = 0; i < j; i++) {
		for(k = i + 1; k < j; k++) {
			if (numeros[i] + numeros[k] == target) {
				printf("\nCombinacao encontrada: [%d, %d]", numeros[i], numeros[k]);
				encontrado = 1;
				break;
			}
		}
	}
    
	if (encontrado == 0) {
		printf("Não da!");
	}
	return 0;
}
