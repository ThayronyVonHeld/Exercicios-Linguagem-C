#include<stdio.h>

int main(){
    
    int vetor[7];
    int i;
        
    for(i = 0; i < 7; i++ ){
        vetor[i] = 999;
    }

    printf("vetor digitado:\n");
    for(i = 0; i < 7; i++) {
        printf("Vetor %d: %d\n", i+1, vetor[i]);
    }

    return 0;
}
    