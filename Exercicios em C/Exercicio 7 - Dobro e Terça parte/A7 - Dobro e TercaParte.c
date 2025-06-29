#include <stdio.h>

float n1, dobro, tercaparte = 0;

float main(){
	
	printf("Digite um numero: ");
		scanf("%f", &n1);
		
	dobro = n1 * 2;
	tercaparte = n1 / 3;
	
	printf("O dobro de %f e igual a %f\n ", n1, dobro);
	printf("A terca parte de %f e igual a %f", n1, tercaparte);
}
