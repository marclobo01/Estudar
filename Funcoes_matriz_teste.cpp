#include <stdio.h>

void criar(int mat[2][2]){
	int i,j;
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			mat[i][j]=2;
		}
	}
}


int main(){
	int mat[2][2];
	int i,j;
	criar(mat);
	
	for(i=0;i<2;i++){
		for(j=0;j<2;j++){
			printf("%d  ",mat[i][j]);
		}
		printf("\n");
	}
	
	
	
}
