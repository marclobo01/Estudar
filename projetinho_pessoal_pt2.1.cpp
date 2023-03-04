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
			printf("Jogador X, sua jogada sera na posicao: ");
			scanf("%d",&m);
			
			for(int i=0;i<3;i++){
				for(int j=0;j<3;j++){
				
				}
			}
			
			switch(m){
				case 1:if(mat[2][0]=='A'){
					mat[2][0]='X';
					}else{
						printf("Jogada invalida. Jogue novamente \n");
						v--;	
					}
				break;
				case 2: if(mat[2][1]=='-'){
					mat[2][1]='X';
					}else{
						printf("Jogada invalida. Jogue novamente \n");
						v--;	
					}
				break;
				case 3: if(mat[2][2]=='-'){
					mat[2][2]='X';
					}else{
						printf("Jogada invalida. Jogue novamente \n");
						v--;	
					}
				break;
				case 4: if(mat[1][0]=='-'){
					mat[1][0]='X';
					}else{
						printf("Jogada invalida. Jogue novamente \n");
						v--;	
					}
				break;
				case 5: if(mat[1][1]=='-'){
					mat[1][1]='X';
					}else{
						printf("Jogada invalida. Jogue novamente \n");
						v--;	
					}
				break;
				case 6: if(mat[1][2]=='-'){
					mat[1][2]='X';
					}else{
						printf("Jogada invalida. Jogue novamente \n");
						v--;	
					}
				break;
				case 7: if(mat[0][0]=='-'){
					mat[0][0]='X';
					}else{
						printf("Jogada invalida. Jogue novamente \n");
						v--;	
					}
				break;
				case 8: if(mat[0][1]=='-'){
					mat[0][1]='X';
					}else{
						printf("Jogada invalida. Jogue novamente \n");
						v--;	
					}
				break;
				case 9: if(mat[0][2]=='-'){
					mat[0][2]='X';
					}else{
						printf("Jogada invalida. Jogue novamente \n");
						v--;	
					}
				
			}
			
			for(int i=0;i<3;i++){
				for(int j=0;j<3;j++){
					printf("%c ", mat[i][j]);
				}
				printf("\n");
			}
			
			
		}else {
			printf("Jogador O, sua jogada sera na posicao: ");
			scanf("%d",&m);
			switch(m){
				case 1:if(mat[2][0]=='-'){
					mat[2][0]='O';
					}else{
						printf("Jogada invalida. Jogue novamente \n");
						v--;	
					}
				break;
				case 2: if(mat[2][1]=='-'){
					mat[2][1]='O';
					}else{
						printf("Jogada invalida. Jogue novamente \n");
						v--;	
					}
				break;
				case 3: if(mat[2][2]=='-'){
					mat[2][2]='O';
					}else{
						printf("Jogada invalida. Jogue novamente \n");
						v--;	
					}
				break;
				case 4: if(mat[1][0]=='-'){
					mat[1][0]='O';
					}else{
						printf("Jogada invalida. Jogue novamente \n");
						v--;	
					}
				break;
				case 5: if(mat[1][1]=='-'){
					mat[1][1]='O';
					}else{
						printf("Jogada invalida. Jogue novamente \n");
						v--;	
					}
				break;
				case 6: if(mat[1][2]=='-'){
					mat[1][2]='O';
					}else{
						printf("Jogada invalida. Jogue novamente \n");
						v--;	
					}
				break;
				case 7: if(mat[0][0]=='-'){
					mat[0][0]='O';
					}else{
						printf("Jogada invalida. Jogue novamente \n");
						v--;	
					}
				break;
				case 8: if(mat[0][1]=='-'){
					mat[0][1]='O';
					}else{
						printf("Jogada invalida. Jogue novamente \n");
						v--;	
					}
				break;
				case 9: if(mat[0][2]=='-'){
					mat[0][2]='O';
					}else{
						printf("Jogada invalida. Jogue novamente \n");
						v--;	
					}
				
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
