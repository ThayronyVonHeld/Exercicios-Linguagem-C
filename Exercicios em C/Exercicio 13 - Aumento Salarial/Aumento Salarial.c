#include <stdio.h>

int main() {
	
	float salario, aumento;
	
	printf("Digite seu salario: ");
		scanf("%f", &salario);
	
	aumento = salario + (salario*0.15);
	
	printf("Seu novo salario e de: %.2f", aumento);
	
	return 0;
	
}
