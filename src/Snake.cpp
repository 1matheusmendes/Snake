#include <stdio.h>

using namespace std;

const int altura = 20;
const int largura = 20;


void DesenhoTelaJogo (){
	
	for(int i = 0; i < largura; i ++){  //parede de cima
		
		printf ("%c",176);
	}
	printf("\n");
	
	for(int i = 0; i < altura; i ++){
		
		for(int j = 0; j < largura; j ++){ 
			
			if(j == 0){ //parede do canto
				
				printf("%c",176);
			}
			else if(j == largura - 1){ //parede da frente
				
				printf("%c",176);
			}
			else { //espa�o vago do meio
				
				printf(" ");
			}
		}
		printf("\n");
		
	}
	
	for(int i = 0; i < largura; i ++){ //parede de baixo
		
		printf ("%c",176);
		
	}
	printf("\n");	
}

int main(){
	
	DesenhoTelaJogo();
	
	return 0;
}
