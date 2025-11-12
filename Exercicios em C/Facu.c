#include<stdio.h>


		void opcoes(int *escolha){
			printf("---------------------------------\n");
			printf("Menu Lista de Dados");
    		printf("Digite [1] para incluir na lista\n");
   			printf("Digite [2] para consultar a lista\n");
    		printf("Digite [3] para alterar a lista\n");
    		printf("Digite [4] para remover da lista\n");
    		printf("Digite [5] para sair\n");
			printf("Digite sua escolha: ");
   			scanf("%d", escolha);
		
		return escolha;

	}
		int main(){
			
			char lista[10][50];
			int i = 0;
			int continuar;
			int escolha;
			
		do{
		
			opcoes(&escolha);
			printf("------------------------------\n");
			
			if(escolha == 1){
				printf("LISTA\n");
				printf("--------------------------\n");
            for(i; i < 50; i++){
                printf("%d. ", i+1);
                scanf("%s", &lista[i]);
                printf("Digite [1] para continuar ou [0] para sair: ");
                scanf("%d", &escolha);
                if(escolha != 1){
                	break;
                	
				}
                
				}

        } else if(escolha == 2){
        	
        	
		}

    }
    while(escolha == 0);
}

        
         