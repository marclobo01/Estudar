#include<stdio.h>
int main(){
	int seq[5][3];
	int i,j;
	float soma;
	
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			scanf("%d", &seq[i][j]);
		}
	}
	
	for(i=0;i<5;i++){
		for(j=0;j<3;j++){
			printf("%d ", seq[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<5;i++){
		soma=0;
		for(j=0;j<3;j++){
			soma += seq[i][j];
		}
		printf("%.2f  ",soma/3);
	}
	
}
