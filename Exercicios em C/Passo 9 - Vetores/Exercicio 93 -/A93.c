#include<stdio.h>

int main(){
    
    int vetor[15];
    int i;
        
    for(i = 0; i < 15; i++ ){
        printf("Digite o %d numero: ", i+1);
        scanf("%d", &vetor[i]);
    }

    printf("vetor digitado:\n");
    for(i = 0; i < 15; i++) {
        printf("Vetor %d: %d\n", i+1, vetor[i]);
    }

    return 0;
}