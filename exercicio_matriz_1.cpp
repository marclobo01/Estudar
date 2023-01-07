#include <stdio.h>
int main(){
	int mat[3][3];
	int i,j,k,s=0;
	
	for(i=0;i<3;i++){
		for(j=0;j<3;j++){
			printf("Digite o termo da linha %d e coluna %d \n", i+1,j+1);
			scanf("%d",&mat[i][j]);
		}
	}
	
	for(k=0;k<3;k++){
		printf("%d", mat[k][k]);
		s = s+mat[k][k];
	}
	printf("\n");
	printf("%d", s);
	
}
