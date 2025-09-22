#include<stdio.h>

int main(){
    
    char vetor[50];
    int i;
        
    for(i = 0; i < 10; i++ ){
        printf("Digite o %c nome: ", i+1);
        scanf("%c", &vetor[i]);
    }

    for(i = 0; i < 10; i++) {
        printf("Vetor %d: %c\n", i+1, vetor[i]);
    }

    return 0;
}