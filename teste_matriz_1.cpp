# include <stdio.h>
int main(){
	
	float mat[5][4];
	int i=0,j=0;
	
	while(i<5){
		while(j<4){
			printf("Digite a nota do aluno %d \n", i+1);
			scanf("%f", &mat[i][j]);
			printf("%d %d \n", i,j);
			j++;
		}
		printf("%d \n", i);
		j=0;
		i++;
	}
	
	for(i=0;i<5;i++){
		for(j=0;j<4;j++){
			printf("%f ",mat[i][j]);
		}
		printf("\n");
	}
	
}
