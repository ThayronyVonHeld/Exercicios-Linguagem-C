#include<stdio.h>
#include<locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese"); 
	
	float peso = 0, altura = 0, imc;
	
	printf("----------------------------------------------\n");
	printf("Ol�, Bem Vindo ao Calculador do IMC\n");
	printf("Precisamos de duas informa��es:\n");
	printf("Digite sua altura: ");
	scanf("%f", &altura);
	
	printf("Digite seu peso: ");
	scanf("%f", &peso);
	printf("-----------------------------------------------\n");	
	
	imc = peso / (altura*altura);
	
	if (imc < 18.5){
	printf("Seu IMC � de: %.2f\n", imc);
	printf("Seu IMC est� abaixo de 18.5\n");
	printf("Voc� est� abaixo do peso\n");
	printf("-----------------------------------------------");	
	}
	else if ((imc >= 18.5) && (imc < 25)){
	printf("Seu IMC � de: %.2f\n", imc);
	printf("Seu IMC est� entre 18.5 e 25\n");
	printf("Voc� est� no peso ideal\n");
	printf("-----------------------------------------------");	
	}
	else if ((imc >= 25) && (imc < 30)){
	printf("Seu IMC � de: %.2f\n", imc);
	printf("Seu IMC est� entre 25 e 30\n");
	printf("Voc� est� com sobrepeso\n");
	printf("-----------------------------------------------");
	}
	else if ((imc >= 30 ) && (imc < 40)){
	printf("Seu IMC � de: %.2f\n", imc);
	printf("Seu IMC est� entre 30 e 40\n");
	printf("Voc� est� com obesidade\n");
	printf("-----------------------------------------------");
	}
	else {
	printf("Seu IMC � de: %.2f\n", imc);
	printf("Seu IMC � maior que 40\n");
	printf("Voc� est� com obesidade m�rbida\n");
	printf("-----------------------------------------------");	
	}
	return 0;
}
