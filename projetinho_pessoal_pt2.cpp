#include <stdio.h>

int main(){
	printf("7 8 9 \n4 5 6 \n1 2 3 \n");
	
	char mat[3][3];
	int i,j,m;
	//'i' e 'j' são os indices do for para montar a matriz; enquanto 'm' coleta a jogada do jogador;
	
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			//printf("%c ", mat[i][j]= 'A');
			mat[i][j] = '-';
		}
		//printf("\n");
	}
	
	for(int v=0;v<9;v++){
		
		if(v%2==0){
			printf("Jogador X, escolha a localização da sua jogada.");
			scanf("%d",&m);
			
			for(int i=0;i<3;i++){
				for(int j=0;j<3;j++){
				
				}
			}
			
			switch(m){
				case 1: mat[2][0]='X';
				break;
				case 2: mat[2][1]='X';
				break;
				case 3: mat[2][2]='X';
				break;
				case 4: mat[1][0]='X';
				break;
				case 5: mat[1][1]='X';
				break;
				case 6: mat[1][2]='X';
				break;
				case 7: mat[0][0]='X';
				break;
				case 8: mat[0][1]='X';
				break;
				case 9: mat[0][2]='X';
				
			}
			
			for(int i=0;i<3;i++){
				for(int j=0;j<3;j++){
					printf("%c ", mat[i][j]);
				}
				printf("\n");
			}
			
			
		}else {
			printf("Jogador O, escolha a localização da sua jogada.");
			scanf("%d",&m);
			switch(m){
				case 1: mat[2][0]='O';
				break;
				case 2: mat[2][1]='O';
				break;
				case 3: mat[2][2]='O';
				break;
				case 4: mat[1][0]='O';
				break;
				case 5: mat[1][1]='O';
				break;
				case 6: mat[1][2]='O';
				break;
				case 7: mat[0][0]='O';
				break;
				case 8: mat[0][1]='O';
				break;
				case 9: mat[0][2]='O';
			}
			for(int i=0;i<3;i++){
				for(int j=0;j<3;j++){
					printf("%c ", mat[i][j]);
				}
				printf("\n");
			}
		}
	}
	
	
	
}
