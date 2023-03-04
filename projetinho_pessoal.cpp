#include <stdio.h>

int print_mat(int mat[3][3]){
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d", mat[i][j]='a');
		}
		printf("\n");
	}
	return mat[3][3];
}
int main(){
	
	int mat[3][3];
	int i,j;
	
	printf("%d", print_mat(mat[3][3]));
	
	
	
	
	
}
